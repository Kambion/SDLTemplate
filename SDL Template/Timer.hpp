#include "SDL_common.hpp"

struct Timer {
	int t1, t2 = 0, frames = 0, lastState = 0;
	double delta = 0, worldTime = 0, fpsTimer = 0, fps = 0;

	Timer() : t1(SDL_GetTicks()) {}

	void tick();
};