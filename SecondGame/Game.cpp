#include "stdafx.h"
#include "Game.h"


Game::Game()
{
}


Game::~Game()
{
}

bool Game::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cerr << "Could not init video! " << SDL_GetError() << std::endl;
		success = false;
	}
	else
	{
		window = SDL_CreateWindow("SecondGame", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
		if (window == NULL)
		{
			std::cerr << "Could not create window " << SDL_GetError() << std::endl;
			success = false;
		}
		else
		{
			render = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
			if (render == NULL)
			{
				std::cerr << "Could not create render " << SDL_GetError() << std::endl;
				success = false;
			}
			else
			{
				texture.Tinit(render, window);
			}
		}
	}
	return success;
}

bool Game::LoadMedia()
{
	
	return success;
}