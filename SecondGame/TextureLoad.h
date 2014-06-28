#pragma once
#include <string>
#include "DATA.h"
//#include <boost\ptr_container\ptr_vector.hpp>

const int MAX_Texture_Surface = 1000;

class TextureLoad
{
private:
	bool success = true;
	std::string Path;
	SDL_Surface* surface[MAX_Texture_Surface];
	SDL_Texture* texture[MAX_Texture_Surface];
    SDL_Renderer* LocalRender = nullptr;
	SDL_Window* LocalWindow = nullptr;
	void loadSurface(int=0);
	//boost::ptr_vector<SDL_Texture> texture; TODO: Check other ways to fix this, Ошибка use of undifinned type"SDL_Texture" нужно со временем найти решение!


public:
	TextureLoad();
	~TextureLoad();
	void InitImg();
	void Tinit(SDL_Renderer* getrender, SDL_Window* getwindow);
	bool PushTexture(std::string Where);
	SDL_Texture* getTexture(int = 0);
	int GetTextureWidth(int = 0);
	int GetTextureHeight(int = 0);
};

