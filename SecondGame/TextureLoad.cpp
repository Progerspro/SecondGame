#include "stdafx.h"
#include "TextureLoad.h"


TextureLoad::TextureLoad() 
{
}


TextureLoad::~TextureLoad()
{
}

void TextureLoad::loadSurface(int index)
{
	InitImg();
	surface[index] = IMG_Load(Path.c_str());
	if (surface[index] == NULL)
	{
		std::cerr << "Could not load surface!" << std::endl;
	}

}
bool TextureLoad::PushTexture(std::string Where)
{
	static int index;
	Path = Where;
	loadSurface(index);
	texture[index] = SDL_CreateTextureFromSurface(LocalRender, surface[index]);
	if (texture[index] == NULL)
	{
		std::cerr << "Could not create texture on index = " << index << "By sdl error " << SDL_GetError() << std::endl;
		return success = false;
	}
		index++;
		return success = true;
}

void TextureLoad::InitImg()
{
	if (IMG_Init(IMG_INIT_PNG) < 0)
	{
		std::cerr << "Could not init PNG!" << SDL_GetError() << std::endl;
	}
}

void TextureLoad::Tinit(SDL_Renderer* getrender, SDL_Window* getwindow)
{
	LocalRender = getrender;
	LocalWindow = getwindow;
}

SDL_Texture* TextureLoad::getTexture(int index)
{
	return texture[index];
}

int TextureLoad::GetTextureWidth(int index)
{
	return surface[index]->w;
}
int TextureLoad::GetTextureHeight(int index)
{
	return surface[index]->h;
}