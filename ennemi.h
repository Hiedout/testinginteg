#ifndef Ennemi_H
#define Ennemi_H
#include <SDL/SDL.h>
#include "background.h"
#include "hero.h"
typedef enum STATE STATE;
enum STATE 
{
	ATTACKING,FOLLOWING,WAITING
	
};

struct Ennemi{
    SDL_Rect positionAbsolue;
	SDL_Rect positionAnimation;
	SDL_Surface * image;
	int direction;
	int moving;
	STATE STATE;
};
typedef struct Ennemi Ennemi;

int loadEnnemiImages(Ennemi * E);

void initEnnemi(Ennemi *E);

void AnnimateEnnemi(Ennemi *E);

void MoveEnnemi(Ennemi *E);

void freeEnnemi(Ennemi *E);

void UpdateEnnemi(Ennemi* E,Hero *H);

#endif
