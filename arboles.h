#include <iostream.h>
#include <conio.h>
#include <conio.c>
#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int TipoA;

typedef struct NodoArbin
{
  int x;
  int info;
  int posicion;

 struct NodoArbin *izq,*der,*padre;
}TArbin,*Arbin,*ArbinB;


void GraficarArbin(Arbin arb);
void grafico(Arbin a, int pos, int dist, int nivel);
void lineas(int n);

Arbin izqArbin(Arbin a)                                                         /*devuelve el subarbol izquierdo*/
{

  return a->izq;
}

Arbin derArbin(Arbin a)                                                         /*devuelve el subarbol derecho*/
{

  return a->der;
}

TipoA raizArbin(Arbin a)                                                        /*devuelve la iformacion de la raiz del arbol*/
{
  return a->info;
}

int vacioArbin(Arbin a)                                                         /*informa si el arbol está vacio*/
{
  return a==NULL;
}








/* Graficar el arbol *****************************/

void GraficarArbin(Arbin arb)
{
  int dist=74;
    grafico(arb, abs(dist/2), abs(dist/2), 0);
}

void grafico(Arbin a, int pos, int dist, int nivel)
{

   gotoxy(pos,5 + 2*nivel);
    textattr(8);
   printf("%d\n",raizArbin(a));

   if(izqArbin(a)!=NULL)
   {
     gotoxy(pos-abs(dist/2),5 + 2*nivel+1);
     printf("\xda");
     lineas(abs(dist/2));
     printf("\xd9");
     grafico(izqArbin(a), pos-abs(dist/2), abs(dist/2), nivel+1);
   }

   if(derArbin(a)!=NULL)
   {
     gotoxy(pos,5 + 2*nivel+1);
     printf("\xc0");
     lineas(abs(dist/2));
     printf("\xbf");
     grafico(derArbin(a), pos+abs(dist/2), abs(dist/2), nivel+1);
   }

   if(izqArbin(a)!=NULL&&derArbin(a)!=NULL)
   {
     gotoxy(pos,5 + 2*nivel+1);
     printf("\xc1");
   }

}

void lineas(int n)
{
  int i;
   textattr(6);
  for(i=1;i<n;i++)
    printf("\xc4");
}



/************************ arbol binario de busqueda ***************************/


ArbinB crearArbinB(int elem)                                                  /*crea un nodo del tipo arbol binario de busqueda*/
{
  ArbinB a;

  a = (ArbinB)malloc(sizeof(TArbin));
  a->izq = NULL;
  a->der = NULL;
  a->info = elem;
  return(a);
}
ArbinB insArbinB(int elem,ArbinB a)
{
   
  if(a==NULL)
  {
    a=(ArbinB)malloc(sizeof(TArbin));
    a->info=elem;
    a->izq=NULL;
    a->der=NULL;
  }
  else if(elem<a->info)
         a->izq=insArbinB(elem,a->izq);
  else
    a->der=insArbinB(elem,a->der);
  return a;
}


