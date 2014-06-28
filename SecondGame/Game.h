#pragma once
#include "TextureLoad.h"
#include "DATA.h"
const int SCREEN_WIDTH = 600, SCREEN_HEIGHT = 800;

extern enum TexturesName;

class Game
{
private:
	bool success = true;
	SDL_Window* window = nullptr;
	SDL_Renderer* render = nullptr;
	TextureLoad texture;
	
public:
	Game();
	~Game();
	bool init();
	bool LoadMedia();
};

