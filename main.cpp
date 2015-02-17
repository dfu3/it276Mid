#include <SDL.h>
#include <SDL_mixer.h>


int main (int argv, char* args[])
{
	SDL_Surface *screen;
	SDL_Init(SDL_INIT_EVERYTHING);
	screen = SDL_SetVideoMode(1000, 500, 32, SDL_SWSURFACE);


	


	/*

	int done = 0;

	//one iteration of this loop is one "frame"
	do
	{

	//stuff...
		-draw
			entities
			ui
			background
		-update
			entity thinks
			input
			camera?
			ui elements

		if("gamee over")
			done = 1;

	}while(!done);

	*/
	

	SDL_Delay(20000);
	SDL_FreeSurface(screen);
	SDL_Quit();

	return 0;
}