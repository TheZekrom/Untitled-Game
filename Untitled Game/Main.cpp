#include "stdafx.h"
#include "Main.h"


CMain::CMain()
{
	quit;
	window;
	renderer;
	window = SDL_CreateWindow("First Game", 100, 100, 1280, 720, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	event = new SDL_Event();
	grass_image = IMG_LoadTexture(renderer, "grass.bmp");
	grass_rect.x = 0;
	grass_rect.y = 0;
	grass_rect.h = 256;
	grass_rect.w = 256;
	if (window == nullptr){std::cout << "Window Failed to Instailize";quit = 1;}
}


CMain::~CMain()
{
	delete event;
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}

void CMain::GameLoop(void)
{
	while (!quit && event->type != SDL_QUIT)
	{
		SDL_PollEvent(event);
		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, grass_image, NULL, &grass_rect);
		SDL_RenderPresent(renderer);
	}


}