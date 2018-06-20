#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Constantes.h"
#include "Menu.h"
#include "Mode_joueur.h"
#include "Afficher.h"
void verifie(SDL_Surface *ecran,int t[],int v[],int r)
{
    int i=0,j,k=0,z,p[4],o=440,c1=0,c=0,trouve=0,f,d,l,c2,ind,ind1;
    SDL_Surface *couleur=NULL;
    SDL_Rect position;
   //La boucle
   k=0;
   for(i=0;i<4;i++)
   {
       trouve=0;
       switch(t[i])
       {
       case Jaune:
        if(v[i]==t[i])
        {
            p[k]=Noire;
            k++;
        }else
        if(trouve==0)
        {
            ind=0;
            while((ind<4)&&(trouve==0))
            {
                if(t[i]==v[ind])
                {
                    trouve=1;
                }
                ind++;
            }
        }
        if(trouve==1)
        {
            p[k]=Blanc;
            k++;
        }
        break;
         case Rouge:
        if(v[i]==t[i])
        {
            p[k]=Noire;
            k++;
        }else
        if(trouve==0)
        {
            ind=0;
            while((ind<4)&&(trouve==0))
            {
                if(t[i]==v[ind])
                {
                    trouve=1;
                }
                ind++;
            }
        }
        if(trouve==1)
        {
            p[k]=Blanc;
            k++;
        }
        break;
         case Vert:
        if(v[i]==t[i])
        {
            p[k]=Noire;
            k++;
        }else
        if(trouve==0)
        {
            ind=0;
            while((ind<4)&&(trouve==0))
            {
                if(t[i]==v[ind])
                {
                    trouve=1;
                }
                ind++;
            }
        }
        if(trouve==1)
        {
            p[k]=Blanc;
            k++;
        }
        break;
         case Bleu:
        if(v[i]==t[i])
        {
            p[k]=Noire;
            k++;
        }else
        if(trouve==0)
        {
            ind=0;
            while((ind<4)&&(trouve==0))
            {
                if(t[i]==v[ind])
                {
                    trouve=1;
                }
                ind++;
            }
        }
        if(trouve==1)
        {
            p[k]=Blanc;
            k++;
        }
        break;
       }
   }
   if(k!=4)
   {
       while(k<4)
       {
           p[k]=Marron;
           k++;
       }
   }
    c1=650-r*70;
    for(z=0;z<4;z++)
    {
        switch(p[z])
        {
        case Blanc:
            couleur=IMG_Load("Blanc.png");
            position.x=o;position.y=c1;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            o=o+80;
            SDL_Flip(ecran);
            c++;
             if(c==2)
                {
                     o=o-160;c1=c1+25;
                }
            break;
            case Noire:
            couleur=IMG_Load("Noire.png");
            position.x=o;position.y=c1;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            o=o+80;
            SDL_Flip(ecran);
            c++;
             if(c==2)
                {
                     o=o-160;c1=c1+25;
                }
            break;
            case Marron:
            couleur=IMG_Load("Marron.png");
            position.x=o;position.y=c1;
            SDL_BlitSurface(couleur,NULL,ecran,&position);
            o=o+80;
            SDL_Flip(ecran);
            c++;
             if(c==2)
                {
                     o=o-160;c1=c1+25;
                }
            break;
        }
    }
    d=0;f=0;
    while((d<4)&&(f==0))
    {
        if(p[d]!=Noire)
        {
            f=1;
        }
        d++;
    }
    if(f==0)
    {
        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
        Afficher(ecran,v,r);
        SDL_Delay(3000);
        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
        couleur=IMG_Load("Vous avez gagner.png");
        position.x=ecran->w/2-couleur->w/2;position.y=ecran->h/2-couleur->h/2;
        SDL_BlitSurface(couleur,NULL,ecran,&position);
        SDL_Flip(ecran);
    }
    if((f!=0)&&(r==9))
    {
        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
        Afficher(ecran,v,r);
        SDL_Delay(3000);
        SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
        couleur=IMG_Load("Vous avez perdu.png");
        position.x=ecran->w/2-couleur->w/2;position.y=ecran->h/2-couleur->h/2;
        SDL_BlitSurface(couleur,NULL,ecran,&position);
        SDL_Flip(ecran);
    }
}
