#pragma once
#include <SDL.h>
#include <string>

class Renderer
{
public:
	Renderer() = default;

	bool Initialize();
	void Shutdown();
	bool CreateWindow(const std::string& title, int width, int height);

	friend class Canvas;

private:
	SDL_Renderer* m_renderer = nullptr;
	SDL_Window* m_window = nullptr;
};