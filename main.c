#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#include "Inicializacion.h"
#include "pantalla.h"
#include "jugabilidad.h"
#include "Nave.h"
#include "Asteroides.h"
#include "Constantes.h"
#include "balas.h"

int enJuego = 1;

int main()
{
    int i;

    inicio();


    while(enJuego)
    {

        ///funciones atentas al teclado y juego
        naveMover(&balasA[num]);
        naveMuerte(&enJuego);

        for(i=0;i<nAst;i++)
            AsteroideColisionNave(&Ast[i]);

        if(!cajaBalasLLena())
        {
            for(i=0;i<cantBalas;i++)
            {
                if(!cajaBalas[i])
                    naveBalaMovimiento(&balasA[i],i);
            }

        }

        colisionBalaAsteroide();


        ///generar primeros asteroides
        for(i=0;i<nAst;i++)
            AsteroideMovimiento(&Ast[i]);



        Sleep(30);
    }

    gotoxy(ANCHO/2-4,ALTO/2); printf("GameOver");
    Beep(450, 110);
    Beep(500, 110);
    Beep(550, 110);
    Beep(450, 110);
    Beep(675, 200);
    Beep(675, 200);
    Beep(600, 300);
    Beep(450, 110);
    Beep(500, 110);
    Beep(550, 110);
    Beep(450, 110);
    Beep(600, 200);
    Beep(600, 200);
    Beep(550, 300);
    Beep(525, 110);
    Beep(450, 300);
    Beep(450, 110);
    Beep(500, 110);
    Beep(550, 110);
    Beep(450, 110);
    Beep(500, 400);
    Beep(600, 300);
    Beep(500, 400);
    Beep(475, 200);
    Beep(450, 200);
    Beep(400, 200);
    Beep(600, 500);
    Beep(525, 500);
    Beep(450, 110);
    Beep(500, 110);
    Beep(550, 110);
    Beep(450, 110);
    Beep(675, 200);
    Beep(675, 200);
    Beep(600, 300);
    Beep(450, 110);
    Beep(500, 110);
    Beep(550, 110);
    Beep(450, 110);
    Beep(800, 200);
    Beep(500, 200);
    Beep(550, 300);
    Beep(525, 110);
    Beep(450, 300);
    Beep(450, 110);
    Beep(500, 110);
    Beep(550, 110);
    Beep(450, 110);
    Beep(500, 400);
    Beep(600, 300);
    Beep(500, 400);
    Beep(475, 200);
    Beep(450, 200);
    Beep(400, 200);
    Beep(600, 500);
    Beep(525, 500);

    return 0;
}
