#pragma once
class CSprite
{
public:
	CSprite(SDL_Renderer* passed_renderer, std::string FilePath, int x, int y, int w, int h);
	~CSprite(void);
	void Draw();
private:
	SDL_Texture* image;
	SDL_Rect rect;

	SDL_Renderer* renderer;
};