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

void CSprite::SetX(int X)
{
	rect.x = X;
}
void CSprite::SetY(int Y)
{
	rect.y = Y;
}
void CSprite::SetPos(int X, int Y)
{
	rect.x = X;
	rect.y = Y;
}

int CSprite::GetX()
{
	return rect.x;
}

int CSprite::GetY()
{
	return rect.y;

}