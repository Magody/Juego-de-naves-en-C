#ifndef BALAS_H_INCLUDED
#define BALAS_H_INCLUDED

#include "pantalla.h"
#include "Constantes.h"



void balaBorrar(struct Bala *balasA)
{
    gotoxy((*balasA).x,(*balasA).y); printf(" ");
}
void balaDibujar(struct Bala *balasA)
{
    gotoxy((*balasA).x,(*balasA).y); printf("*");
}

int cajaBalasLLena()
{
  int llena=1,i;
  for(i=0;i<cantBalas;i++)
    if(cajaBalas[i]==0)
      {
        llena=0; break;
      }


  return llena;
}







#endif // BALAS_H_INCLUDED
