/**
* @file enig.c
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_image.h>
#include "enig.h"
#define MAX_LENGTH 100
/**
* @brief To generate an enigme randomly
* @param SDL_Surface *screen
* @param char *chaine
* @return Nothing
*/
 void generate_a (SDL_Surface * screen  ,char * chaine)
{ 	
	enigme e;
	int alea, i;
        FILE *f;
f=fopen("question.txt","r");
 srand(time(NULL));
 alea = 1+ rand()%3;

for( i=1;i<=alea;i++){

	
   //fgets(chaine, MAX_LENGTH,f);
fscanf(f,"%s \n",chaine);
}
if(strcmp(chaine,"asset1.png")==0)
e.img = IMG_Load("asset1.png");
else 
    if(strcmp(chaine,"asset2.png")==0)
  e.img=IMG_Load("asset2.png");
else 
    e.img=IMG_Load("asset3.png");
fclose(f);
SDL_BlitSurface(e.img,NULL,screen,&(e.p)) ;
SDL_Flip(screen);
}
/**
* @brief To display the enigma 
* @param SDL_Surface *screen, 
* @param e for enigme  
* @return Nothing
*/
 void aff_enigme(enigme * e, SDL_Surface *screen,char * chaine )
{ 
	e->p.x=0;
	e->p.y=0;
        e->lpointpos.x=50;
	e->lpointpos.y=60;	
	e->img=NULL;
 generate_a ( screen ,chaine) ;


e->lpoint = IMG_Load("vie2.png");
 SDL_BlitSurface(e->lpoint,NULL,screen,&(e->lpointpos)) ;
  SDL_Flip(screen); 

}
/**
* @brief register the solution for each enigma
* @param char *chaine
* @return solution
*/
 int solution_e (char * chaine)
 {
 	int solution =0 ;
 	
 	if(strcmp(chaine,"asset1.png")==0)
 	{
     solution =2 ;
 	}
 	else  	if(strcmp(chaine,"asset2.png")==0)
 	{
 		solution =1;

 	}
 	else 	if(strcmp(chaine,"asset3.png")==0)
 	{
 		solution =1;	
 	}
 	return solution;
 }
/**
* @brief read the imput 
* @param int running, run
* @return r
*/

int resolution (int * running,int *run )
{
	SDL_Event event ;
  int r=0 ;
	SDL_PollEvent(&event);
	switch(event.type)
	{
		  case SDL_QUIT:
			        *running= 0 ;
                *run = 0;
				break ;

       case SDL_KEYDOWN : 
            switch( event.key.keysym.sym )
                {
			  case  SDLK_a: 
			  r= 1;
			   break ;
			   case  SDLK_z :
			   r= 2;
			   break;
			   case SDLK_e: 
			   r=3 ;
			   break;
			    }
       break ;

                 
	}
  return r ;
}
/**
* @brief To display the enigma result
* @param SDL_Surface *screen, en for enigme 
* @param int s,r
* @return Nothing
*/
 
 void afficher_resultat (SDL_Surface * screen,int s,int r,enigme *en)
 {
 
 	if (r==s)
 	{
 		en->lpoint=IMG_Load("vie1.png");
 		SDL_BlitSurface(en->lpoint, NULL, screen, &(en->lpointpos)) ;
        SDL_Flip(screen);
 	}
 	else
 	{
 		en->lpoint=IMG_Load("vie3.png");
 		SDL_BlitSurface(en->lpoint, NULL, screen, &(en->lpointpos)) ;
        SDL_Flip(screen);
 	}
 }
/** 
* @brief save   
* @param p personne b background nomfichier char 
* @return Nothing 
*/ 
/*void sauvegarder (personne p, background b, char *nomfichier)
{
   FILE* fichier;
 fichier=fopen(nomfichier,"w");
if(fichier!=NULL)
   {
    fprintf(fichier,"SDL_Rect SDL_Rect %d %d %d",p->posj,b-  >posback,&p.score,&p.vie,&p.temps);

    fclose(fichier);
   }
   
}*/


/** 
* @brief load image
* @param p personne b background nomfichier char 
* @return nothing*
*/
/*int charger(personne* p,background* b,char* nomfichier)
{
  FILE* fichier;
 fichier=fopen(nomfichier,"r");
if(fichier!=NULL)
   {
    fscanf(fichier,"SDL_Rect SDL_Rect %d %d %d",p->posj,b-  >posback,&p.score,&p.vie,&p.temps);

    fclose(fichier);
   }
}*/
 
