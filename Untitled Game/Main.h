#pragma once
class CMain
{
public:
	CMain();
	~CMain();
	void GameLoop();

private:
	bool quit;
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* event;
};

