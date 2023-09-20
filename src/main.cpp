#include "SDL.h"

int main(int argc, char** argv)
{
	SDL_Init(0);
	SDL_Window* window = SDL_CreateWindow("SDL Template", 1280, 720, SDL_WINDOW_RESIZABLE);
	SDL_ShowWindow(window);

	bool running = true;
	SDL_Event e;
	while (running) {
		SDL_PollEvent(&e);
		switch (e.type) {
		case SDL_EVENT_MOUSE_WHEEL: {
			SDL_Log("%f, %f", e.wheel.x, e.wheel.y);
			break;
		}
		case SDL_EVENT_QUIT: {
			running = false;
			break;
		}
		}
	}

	SDL_DestroyWindow(window);
}