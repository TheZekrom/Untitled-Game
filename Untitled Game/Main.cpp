#include "stdafx.h"
#include "Main.h"

#include "StdAfx.h"
#include "Main.h"

CMain::CMain(int passed_ScreenWidth, int passed_ScreenHeight)
{
	ScreenWidth = passed_ScreenWidth;
	ScreenHeight = passed_ScreenHeight;
	quit = false;
	csdl_setup = new CSDL_Setup(&quit, ScreenWidth, ScreenHeight);
	grass = new CSprite(csdl_setup->GetRenderer(), "grass.bmp", 0, 0, ScreenWidth, ScreenHeight);
	bob = new CSprite(csdl_setup->GetRenderer(), "bob.png", 300, 250, 50, 100);
}


CMain::~CMain()
{
	
}

void CMain::GameLoop(void)
{
	while (!quit && csdl_setup->GetEvent()->type != SDL_QUIT)
	{
		csdl_setup->Begin();

		grass->Draw();

		bob->Draw();

		csdl_setup->End();
	}


}