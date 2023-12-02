#pragma once
#include <glm/glm.hpp>
#include <glm/gtx/norm.hpp>
#include <cstdlib>
#include <algorithm>

template <typename T>
inline T lerp(T a, T b, float t)
{
	return (a * (1.0f - t)) + (b * t);
}