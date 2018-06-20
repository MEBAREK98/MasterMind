#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Constantes.h"
#include "Menu.h"

void Menu(SDL_Surface *ecran)
{
    SDL_Rect position;
    int continuer=1;
    SDL_Surface *jouer=NULL,*aide=NULL,*carre_1=NULL,*carre_2=NULL,*carre_3=NULL,*carre_4=NULL,*s_rectangle=NULL,*rectangle_1=NULL,*rectangle_4=NULL,*rectangle_3=NULL,*rectangle_2=NULL;
    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

    jouer=IMG_Load("Titre.png");
    position.x=ecran->w/2-jouer->w/2;position.y=ecran->h/2-jouer->h/2-100;
    SDL_BlitSurface(jouer,NULL,ecran,&position);

    jouer=IMG_Load("Jouer.png");
    position.x=ecran->w/2-jouer->w/2-150;position.y=ecran->h/2-jouer->h/2-100+250;
    SDL_BlitSurface(jouer,NULL,ecran,&position);

    jouer=IMG_Load("Niveau.png");
    position.x=ecran->w/2-jouer->w/2;position.y=ecran->h/2-jouer->h/2+100;
    SDL_BlitSurface(jouer,NULL,ecran,&position);

    jouer=IMG_Load("Aide.png");
    position.x=ecran->w/2-jouer->w/2+170;position.y=ecran->h/2-jouer->h/2 -100+250;
    SDL_BlitSurface(jouer,NULL,ecran,&position);

    //carre1
    carre_1=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_1,NULL,SDL_MapRGB(carre_1->format,255,0,0));
    position.x=0;position.y=0;
    SDL_BlitSurface(carre_1,NULL,ecran,&position);
    //rectangle 1
    rectangle_1=SDL_CreateRGBSurface(SDL_HWSURFACE,40,HAUTEUR_FENETRE-80,32,0,0,0,0);
    SDL_FillRect(rectangle_1,NULL,SDL_MapRGB(rectangle_1->format,255,242,0));
    position.x=0;position.y=40;
    SDL_BlitSurface(rectangle_1,NULL,ecran,&position);



    //carre 2
    carre_2=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_2,NULL,SDL_MapRGB(carre_2->format,255,0,0));
    position.x=LARGEUR_FENETRE-40;position.y=0;
    SDL_BlitSurface(carre_2,NULL,ecran,&position);
     //rectangle 2
    rectangle_2=SDL_CreateRGBSurface(SDL_HWSURFACE,40,HAUTEUR_FENETRE-80,32,0,0,0,0);
    SDL_FillRect(rectangle_1,NULL,SDL_MapRGB(rectangle_2->format,255,242,0));
    position.x=LARGEUR_FENETRE-40;position.y=40;
    SDL_BlitSurface(rectangle_1,NULL,ecran,&position);

    //carre 3
    carre_3=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_3,NULL,SDL_MapRGB(carre_3->format,255,0,0));
    position.x=LARGEUR_FENETRE-40;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(carre_3,NULL,ecran,&position);
     //rectangle 3
    rectangle_3=SDL_CreateRGBSurface(SDL_HWSURFACE,LARGEUR_FENETRE-80,40,32,0,0,0,0);
    SDL_FillRect(rectangle_3,NULL,SDL_MapRGB(rectangle_3->format,255,242,0));
    position.x=40;position.y=0;
    SDL_BlitSurface(rectangle_3,NULL,ecran,&position);

    //carre 4
    carre_4=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_4,NULL,SDL_MapRGB(carre_4->format,255,0,0));
    position.x=0;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(carre_4,NULL,ecran,&position);
    SDL_Delay(1000);
     //rectangle 4
    rectangle_4=SDL_CreateRGBSurface(SDL_HWSURFACE,LARGEUR_FENETRE-80,40,32,0,0,0,0);
    SDL_FillRect(rectangle_4,NULL,SDL_MapRGB(rectangle_4->format,255,242,0));
    position.x=40;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(rectangle_4,NULL,ecran,&position);
    SDL_Flip(ecran);

     //carre 1
    carre_1=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_1,NULL,SDL_MapRGB(carre_1->format,0,255,0));
    position.x=0;position.y=0;
    SDL_BlitSurface(carre_1,NULL,ecran,&position);
     rectangle_1=SDL_CreateRGBSurface(SDL_HWSURFACE,40,HAUTEUR_FENETRE-80,32,0,0,0,0);
    SDL_FillRect(rectangle_1,NULL,SDL_MapRGB(rectangle_1->format,255,0,0));
    position.x=0;position.y=40;
    SDL_BlitSurface(rectangle_1,NULL,ecran,&position);

    //carre 2
    carre_2=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_2,NULL,SDL_MapRGB(carre_2->format,0,255,0));
    position.x=LARGEUR_FENETRE-40;position.y=0;
    SDL_BlitSurface(carre_2,NULL,ecran,&position);
      //rectangle 2
    rectangle_2=SDL_CreateRGBSurface(SDL_HWSURFACE,40,HAUTEUR_FENETRE-80,32,0,0,0,0);
    SDL_FillRect(rectangle_1,NULL,SDL_MapRGB(rectangle_2->format,255,0,0));
    position.x=LARGEUR_FENETRE-40;position.y=40;
    SDL_BlitSurface(rectangle_1,NULL,ecran,&position);

    //carre 3
    carre_3=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_3,NULL,SDL_MapRGB(carre_3->format,0,255,0));
    position.x=LARGEUR_FENETRE-40;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(carre_3,NULL,ecran,&position);
    //rectangle 3
    rectangle_3=SDL_CreateRGBSurface(SDL_HWSURFACE,LARGEUR_FENETRE-80,40,32,0,0,0,0);
    SDL_FillRect(rectangle_3,NULL,SDL_MapRGB(rectangle_3->format,255,0,0));
    position.x=40;position.y=0;
    SDL_BlitSurface(rectangle_3,NULL,ecran,&position);

    //carre 4
    carre_4=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_4,NULL,SDL_MapRGB(carre_4->format,0,255,0));
    position.x=0;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(carre_4,NULL,ecran,&position);
    SDL_Delay(1000);
    rectangle_4=SDL_CreateRGBSurface(SDL_HWSURFACE,LARGEUR_FENETRE-80,40,32,0,0,0,0);
    SDL_FillRect(rectangle_4,NULL,SDL_MapRGB(rectangle_4->format,255,0,0));
    position.x=40;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(rectangle_4,NULL,ecran,&position);

    SDL_Flip(ecran);


     //carre 1
    carre_1=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_1,NULL,SDL_MapRGB(carre_1->format,0,0,255));
    position.x=0;position.y=0;
    SDL_BlitSurface(carre_1,NULL,ecran,&position);
     rectangle_1=SDL_CreateRGBSurface(SDL_HWSURFACE,40,HAUTEUR_FENETRE-80,32,0,0,0,0);
    SDL_FillRect(rectangle_1,NULL,SDL_MapRGB(rectangle_1->format,0,255,0));
    position.x=0;position.y=40;
    SDL_BlitSurface(rectangle_1,NULL,ecran,&position);
    //carre 2
    carre_2=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_2,NULL,SDL_MapRGB(carre_2->format,0,0,255));
    position.x=LARGEUR_FENETRE-40;position.y=0;
    SDL_BlitSurface(carre_2,NULL,ecran,&position);
      //rectangle 2
    rectangle_2=SDL_CreateRGBSurface(SDL_HWSURFACE,40,HAUTEUR_FENETRE-80,32,0,0,0,0);
    SDL_FillRect(rectangle_1,NULL,SDL_MapRGB(rectangle_2->format,0,255,0));
    position.x=LARGEUR_FENETRE-40;position.y=40;
    SDL_BlitSurface(rectangle_1,NULL,ecran,&position);
    //carre 3
    carre_3=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_3,NULL,SDL_MapRGB(carre_3->format,0,0,255));
    position.x=LARGEUR_FENETRE-40;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(carre_3,NULL,ecran,&position);
    //rectangle 3
    rectangle_3=SDL_CreateRGBSurface(SDL_HWSURFACE,LARGEUR_FENETRE-80,40,32,0,0,0,0);
    SDL_FillRect(rectangle_3,NULL,SDL_MapRGB(rectangle_3->format,0,255,0));
    position.x=40;position.y=0;
    SDL_BlitSurface(rectangle_3,NULL,ecran,&position);
    //carre 4
    carre_4=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_4,NULL,SDL_MapRGB(carre_4->format,0,0,255));
    position.x=0;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(carre_4,NULL,ecran,&position);
    SDL_Delay(1000);
    rectangle_4=SDL_CreateRGBSurface(SDL_HWSURFACE,LARGEUR_FENETRE-80,40,32,0,0,0,0);
    SDL_FillRect(rectangle_4,NULL,SDL_MapRGB(rectangle_4->format,0,255,0));
    position.x=40;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(rectangle_4,NULL,ecran,&position);
    SDL_Flip(ecran);


     //carre 1
    carre_1=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_1,NULL,SDL_MapRGB(carre_1->format,255,242,0));
    position.x=0;position.y=0;
    SDL_BlitSurface(carre_1,NULL,ecran,&position);
     rectangle_1=SDL_CreateRGBSurface(SDL_HWSURFACE,40,HAUTEUR_FENETRE-80,32,0,0,0,0);
    SDL_FillRect(rectangle_1,NULL,SDL_MapRGB(rectangle_1->format,0,0,255));
    position.x=0;position.y=40;
    SDL_BlitSurface(rectangle_1,NULL,ecran,&position);
    //carre 2
    carre_2=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_2,NULL,SDL_MapRGB(carre_2->format,255,242,0));
    position.x=LARGEUR_FENETRE-40;position.y=0;
    SDL_BlitSurface(carre_2,NULL,ecran,&position);
      //rectangle 2
    rectangle_2=SDL_CreateRGBSurface(SDL_HWSURFACE,40,HAUTEUR_FENETRE-80,32,0,0,0,0);
    SDL_FillRect(rectangle_1,NULL,SDL_MapRGB(rectangle_2->format,0,0,255));
    position.x=LARGEUR_FENETRE-40;position.y=40;
    SDL_BlitSurface(rectangle_1,NULL,ecran,&position);
    //carre 3
    carre_3=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_3,NULL,SDL_MapRGB(carre_3->format,255,242,0));
    position.x=LARGEUR_FENETRE-40;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(carre_3,NULL,ecran,&position);
    //rectangle 3
    rectangle_3=SDL_CreateRGBSurface(SDL_HWSURFACE,LARGEUR_FENETRE-80,40,32,0,0,0,0);
    SDL_FillRect(rectangle_3,NULL,SDL_MapRGB(rectangle_3->format,0,0,255));
    position.x=40;position.y=0;
    SDL_BlitSurface(rectangle_3,NULL,ecran,&position);
    //carre 4
    carre_4=SDL_CreateRGBSurface(SDL_HWSURFACE,40,40,32,0,0,0,0);
    SDL_FillRect(carre_4,NULL,SDL_MapRGB(carre_4->format,255,242,0));
    position.x=0;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(carre_4,NULL,ecran,&position);
    SDL_Delay(1000);
    rectangle_4=SDL_CreateRGBSurface(SDL_HWSURFACE,LARGEUR_FENETRE-80,40,32,0,0,0,0);
    SDL_FillRect(rectangle_4,NULL,SDL_MapRGB(rectangle_4->format,0,0,255));
    position.x=40;position.y=HAUTEUR_FENETRE-40;
    SDL_BlitSurface(rectangle_4,NULL,ecran,&position);


    SDL_Flip(ecran);

}
