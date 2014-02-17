#include "StdAfx.h"
#include "SDL_Setup.h"

CSDL_Setup::CSDL_Setup(bool* quit)
{
	window = NULL;
	renderer = NULL;
	renderer;
	window = SDL_CreateWindow("First Game", 100, 100, 1280, 720, SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);
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

void CSDL_Setup::End(){}