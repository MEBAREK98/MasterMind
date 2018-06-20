#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "Constantes.h"
#include "Menu.h"
#include <time.h>
#include "Mode_joueur.h"
#include "Afficher.h"
#include "Mode_Machine.h"
int main(int argc,char *argv[])
{

    SDL_Surface *ecran=NULL,*jouer=NULL,*Mode1=NULL,*Mode2=NULL,*couleur=NULL,*facile=NULL,*defficile=NULL,*Intermaidiaire=NULL,*donner_le_code=NULL;
    SDL_Rect position_ecran,position;
    SDL_Event event,event2;
    int continuer=1,i,j,k,l,c,c1,t[4],v[4],niveau=Facile,c2,c3=0,m=0,nombre_aleatoire=0,n=0,z[4]={Rouge,Bleu,Jaune,Vert},zi;
    int r;
    int cas=0;;
    if(SDL_Init(SDL_INIT_VIDEO)==-1)
    {
        fprintf(stderr,"Erreur lors de l initialisation de la sdl %s \n",SDL_GetError());
        exit(EXIT_FAILURE);
    }
    SDL_WM_SetCaption("Master Mind",NULL);
    SDL_WM_SetIcon(IMG_Load("Icon.png"),NULL);
    ecran=SDL_SetVideoMode(LARGEUR_FENETRE,HAUTEUR_FENETRE,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
    if(ecran==NULL)
    {
        fprintf(stderr,"Erreur lors de l ouverture de la fenetre %s \n",SDL_GetError());
        exit(EXIT_FAILURE);
    }
     SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
     jouer=IMG_Load("Premier fond.png");
     position.x=ecran->w/2-jouer->w/2;position.y=ecran->h/2-jouer->h/2;
     SDL_BlitSurface(jouer,NULL,ecran,&position);
     SDL_Flip(ecran);
     SDL_Delay(3000);
    while(continuer)
    {
       SDL_WaitEvent(&event);
        switch(event.type)
        {
        case SDL_QUIT:
            continuer=0;
            break;
        case SDL_KEYDOWN:
            switch(event.key.keysym.sym)
            {
            case SDLK_ESCAPE:
                continuer=0;
                break;
            case SDLK_SPACE:
               Menu(ecran);
               break;
               //Rouge
            case SDLK_r:
                couleur=IMG_Load("Rouge.png");
                position.x=i;position.y=j;
                i=i+100;
                SDL_BlitSurface(couleur,NULL,ecran,&position);
                SDL_Flip(ecran);
                t[c]=Rouge;
                 c++;c2++;
                if((c==4)&&(m!=1))
                {
                     j=j-70;
                     i=40;
                     c=0;
                     verifie(ecran,t,v,r);
                     r++;
                }
                //Pour le mode machine
                if((c2==4)&&(m==1))
                {
                    SDL_Delay(1000);
                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
                    SDL_Flip(ecran);
                     if(r==0)
                {
                    Afficher(ecran,z,r);
                    r++;
                    zi=0;
                }
                }

                break;
            case SDLK_j:
                couleur=IMG_Load("Jaune.png");
                position.x=i;position.y=j;
                i=i+100;
                SDL_BlitSurface(couleur,NULL,ecran,&position);
                SDL_Flip(ecran);
                t[c]=Jaune;
                 c++;c2++;
                if((c==4)&&(m!=1))
                {
                     j=j-70;
                     i=40;
                     verifie(ecran,t,v,r);
                     r++;
                     c=0;
                }
                //Pour le mode machine
                if((c2==4)&&(m==1))
                {
                    SDL_Delay(1000);
                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
                    SDL_Flip(ecran);
                     if(r==0)
                {
                    Afficher(ecran,z,r);
                    r++;
                    zi=0;
                }
                }
                break;
            case SDLK_l:
                 couleur=IMG_Load("Bleu.png");
                position.x=i;position.y=j;
                i=i+100;
                SDL_BlitSurface(couleur,NULL,ecran,&position);
                SDL_Flip(ecran);
                t[c]=Bleu;
                 c++;c2++;
                if((c==4)&&(m!=1))
                {
                     j=j-70;
                     i=40;
                     verifie(ecran,t,v,r);
                     r++;
                     c=0;
                }
                //Pour le mode machine
                 if((c2==4)&&(m==1))
                {
                    SDL_Delay(1000);
                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
                    SDL_Flip(ecran);
                 if(r==0)
                {
                    Afficher(ecran,z,r);
                    r++;
                    zi=0;
                }
                }
                break;
            case SDLK_v:
                 couleur=IMG_Load("Vert.png");
                position.x=i;position.y=j;
                i=i+100;
                SDL_BlitSurface(couleur,NULL,ecran,&position);
                SDL_Flip(ecran);
                t[c]=Vert;
                 c++;c2++;
                if((c==4)&&(m!=1))
                {
                     j=j-70;
                     i=40;
                     verifie(ecran,t,v,r);
                     r++;
                     c=0;
                }
                //Pour le mode machine
                if((c2==4)&&(m==1))
                {
                    SDL_Delay(1000);
                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
                    SDL_Flip(ecran);
                if(r==0)
                {
                    Afficher(ecran,z,r);
                    r++;
                    zi=0;
                }
                }
                break;
                case SDLK_b:
                 couleur=IMG_Load("Blanc.png");
                position.x=l;position.y=k;
                l=l+40;
                SDL_BlitSurface(couleur,NULL,ecran,&position);
                SDL_Flip(ecran);
                z[zi]=Blanc;
                zi++;
                c1++;
                if(c1==2)
                {
                     l=l-80;k=k+25;
                }
                if(c1==4)
                {
                    k=k-100;l=440;
                    Ranger(ecran,z,&cas,r);
                    zi=0;
                    c1=0;r++;
                }
                break;
                case SDLK_n:
                 couleur=IMG_Load("Noire.png");
                position.x=l;position.y=k;
                l=l+40;
                SDL_BlitSurface(couleur,NULL,ecran,&position);
                SDL_Flip(ecran);
                z[zi]=Noire;
                zi++;
                c1++;
                if(c1==2)
                {
                     l=l-80;k=k+25;
                }
                if(c1==4)
                {
                    k=k-100;l=440;
                    Ranger(ecran,z,&cas,r);
                    zi=0;
                    c1=0;
                    r++;
                }
               break;
               case SDLK_p	:
                couleur=IMG_Load("Marron.png");
                position.x=l;position.y=k;
                l=l+40;
                SDL_BlitSurface(couleur,NULL,ecran,&position);
                SDL_Flip(ecran);
                z[zi]=Marron;
                zi++;
                c1++;
                if(c1==2)
                {
                     l=l-80;k=k+25;
                }
                if(c1==4)
                {
                    k=k-100;l=440;
                    Ranger(ecran,z,&cas,r);
                    zi=0;
                    c1=0;
                    r++;
                }
               break;
            }
        break;
        case SDL_MOUSEBUTTONUP:
                     //Jouer
                if((event.button.x>=ecran->w/2-jouer->w/2-150)&&(event.button.y>=ecran->h/2-jouer->h/2-100+250)&&(event.button.x<=ecran->w/2-jouer->w/2-150+91)&&(event.button.y<=ecran->h/2-jouer->h/2-100+250+38))
                {
                    Mode1=IMG_Load("Mode joueur.png");
                    Mode2=IMG_Load("Mode Machine.png");
                    position.x=ecran->w/2-jouer->w/2+10;position.y=ecran->h/2-jouer->h/2-100;
                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                    SDL_BlitSurface(Mode1,NULL,ecran,&position);
                    position.x=ecran->w/2-jouer->w/2;position.y=ecran->h/2-jouer->h/2;
                    SDL_BlitSurface(Mode2,NULL,ecran,&position);
                    SDL_Flip(ecran);
                }
                //Mode joueur
                if((event.button.x>=ecran->w/2-jouer->w/2+10)&&(event.button.y>=ecran->h/2-jouer->h/2 -100)&&(event.button.x<=ecran->w/2-jouer->w/2+10+237)&&(event.button.y<=ecran->h/2-jouer->h/2 -100+54))
                {
                    r=0;
                    SDL_Quit();
                    SDL_Init(SDL_INIT_VIDEO);
                    ecran=SDL_SetVideoMode(700,700,32,SDL_HWSURFACE);
                   SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
                   i=40;j=650;c=0;c1=0;c2=0;l=440;k=650;
                    SDL_Flip(ecran);
                   srand(time(NULL));
                    for(n=0;n<4;n++)
                    {
                        nombre_aleatoire=rand()%4;
                        v[n]=nombre_aleatoire;
                    }
                }
                //Mode Machine
                if((event.button.x>=ecran->w/2-jouer->w/2)&&(event.button.y>=ecran->h/2-jouer->h/2)&&(event.button.x<=ecran->w/2-jouer->w/2+266)&&(event.button.y<=ecran->h/2-jouer->h/2+50))
                {
                     SDL_Quit();
                    SDL_Init(SDL_INIT_VIDEO);
                    ecran=SDL_SetVideoMode(700,700,32,SDL_HWSURFACE);
                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,185,122,87));
                    donner_le_code=IMG_Load("Donner le code.png");
                    position.x=ecran->w/2-donner_le_code->w/2;position.y=ecran->h/2-donner_le_code->h/2-200;
                    SDL_BlitSurface(donner_le_code,NULL,ecran,&position);
                    SDL_Flip(ecran);
                    i=ecran->w/2-donner_le_code->w/2-50;j=ecran->h/2-donner_le_code->h/2-200+50;
                    c1=0;l=440;k=650;
                    c2=0;c=0;m=1;r=0;
                }
                //aide
                if((event.button.x>=ecran->w/2-jouer->w/2+170)&&(event.button.y>=ecran->h/2-jouer->h/2 -100+250)&&(event.button.x<=ecran->w/2-jouer->w/2+170+88)&&(event.button.y<=event.button.y<=ecran->h/2-jouer->h/2 -100+250+43))
                {
                     SDL_Quit();
                    SDL_Init(SDL_INIT_VIDEO);
                    ecran=SDL_SetVideoMode(820,614,32,SDL_HWSURFACE);
                    donner_le_code=IMG_Load("Aide2.png");
                    position.x=0;position.y=0;
                    SDL_BlitSurface(donner_le_code,NULL,ecran,&position);
                    SDL_Flip(ecran);
                }
                //Niveau
                 if((event.button.x>=ecran->w/2-jouer->w/2)&&(event.button.y>=ecran->h/2-jouer->h/2+100)&&(event.button.x<=ecran->w/2-jouer->w/2+143)&&(event.button.y<=event.button.y<=ecran->h/2-jouer->h/2+100+53))
                {
                     facile=IMG_Load("Facile.png");
                     defficile=IMG_Load("Difficile.png");
                     position.x=ecran->w/2-jouer->w/2+50;position.y=ecran->h/2-jouer->h/2+100+50;
                     SDL_BlitSurface(facile,NULL,ecran,&position);
                    SDL_Flip(ecran);
                     position.x=ecran->w/2-jouer->w/2+50;position.y=ecran->h/2-jouer->h/2+100+100;
                     SDL_BlitSurface(defficile,NULL,ecran,&position);
                    SDL_Flip(ecran);
                }
                //facile
                if((event.button.x>=ecran->w/2-jouer->w/2+50)&&(event.button.y>=ecran->h/2-jouer->h/2+100+50)&&(event.button.x<=ecran->w/2-jouer->w/2+50+74)&&(ecran->h/2-jouer->h/2+100+50+31))
                {
                    Intermaidiaire=SDL_CreateRGBSurface(SDL_HWSURFACE,165,80,32,0,0,0,0);
                    SDL_FillRect(Intermaidiaire,NULL,SDL_MapRGB(Intermaidiaire->format,255,255,255));
                    position.x=ecran->w/2-jouer->w/2+50;position.y=ecran->h/2-jouer->h/2+100+50;
                    SDL_BlitSurface(Intermaidiaire,NULL,ecran,&position);
                    niveau=Facile;
                    SDL_Flip(ecran);
                }
                //diffille
                if((event.button.x>=ecran->w/2-jouer->w/2+50)&&(event.button.y>=ecran->h/2-jouer->h/2+100+100)&&(event.button.x<=ecran->w/2-jouer->w/2+50+91)&&(ecran->h/2-jouer->h/2+100+100+30))
                {
                     Intermaidiaire=SDL_CreateRGBSurface(SDL_HWSURFACE,165,80,32,0,0,0,0);
                    SDL_FillRect(Intermaidiaire,NULL,SDL_MapRGB(Intermaidiaire->format,255,255,255));
                    position.x=ecran->w/2-jouer->w/2+50;position.y=ecran->h/2-jouer->h/2+100+50;
                    SDL_BlitSurface(Intermaidiaire,NULL,ecran,&position);
                    niveau=Difficile;
                    SDL_Flip(ecran);
                }
                break;

        }

    }
    SDL_Flip(ecran);

    SDL_Quit();
    return 0;
}
