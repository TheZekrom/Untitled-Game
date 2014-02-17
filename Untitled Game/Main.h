#pragma once
#include "SDL_Setup.h"
class CMain
{
public:
	CMain();
	~CMain();
	void GameLoop();

private:
	bool quit;
	CSDL_Setup*	csdl_setup;
};

