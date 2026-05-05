#include <windows.h>
#include "vector.h"
#include "../../../external/imgui/imgui.h"
#pragma once

using screen_transform_t = __int64(__fastcall*)(const float*, float*);
inline screen_transform_t o_screen_transform = nullptr;


struct view_matrix_t {
    float data[4][4];

    using screen_transform_t = bool(__fastcall*)(const vec3_t&, vec3_t&);
    bool wts(const vec3_t& world_pos, vec2_t& screen_pos) const {
        if (!o_screen_transform) return false;

        float ndc[3]; 

        
        if (o_screen_transform(&world_pos.x, ndc) != 0) 
            return false;
        

        float screen_width = ImGui::GetIO().DisplaySize.x;
        float screen_height = ImGui::GetIO().DisplaySize.y;

        screen_pos.x = (screen_width * 0.5f) + (ndc[0] * screen_width * 0.5f);
        screen_pos.y = (screen_height * 0.5f) - (ndc[1] * screen_height * 0.5f);

        return true;
    }
}; 
