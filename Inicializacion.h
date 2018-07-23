#ifndef INICIALIZACION_H_INCLUDED
#define INICIALIZACION_H_INCLUDED

#include "pantalla.h"
#include "jugabilidad.h"
#include "Nave.h"
#include "Asteroides.h"
#include "Constantes.h"
#include "balas.h"

///en caracteres, no pixeles,etc
void pintarLimites()
{
    int i;
    ///lo que pinta X
    for(i=posXMinima-1;i<posXMaxima+1;i++)
    {
        gotoxy(i,posYMinima-1); printf("%c",205);
        gotoxy(i,posYMaxima+1);printf("%c",205);
    }

    ///lo que pinta y
    for(i=posYMinima-1;i<posYMaxima+1;i++)
    {
        gotoxy(posXMinima-1,i); printf("%c",186);
        gotoxy(posXMaxima+1,i); printf("%c",186);
    }

    gotoxy(posXMaxima,ALTO/2); printf("X");
    gotoxy(posXMinima,ALTO/2); printf("X");
    gotoxy(ANCHO/2,posYMaxima); printf("Y");
    gotoxy(ANCHO/2,posYMinima); printf("Y");

    ///arriba a abajo
    gotoxy(posXMinima-1,posYMinima-1); printf("%c",201);
    gotoxy(posXMinima-1,posYMaxima+1); printf("%c",200);

    gotoxy(posXMaxima+1,posYMinima-1); printf("%c",187);
    gotoxy(posXMaxima+1,posYMaxima+1); printf("%c",188);

}


void inicio()
{
    system("title Jueguito de Naves :v");

    srand(clock());
    ocultarCursor();

    pintarLimites();


    NaveUno.x = ANCHO/2-3; NaveUno.y = ALTO-6;
    NaveUno.corazones = corazones; NaveUno.vidas = vidas;

    naveCorazonesPintar();
    navePintar();
    naveCajaBalasDibujar();

    int i;
    for(i=0;i<nAst;i++)
    {
        Ast[i].x=rand()%(posXMaxima-posXMinima)+posXMinima;
        Ast[i].y=rand()%10+posYMinima;
    }

}


#endif // INICIALIZACION_H_INCLUDED
