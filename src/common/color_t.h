#pragma once
#include "../../external/imgui/imgui.h"
struct color_t {
    float r, g, b, a;

    
    color_t() : r(1.f), g(1.f), b(1.f), a(1.f) {}

    
    color_t(float r, float g, float b, float a = 1.f)
        : r(r), g(g), b(b), a(a) {
    }

    
    static color_t from_int(int r, int g, int b, int a = 255) {
        return color_t(r / 255.f, g / 255.f, b / 255.f, a / 255.f);
    }

   
    operator ImVec4() const { return ImVec4(r, g, b, a); }

    
    ImU32 to_u32() const {
        return ImGui::ColorConvertFloat4ToU32(ImVec4(r, g, b, a));
    }
};