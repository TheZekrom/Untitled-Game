#include <iostream>
#include <SDL.h>

int main(int argc, char **argv){

	bool quit = nullptr;
	
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;
	SDL_Event* event = new SDL_Event();

	SDL_Init(SDL_INIT_VIDEO);

	window = SDL_CreateWindow("First Game", 100, 100, 1280, 720, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

	if (window == nullptr){
		std::cout << "Window Failed to Instailize";
		return 0;
	}

	
	while (!quit && event-> type != SDL_QUIT)
	{
		SDL_PollEvent(event);
		SDL_RenderClear(renderer);

		SDL_RenderPresent(renderer);
	}

	delete event;
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	

	return 0;
}