#pragma once
#include "SDL_Setup.h"
#include "Sprite.h"

class CMain
{
public:
	CMain(int passed_ScreenWidth, int passed_ScreenHeight);
	~CMain(void);
	void GameLoop();

private:
	int ScreenWidth;
	int ScreenHeight;

	bool quit;

	CSprite* grass;

	CSprite* bob;

	CSDL_Setup* csdl_setup;

};