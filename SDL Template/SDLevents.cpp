#include "SDLevents.hpp"

void SDLEvents::events() {
	SDL_Event event;

	while (SDL_PollEvent(&event)) {
		switch (event.type) {
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym) {
			case SDLK_ESCAPE:
				//action
				break;
			case SDLK_w:
				//action
				break;
			case SDLK_s:
				//action
				break;
			case SDLK_d:
				//action
				break;
			case SDLK_a:
				//action
				break;
			case SDLK_SPACE:
				//action
				break;
			}
			break;
		case SDL_MOUSEBUTTONDOWN:
			//mouse click action
			break;
		case SDL_MOUSEBUTTONUP:
			break;
		case SDL_KEYUP:
			break;
		case SDL_QUIT:
			//exit program action
			break;
		};
	};
}



