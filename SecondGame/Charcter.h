#pragma once
#include "TextureLoad.h"
#include "DATA.h"
enum TexturesName
	{
		Charcter_Texture, BackGround
	};

class Charcter
{
private:
	SDL_Renderer* LocalRender;
	TextureLoad charcter;
	SDL_Rect CharcterCut[3];
public:
	Charcter();
	~Charcter();
	void Draw(int = 0, int = 0, int = 0,SDL_RendererFlip=SDL_FLIP_NONE, int = 0);
	void Move(int x);
	void Jump(int y);
	void Sit();
	void Dance();
	void InitCharcterRect();
	void LoadCharcter();
	void GetRender(SDL_Renderer*);
};

