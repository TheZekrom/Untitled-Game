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
	SDL_Texture* grass_image = nullptr;
	SDL_Rect grass_rect;
};

