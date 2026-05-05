#pragma once
#include <algorithm>
#include <windows.h>
#include <math.h>
#include <cmath>

struct vec2_t {
    float x, y;

    vec2_t() : x(0.0f), y(0.0f) {}
    vec2_t(float px, float py) : x(px), y(py) {}

    vec2_t operator+(const vec2_t& other) const {
        return vec2_t(x + other.x, y + other.y);
    }

    bool operator==(const vec2_t& other) const {
        return x == other.x && y == other.y;
    }

    static vec2_t zero() {
        return vec2_t(0.0f, 0.0f);
    }
};

struct vec3_t {
    float x, y, z;

    vec3_t(float _x = 0, float _y = 0, float _z = 0) {
        x = _x;
        y = _y;
        z = _z;
    }

    vec3_t operator+(vec3_t& vec) {
        return vec3_t(x + vec.x, y + vec.y, z + vec.z);
    }

    vec3_t operator+(const vec3_t& vec) {
        return vec3_t(x + vec.x, y + vec.y, z + vec.z);
    }

    vec3_t operator+(const vec3_t& vec) const {
        return vec3_t(x + vec.x, y + vec.y, z + vec.z);
    }

    vec3_t operator+(float n) {
        return vec3_t(x + n, y + n, z + n);
    }

    vec3_t operator+=(vec3_t vec) {
        x += vec.x;
        y += vec.y;
        z += vec.z;

        return *this;
    }

    vec3_t operator+=(float n) {
        x += n;
        y += n;
        z += n;

        return *this;
    }

    vec3_t operator-(vec3_t vec) {
        return vec3_t(x - vec.x, y - vec.y, z - vec.z);
    }

    vec3_t operator-(float n) {
        return vec3_t(x - n, y - n, z - n);
    }

    vec3_t operator-=(vec3_t vec) {
        x -= vec.x;
        y -= vec.y;
        z -= vec.z;

        return *this;
    }

    vec3_t operator-=(float n) {
        x -= n;
        y -= n;
        z -= n;

        return *this;
    }

    vec3_t operator/(vec3_t vec) {
        return vec3_t(x / vec.x, y / vec.y, z / vec.z);
    }

    vec3_t operator/(float n) {
        return vec3_t(x / n, y / n, z / n);
    }

    vec3_t operator/(int n) {
        return vec3_t(x / n, y / n, z / n);
    }

    vec3_t operator/=(vec3_t vec) {
        x /= vec.x;
        y /= vec.y;
        z /= vec.z;

        return *this;
    }

    vec3_t operator/=(float n) {
        x /= n;
        y /= n;
        z /= n;

        return *this;
    }

    vec3_t operator*(vec3_t vec) {
        return vec3_t(x * vec.x, y * vec.y, z * vec.z);
    }

    vec3_t operator*(float n) {
        return vec3_t(x * n, y * n, z * n);
    }

    vec3_t operator*=(vec3_t vec) {
        x *= vec.x;
        y *= vec.y;
        z *= vec.z;

        return *this;
    }

    vec3_t operator*=(float n) {
        x *= n;
        y *= n;
        z *= n;

        return *this;
    }

    bool operator==(vec3_t vec) {
        return x == vec.x && y == vec.y && z == vec.z;
    }

    bool operator!=(vec3_t vec) {
        return !(*this == vec);
    }

    float length() {
        return std::sqrtf(this->length_sqr());
    }

    float length_sqr() {
        return x * x + y * y + z * z;
    }

    float length_2d() {
        return std::sqrtf(this->length_2d_sqr());
    }

    float length_2d_sqr() {
        return x * x + y * y;
    }

    vec3_t lerp(const vec3_t& other, float t) const {
        return vec3_t(x + t * (other.x - x), y + t * (other.y - y), z + t * (other.z - z));
    }

    vec3_t normalize() {
        float len = this->length();
        if (len > 0.0001f) { 
            return vec3_t(this->x / len, this->y / len, this->z / len);
        }
        return vec3_t(0, 0, 0); 
    }

    vec3_t normalize_angle() {
        if (x > 89.0f) x = 89.0f;
        if (x < -89.0f) x = -89.0f;

        
        while (y < -180.0f) y += 360.0f;
        while (y > 180.0f) y -= 360.0f;

        
        z = 0.0f;

        return *this;
    }

    vec3_t& clamp() {
        x = std::clamp(x, -89.f, 89.f);
        y = std::clamp(std::remainder(y, 360.0f), -180.f, 180.f);
        z = 0.f;

        return *this;
    }

    float normalize_in_place()
    {
        const float length = this->length();
        const float radius = 1.0f / (length + FLT_EPSILON);

        x *= radius;
        y *= radius;
        z *= radius;

        return length;
    }

    float dot(float* v)
    {
        return this->x * v[0] + this->y * v[1] + this->z * v[2];
    }

    float dot(vec3_t v, bool additional)
    {
        if (additional)
            return this->x * v.y + this->y * v.x + this->z * v.z;

        return this->x * v.x + this->y * v.y + this->z * v.z;
    }

    bool is_valid() {
        if ((x == 0) && (y == 0) && (z == 0))
            return false;

        return true;
    }
};

struct vec4_t {
    float x, y, z, w;

    vec4_t() : x(0.0f), y(0.0f), z(0.0f), w(0.0f) {}
    vec4_t(float px, float py, float pz, float pw) : x(px), y(py), z(pz), w(pw) {}

    vec4_t operator+(const vec4_t& other) const {
        return vec4_t(x + other.x, y + other.y, z + other.z, w + other.w);
    }

    bool operator==(const vec4_t& other) const {
        return x == other.x && y == other.y && z == other.z && w == other.w;
    }

    static vec4_t zero() {
        return vec4_t(0.0f, 0.0f, 0.0f, 0.0f);
    }
};