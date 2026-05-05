#pragma once
#include "../common/math/vector.h"

struct rect_t
{
public:
	inline auto center() const -> vec2_t
	{
		return vec2_t(x + w / 2.f, y + h / 2.f);
	}

public:
	inline auto get_min() const -> vec2_t
	{
		return vec2_t(x, y);
	}

public:
	inline auto get_max() const -> vec2_t
	{
		return vec2_t(x + w, y + h);
	}

public:
	inline auto get_size() const -> vec2_t
	{
		return vec2_t(w, h);
	}

public:
	float x = 0.f;
	float y = 0.f;
	float w = 0.f;
	float h = 0.f;
};