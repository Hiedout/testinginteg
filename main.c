/**
* @file main.c
* @brief Main enigme.
* @author Iskander
* @version 1.0
* @date 18/04/2021
*
* Making enigme for video game
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "enig.h"
#include <time.h>
#define MAX_LENGTH 100

int main()
{
	char * chaine = (char *) malloc( MAX_LENGTH );
	SDL_Surface *screen;
	enigme  e;
	int s,r,run =1,running=1;
	SDL_Event event;



	 SDL_Init ( SDL_INIT_VIDEO ) ;



	 screen=SDL_SetVideoMode(800,600,32,SDL_HWSURFACE  |  SDL_DOUBLEBUF );
	
	

	 while (run)
	 {
	    running=1,r=0 ;
		 aff_enigme(&e,screen,chaine);
	     SDL_PollEvent(&event);
           switch(event.type)
            {
              case SDL_QUIT:
                run = 0;
			  break ;
		
            }

     


      s=solution_e ( chaine);
			do{
			r=resolution (&running,&run);
			}while((r>3 || r<1) && running!=0) ;


      while(running){

				afficher_resultat (screen,s,r,&e) ;
			       SDL_WaitEvent(&event);
                     switch(event.type)
                       {
					     case SDL_QUIT :
                              running =0 ;
						      run=0 ;
					     break ;
                         case SDL_KEYDOWN :

                             switch( event.key.keysym.sym )
                                  {
			                        case  SDLK_ESCAPE:
			                           SDL_Quit() ;
			                        break ;
			                      }
						 break ;
                       }
                    }
   }
SDL_Flip(screen);
      SDL_FreeSurface(screen);
      SDL_Quit();
	return 0;
}
