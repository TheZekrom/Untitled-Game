#include "StdAfx.h"
#include "SDL_Setup.h"

CSDL_Setup::CSDL_Setup(bool* quit, int ScreenWidth, int ScreenHeight)
{
	window = NULL;
	renderer = NULL;
	renderer;
	window = SDL_CreateWindow("My first RPG!", 100, 100, ScreenWidth, ScreenHeight, SDL_WINDOW_SHOWN);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	event = new SDL_Event();
}


CSDL_Setup::~CSDL_Setup()
{
	delete event;
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
}
SDL_Renderer* CSDL_Setup::GetRenderer()
{
	return renderer;
}

SDL_Event* CSDL_Setup::GetEvent()
{
	return event;
}

void CSDL_Setup::Begin()
{
	SDL_PollEvent(GetEvent());
	SDL_RenderClear(GetRenderer());
}

void CSDL_Setup::End()
{
	SDL_RenderPresent(GetRenderer());
}