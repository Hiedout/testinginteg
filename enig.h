/**
* @file enig.h
* @struct enigme
* @brief enigme struct
*/

#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
 SDL_Surface * img, *lpoint; /*!< Surface. */
 SDL_Rect 	p,lpointpos; /*!< Rectangle*/
}enigme;

void aff_enigme(enigme * e,SDL_Surface *screen,char * chaine) ;
void  generate_a (SDL_Surface * screen  , char * chaine) ;
 int solution_e (char * chaine) ;
int resolution (int * running,int *run);
void afficher_resultat (SDL_Surface * screen,int s,int r,enigme *en) ;
//void sauvegarder (personne p, background b, char *nomfichier);
//int charger(personne* p,background* b,char* nomfichier);
