#include "menu.h"
void loadimg(){
posback.x=0;
posback.y=0;
poslogo.x=150;
poslogo.y=50;
posb1.x=100;
posb1.y=200;
posb2.x=100;
posb2.y=280;
posb3.x=100;
posb3.y=360;
posb4.x=100;
posb4.y=440;
B1=IMG_Load("play.png");
B2=IMG_Load("credit.png");
B3=IMG_Load("settings.png");
B4=IMG_Load("exit.png");
back1=IMG_Load("nowaterAsset 1.png");
logo=IMG_Load("logo.png");
}
void blitz(SDL_Surface *screen){

 SDL_FillRect(screen,NULL,SDL_MapRGB(screen->format,0,0,0));
SDL_BlitSurface(back1,NULL,screen,&posback);
SDL_BlitSurface(logo,NULL,screen, &poslogo);
SDL_BlitSurface(B1,NULL,screen, &posb1);

 SDL_BlitSurface(B2,NULL,screen,&posb2);
 SDL_BlitSurface(B3,NULL,screen,&posb3);
 SDL_BlitSurface(B4,NULL,screen,&posb4);
SDL_Flip(screen);
}
void blitplayselected(SDL_Surface *screen) {
SDL_Surface *playbut2=NULL;
    


BS1=IMG_Load("ba7ton1.png");



SDL_BlitSurface(BS1,NULL,screen,&posb1);
 SDL_Flip(screen);
}

void blitcreditselected(SDL_Surface *screen) {


BS2=IMG_Load("ba7ton3.png");



SDL_BlitSurface(BS2,NULL,screen,&posb2);
 
SDL_Flip(screen);



}
void blitsettingselected(SDL_Surface *screen) {




BS3=IMG_Load("ba7ton2.png");



SDL_BlitSurface(BS3,NULL,screen,&posb3);
 SDL_Flip(screen);


}
void blitquitselected(SDL_Surface *screen){



BS4=IMG_Load("ba7ton4.png");



SDL_BlitSurface(BS4,NULL,screen,&posb4);
SDL_Flip(screen);




}
void optionsousmenu(SDL_Surface *screen){

posoptm.x=400;
posoptm.y=200;
optm=IMG_Load("Asset 1.png");
 SDL_BlitSurface(optm,NULL,screen,&posoptm);
SDL_Flip(screen);






}
void blitinterface(SDL_Surface *screen){

posint.x=0;
posint.y=0;
inter=IMG_Load("backc2Asset 2.png");
 SDL_BlitSurface(inter,NULL,screen,&posint);
SDL_Flip(screen);






}


