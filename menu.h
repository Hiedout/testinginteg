#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
 

#include <stdio.h>
#include <stdlib.h>
#include<SDL/SDL_ttf.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_mixer.h>

SDL_Surface *screen,  *B1, *B2, *B3, *B4, *BS1, *BS2, *BS3, *BS4, *back1, *optm, *fback, *inter,*logo;
SDL_Rect posback,posb1,posb2,posb3,posb4,posbs1,posbs2,posbs3,posbs4,posoptm,posback2,posint,poslogo;

void loadimg();
void blitz(SDL_Surface *screen);
void blitplayselected(SDL_Surface *screen);
void blitcreditselected(SDL_Surface *screen);
void blitsettingselected(SDL_Surface *screen);
void blitquitselected(SDL_Surface *screen);
void optionsousmenu(SDL_Surface *screen);
void blitinterface(SDL_Surface *screen);














#endif






























