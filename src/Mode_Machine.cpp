#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Constantes.h"
#include "Menu.h"
#include "Mode_Machine.h"
#include "Afficher.h"
void Ranger(SDL_Surface *ecran,int t[],int *cas,int r)
{
    SDL_Rect position;
    SDL_Surface *couleur=NULL;
    int nombre_c=0,i,p=0;
    int v[4];
    for(i=0;i<4;i++)
    {
        if(t[i]==Noire)
        {
            nombre_c++;
        }
    }
    switch(r)
    {
    case 1:
        if(nombre_c==4)
        {
            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
            couleur=IMG_Load("Code trouver.png");
            position.x=ecran->w/2-couleur->w/2;
            position.y=ecran->h/2-couleur->h/2;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            SDL_Flip(ecran);
        }
        //Premier cas
        if(nombre_c==2)
        {
            v[0]=Bleu;v[1]=Rouge;v[2]=Jaune;v[3]=Vert;
            *cas=1;
            Afficher(ecran,v,r);
        }
        //Deuxieme cas
         if(nombre_c==0)
        {
            *cas=2;
            v[0]=Bleu;v[1]=Rouge;v[2]=Jaune;v[3]=Vert;
            Afficher(ecran,v,r);
        }
        //Troisieme cas
         if(nombre_c==1)
        {
           *cas=3;
            v[0]=Bleu;v[1]=Rouge;v[2]=Jaune;v[3]=Vert;
            Afficher(ecran,v,r);
        }
        break;
    case 2:
        if(nombre_c==4)
        {
            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
            couleur=IMG_Load("Code trouver.png");
            position.x=ecran->w/2-couleur->w/2;
            position.y=ecran->h/2-couleur->h/2;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            SDL_Flip(ecran);
        }
        //cas faux
        //Premier cas
        if((nombre_c!=4)&&(*(cas)==1))
        {
            v[0]=Jaune;v[1]=Bleu;v[2]=Rouge;v[3]=Vert;
            Afficher(ecran,v,r);
        }
        //Deuxieme cas
        if((nombre_c==0)&&(*(cas)==2))
        {
            p=1;
            v[0]=Jaune;v[1]=Vert;v[2]=Rouge;v[3]=Bleu;
            Afficher(ecran,v,r);
        }
         if((nombre_c==2)&&(*(cas)==2))
        {
            v[0]=Bleu;v[1]=Rouge;v[2]=Vert;v[3]=Jaune;
            Afficher(ecran,v,r);
        }
         if((nombre_c==1)&&(*(cas)==2))
        {
            v[0]=Bleu;v[1]=Rouge;v[2]=Vert;v[3]=Jaune;
            Afficher(ecran,v,r);
        }
        //Troisieme cas
         if((nombre_c==2)&&(*(cas)==3))
        {
            p=1;
            v[0]=Bleu;v[1]=Rouge;v[2]=Jaune;v[3]=Vert;
            Afficher(ecran,v,r);
        }
        if((nombre_c==0)&&(*(cas)==3))
        {
            v[0]=Rouge;v[1]=Bleu;v[2]=Vert;v[3]=Jaune;
            Afficher(ecran,v,r);
        }
        break;
    case 3:
        if(nombre_c==4)
        {
            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
            couleur=IMG_Load("Code trouver.png");
            position.x=ecran->w/2-couleur->w/2;
            position.y=ecran->h/2-couleur->h/2;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            SDL_Flip(ecran);
        }
        //Cas faux
        //Premeir cas
        if((nombre_c!=4)&&(*(cas)==1))
        {
            v[0]=Vert;v[1]=Bleu;v[2]=Jaune;v[3]=Rouge;
            Afficher(ecran,v,r);
        }
         //Deuxieme cas
       if((nombre_c!=4)&&(*(cas)==2)&&(p==1))
        {
            v[0]=Jaune;v[1]=Vert;v[2]=Bleu;v[3]=Rouge;
            Afficher(ecran,v,r);
        }
         if((nombre_c!=4)&&(*(cas)==2)&&(p!=1))
        {
            v[0]=Vert;v[1]=Rouge;v[2]=Bleu;v[3]=Jaune;
            Afficher(ecran,v,r);
        }
         //Troisieme cas
         if((nombre_c==2)&&(*(cas)==3))
        {
            v[0]=Jaune;v[1]=Rouge;v[2]=Bleu;v[3]=Vert;
            Afficher(ecran,v,r);
        }
         if((nombre_c!=4)&&(*(cas)==3)&&(p!=1))
        {
            v[0]=Vert;v[1]=Bleu;v[2]=Rouge;v[3]=Jaune;
            Afficher(ecran,v,r);
        }
        break;
    case 4:
         if(nombre_c==4)
        {
            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
            couleur=IMG_Load("Code trouver.png");
            position.x=ecran->w/2-couleur->w/2;
            position.y=ecran->h/2-couleur->h/2;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            SDL_Flip(ecran);
        }
        //Cas faux
        //Premeir cas
        if((nombre_c!=4)&&(*(cas)==1))
        {
            v[0]=Rouge;v[1]=Jaune;v[2]=Bleu;v[3]=Vert;
            Afficher(ecran,v,r);
        }
         //Deuxieme cas
        if(nombre_c!=4)
        {
            v[0]=Vert;v[1]=Jaune;v[2]=Rouge;v[3]=Bleu;
            Afficher(ecran,v,r);
        }
        if((nombre_c!=4)&&(*(cas)==2)&&(p!=1))
        {
            v[0]=Jaune;v[1]=Rouge;v[2]=Vert;v[3]=Bleu;
            Afficher(ecran,v,r);
        }
        //Troisieme cas
         if((nombre_c!=4)&&(*(cas)==3))
        {
            v[0]=Vert;v[1]=Rouge;v[2]=Jaune;v[3]=Bleu;
            Afficher(ecran,v,r);
        }
        if((nombre_c!=4)&&(*(cas)==3)&&(p!=1))
        {
            v[0]=Jaune;v[1]=Bleu;v[2]=Vert;v[3]=Rouge;
            Afficher(ecran,v,r);
        }
        break;
    case 5:
         if(nombre_c==4)
        {
            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
            couleur=IMG_Load("Code trouver.png");
            position.x=ecran->w/2-couleur->w/2;
            position.y=ecran->h/2-couleur->h/2;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            SDL_Flip(ecran);
        }
        //Cas faux
        //Premeir cas
        if((nombre_c!=4)&&(*(cas)==1))
        {
            v[0]=Rouge;v[1]=Vert;v[2]=Jaune;v[3]=Bleu;
            Afficher(ecran,v,r);
        }
        //Deuxieme cas
         if(nombre_c!=4)
        {
            v[0]=Vert;v[1]=Jaune;v[2]=Bleu;v[3]=Rouge;
            Afficher(ecran,v,r);
        }
        if((nombre_c!=4)&&(*(cas)==2)&&(p!=1))
        {
            v[0]=Bleu;v[1]=Vert;v[2]=Rouge;v[3]=Jaune;
            Afficher(ecran,v,r);
        }
        //Troisieme cas
         if((nombre_c!=4)&&(*(cas)==3))
        {
            v[0]=Bleu;v[1]=Jaune;v[2]=Rouge;v[3]=Vert;
            Afficher(ecran,v,r);
        }
         if((nombre_c!=4)&&(*(cas)==3)&&(p!=1))
        {
            v[0]=Rouge;v[1]=Vert;v[2]=Bleu;v[3]=Jaune;
            Afficher(ecran,v,r);
        }
        break;
    case 6:
        if(nombre_c==4)
        {
            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
            couleur=IMG_Load("Code trouver.png");
            position.x=ecran->w/2-couleur->w/2;
            position.y=ecran->h/2-couleur->h/2;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            SDL_Flip(ecran);
        }
        //Cas faux
        //Premeir cas
        if((nombre_c!=4)&&(*(cas)==1))
        {
            v[0]=Rouge;v[1]=Bleu;v[2]=Vert;v[3]=Jaune;
            Afficher(ecran,v,r);
        }
        //Deuxieme cas
        if((nombre_c!=4)&&(*(cas)==2)&&(p!=1))
        {
            v[0]=Bleu;v[1]=Jaune;v[2]=Vert;v[3]=Rouge;
            Afficher(ecran,v,r);
        }
        //Troisieme cas
         if((nombre_c!=4)&&(*(cas)==3))
        {
            v[0]=Bleu;v[1]=Vert;v[2]=Jaune;v[3]=Rouge;
            Afficher(ecran,v,r);
        }
         if((nombre_c!=4)&&(*(cas)==3)&&(p!=1))
        {
            v[0]=Rouge;v[1]=Jaune;v[2]=Vert;v[3]=Bleu;
            Afficher(ecran,v,r);
        }
        break;
    case 7:
         if(nombre_c==4)
        {
            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
            couleur=IMG_Load("Code trouver.png");
            position.x=ecran->w/2-couleur->w/2;
            position.y=ecran->h/2-couleur->h/2;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            SDL_Flip(ecran);
        }
        if(nombre_c!=4)
        {
            SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
            couleur=IMG_Load("Code non trouver.png");
            position.x=ecran->w/2-couleur->w/2;
            position.y=ecran->h/2-couleur->h/2;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            SDL_Flip(ecran);
        }
    }
}
