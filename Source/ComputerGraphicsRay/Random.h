#pragma once
#include <stdlib.h>
#include <algorithm>

inline void seedRandom(unsigned int seed)
{
	seed = rand() % seed;
	srand(seed);
}
float random01()
{
	return float(rand() % RAND_MAX);
}
float random(float min, float max)
{
	if (min > max) std::swap(min, max);

	return rand() % int(max - min + 1) + min;
}