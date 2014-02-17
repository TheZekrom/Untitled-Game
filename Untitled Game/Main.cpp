#include "stdafx.h"
#include "Main.h"


CMain::CMain()
{
	quit = false;
	csdl_setup = new CSDL_Setup(&quit);
}


CMain::~CMain()
{
	
}

void CMain::GameLoop(void)
{
	while (!quit && csdl_setup->GetEvent()->type != SDL_QUIT)
	{
		csdl_setup->Begin();
		SDL_RenderPresent(csdl_setup->GetRenderer());
	}


}