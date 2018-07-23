#ifndef ASTEROIDES_H_INCLUDED
#define ASTEROIDES_H_INCLUDED

#include "Nave.h"
#include "Constantes.h"



void AsteroidePintar(struct Asteroide *Ast)
{
    gotoxy((*Ast).x,(*Ast).y); printf("%c",figuraAsteroide);
}

void AsteroideMovimiento(struct Asteroide *Ast)
{
    gotoxy((*Ast).x,(*Ast).y); printf(" ");
    (*Ast).y = (*Ast).y + 1 ;

    if((*Ast).y>posYMaxima)
    {
        (*Ast).x=rand()%(posXMaxima-posXMinima)+posXMinima;
        (*Ast).y=posYMinima+1;
    }
    AsteroidePintar(Ast);


}

void AsteroideColisionNave(struct Asteroide *Ast)
{

    if((*Ast).x >= NaveUno.x && (*Ast).x<NaveUno.x+5
    && (*Ast).y>=NaveUno.y && (*Ast).y<=NaveUno.y+3)
    {
        if(
           ((*Ast).x==NaveUno.x+2 && (*Ast).y==NaveUno.y) ||
           ((*Ast).x==NaveUno.x+1 && (*Ast).y==NaveUno.y+1) ||
           ((*Ast).y==NaveUno.y+2) ||
           ((*Ast).x==NaveUno.x+3 && (*Ast).y==NaveUno.y+1)
          )
        {
            Beep(100,30);
            gotoxy((*Ast).x,(*Ast).y); printf(" ");
            (*Ast).x=rand()%(posXMaxima-posXMinima)+posXMinima;
            (*Ast).y=posYMinima;
            AsteroidePintar(Ast);

            NaveUno.corazones--;
            naveCorazonesPintar();
            navePintar();

        }


    }



}

   /*
    printf("--A");
    printf("-AAA");
    printf("AA-AA");*/



#endif // ASTEROIDES_H_INCLUDED
