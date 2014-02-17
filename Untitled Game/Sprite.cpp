#include "StdAfx.h"
#include "Sprite.h"

CSprite::CSprite(SDL_Renderer* passed_renderer, std::string FilePath, int x, int y, int w, int h)
{
	renderer = passed_renderer;
	image = NULL;
	image = IMG_LoadTexture(renderer, FilePath.c_str());

	if (image == NULL)
	{
		std::cout << "Couldn't Load " << FilePath.c_str() << std::endl;
	}

	rect.x = x;
	rect.y = y;
	rect.w = w;
	rect.h = h;
}


CSprite::~CSprite(void)
{
	SDL_DestroyTexture(image);
}

void CSprite::Draw()
{
	SDL_RenderCopy(renderer, image, NULL, &rect);
}