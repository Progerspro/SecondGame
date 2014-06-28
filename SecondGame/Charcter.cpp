#include "stdafx.h"
#include "Charcter.h"


Charcter::Charcter()
{
}


Charcter::~Charcter()
{
}

void Charcter::Draw(int x, int y, int rotate,SDL_RendererFlip flip, int animation_index)
{
	SDL_Rect dest;
	dest.h = charcter.GetTextureHeight(Charcter_Texture);
	dest.w = charcter.GetTextureWidth(Charcter_Texture);
	dest.x = x;
	dest.y = y;
	SDL_RenderCopyEx(LocalRender, charcter.getTexture(Charcter_Texture),&CharcterCut[animation_index],&dest, rotate, 0, flip);
}

void Charcter::Move(int x)
{

}
void Charcter::Jump(int y)
{

}
void Charcter::Sit()
{

}
void Charcter::GetRender(SDL_Renderer* getrender)
{
	LocalRender = getrender;
}
void Charcter::InitCharcterRect()
{
	for (int a = 0; a < 3; a++)
	{
		CharcterCut[a].h = 30;
		CharcterCut[a].w = 17;
		CharcterCut[a].x += 17;
		CharcterCut[a].y = 2;
	}
}
void Charcter::LoadCharcter()
{
	charcter.PushTexture("SpriteSheetMain");
}