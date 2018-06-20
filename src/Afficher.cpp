#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Constantes.h"
#include "Menu.h"
#include <time.h>
#include "Mode_joueur.h"
#include "Mode_Machine.h"
#include "Afficher.h"
void Afficher(SDL_Surface *ecran,int t[],int r)
{
    int i,j;
    SDL_Rect position;
    SDL_Surface *couleur=NULL;
    position.y=650-70*r;
    position.x=40;
    for(i=0;i<4;i++)
    {
        switch(t[i])
        {
        case Rouge:
            couleur=IMG_Load("Rouge.png");
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            position.x=position.x+100;
            break;
        case Vert:
            couleur=IMG_Load("Vert.png");
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            position.x=position.x+100;
            break;
        case Bleu:
            couleur=IMG_Load("Bleu.png");
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            position.x=position.x+100;
            break;
        case Jaune:
            couleur=IMG_Load("Jaune.png");
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            position.x=position.x+100;
            break;
        }
        SDL_Flip(ecran);
    }
}
