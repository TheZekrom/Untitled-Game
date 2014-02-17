#pragma once
class CSDL_Setup
{
public:
	CSDL_Setup(bool* quit);
	~CSDL_Setup(void);
	SDL_Renderer* GetRenderer();
	SDL_Event* GetEvent();
	void Begin();
	void End();
private:
	SDL_Window* window;
	SDL_Renderer* renderer;
	SDL_Event* event;
};

