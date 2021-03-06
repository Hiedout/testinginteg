#include <SDL/SDL.h>

#include "defs.h"
#include "ennemi.h"
#include "background.h"


int loadEnnemiImages(Ennemi * A)
{
	A->image = IMG_Load("../images/Ennemi.png");

	if(A->image == NULL) {
		printf("Unable to load Ennemi jpg:%s\n", SDL_GetError());
		return (-1);
	}

	SDL_SetColorKey( A->image, SDL_SRCCOLORKEY, SDL_MapRGB(A->image->format, 255, 255, 255) );

	return (0);
}


void initEnnemi(Ennemi* E)
{
	E->positionAbsolue.x = 1000;
	E->positionAbsolue.y = 250;
	E->positionAbsolue.w = Ennemi_WIDTH;
	E->positionAbsolue.h = Ennemi_HEIGHT;
	E->positionAnimation.x = 0;
	E->positionAnimation.y = 0;
	E->positionAnimation.w = Ennemi_WIDTH;
	E->positionAnimation.h = Ennemi_HEIGHT;
}
void blitEnnemi(Ennemi E, SDL_Surface* screen)
{
	SDL_BlitSurface(E.image, &E.positionAnimation    /*   frame   */    , screen, &E.positionAbsolue);
}
void AnnimateEnnemi(Ennemi *E)
{
        E->positionAnimation.x += Ennemi_WIDTH;
	    E->positionAnimation.x = E->positionAnimation.x % (Ennemi_WIDTH * 3);	
        E->positionAnimation.y = 0;
        SDL_Delay(100);
}
void MoveEnnemi(Ennemi *E)
{
        E->positionAbsolue.x -=10;    
}

void UpdateEnnemi(Ennemi *E,Hero *H)
{
	switch(E->STATE)
	{
		case WAITING: AnnimateEnnemi(E);
					  break;
		case FOLLOWING: AnnimateEnnemi(E);
						MoveEnnemi(E);
						break;
		case ATTACKING: initEnnemi(E);
						AnnimateEnnemi(E);
						H->vie--;

						break;
	}
}
	
void freeEnnemi(Ennemi *E)
{
	SDL_FreeSurface(E->image);
}
