#include "Renderer.h"
#include "Color.h"
#include "Random.h"
#include <iostream>


int main(int argc, char* argv[])
{
	std::cout << "Hello world! \n";



	seedRandom( uint16_t(time(nullptr)));

	Renderer* renderer = new Renderer;

	Canvas canvas(400, 300, renderer);

	renderer->Initialize();
	renderer->CreateWindow("Raytracing", 400, 300);

	bool quit = false;
	while (!quit)
	{
		canvas.Clear({ 0, 0, 0, 1 });
		for (int i = 0; i < 1000; i++) canvas.DrawPoint({ <random points in canvas> }, { <random RGB values>, 1 });
		canvas.Update();

		renderer.PresentCanvas(canvas);
		SDL_Event event;
		SDL_PollEvent(&event);
		switch (event.type)
		{
		case SDL_QUIT:
			quit = true;
			break;
		}
	}
	renderer->Shutdown();

	return 0;
}