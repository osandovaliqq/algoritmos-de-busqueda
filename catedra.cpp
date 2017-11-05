#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include "arboles.h"
#include "interface1.h"
#include "metodos.h"
//#include "colasprioridad.h"


void introducir_dato(int n);
void interface1();
void interface2();
void interface3();
void interface4();
void interface5();
void interface6();

int aleat()
 {
  return ((rand()%100)+1);
 }

void introducir_dato(int n)
{
int i=1;
system("cls");
interface5();
gotoxy(3,2);cout<<"introduciendo Datos                ["<<n<<"]";

  while(i<=n)
   {
textattr(7);gotoxy(30,2);cout<<"["<<i<<"]  de ";

gotoxy(2,3+i);textattr(6);cout<<"[";textattr(3);cout<<i;textattr(6);cout<<"] = ";
textattr(3);
  cin>>a[i];
  b[i]=a[i];
  c[i]=a[i];
   i++;
  }

}

 main()
 {
  int n,opcion,opciono,opcionb,repetir,opcion1,j;
  int i=1,izq=1,x,pos,posy,posx,elem,aleatorio;
  ArbinB arbol;
  ArbinB arbolres;
  metodo ver;

  interface3();
  do
  {
    system("cls");
    interface6();
   gotoxy(2,2); cout<<" ingrese el numero de elementos [n] = ";
   cin>>n;
    system("cls");
   interface6();
   gotoxy(2,2);cout<<"ingresar datos [1] manual [2] aleatorio";
   cin>>opcion1;
   if(opcion1==1)
    {introducir_dato(n);}
    else
     {for(j=1;j<=n;j++)
       {
      a[j]=aleat();
      c[j]=a[j];
      }
      if(j-1==n)
      {textattr(3);gotoxy(2,6);cout<<" Se han generado los Numeros correctamente";
       getch();
      }
    }


   do
    {
     interface1();
     textattr(6);
     gotoxy(2,24);cout<<"OPCION = ";
     cin>>opcion;
     if(opcion>3 || opcion<1)
     {textattr(4);gotoxy(2,49);cout<<"Error Ingrese la opcion correctamente                             [3] (salir)";opcion=getch();if(opcion=='3')exit(-1);}
    }
    while(opcion>3 || opcion<1);
        if(opcion==3)exit(-1);
     if(opcion==1)
    {
    interface2();
    gotoxy(2,27);cout<<"    metodos de ordenacion \n\n";
    cout<<"\n\n";
    gotoxy(3,30);textattr(6);cout<<"[";textattr(11);cout<<"1";textattr(6);cout<<"]";
    textattr(3);cout<<" metodo de seleccion\n";
    gotoxy(3,31);textattr(6);cout<<"[";textattr(11);cout<<"2";textattr(6);cout<<"]";
    textattr(3);cout<<" metodo de inserccion\n";
    gotoxy(3,32);textattr(6);cout<<"[";textattr(11);cout<<"3";textattr(6);cout<<"]";
    textattr(3);cout<<" metodo de burbuja\n";
    gotoxy(3,33);textattr(6);cout<<"[";textattr(11);cout<<"4";textattr(6);cout<<"]";
    textattr(3);cout<<" metodo de Shell\n";
    gotoxy(3,34);textattr(6);cout<<"[";textattr(11);cout<<"5";textattr(6);cout<<"]";
    textattr(3);cout<<" metodo de Quicksort\n";
    gotoxy(3,35);textattr(6);cout<<"[";textattr(11);cout<<"6";textattr(6);cout<<"]";
    textattr(3);cout<<" metodo de ordenacion por residuo\n";
    gotoxy(3,36);textattr(6);cout<<"[";textattr(11);cout<<"7";textattr(6);cout<<"]";
    textattr(3);cout<<" metodo de colas de prioridad\n";
    gotoxy(3,37);textattr(6);cout<<"[";textattr(11);cout<<"8";textattr(6);cout<<"]";
    textattr(3);cout<<" metodo de fusion\n";
    gotoxy(3,38);textattr(6);cout<<"[";textattr(11);cout<<"9";textattr(6);cout<<"]";
    textattr(3);cout<<" metodo de ordenacion externa\n";
    textattr(6);
    gotoxy(2,47);cout<<"OPCION = ";
    cin>>opciono;

    if(opciono==1)
     {
      system("cls");
      interface4();
      gotoxy(2,2);cout<<"  metodo de seleccion \n\n";
      cout<<"\n\t vector desordenado\n\n";
      ver.imprimir3(n);
      cout<<"\n\n\t vector ordenado\n\n";
      ver.seleccion(n);
      ver.imprimir(n);
      cout<<"\n\n\n";
      system("pause");

     }
    if(opciono==2)
     {
      system("cls");
      interface4();
      gotoxy(2,2);cout<<"   metodo de insercion \n\n";
      cout<<"\n\t vector desordenado\n\n";
      ver.imprimir3(n);
      cout<<"\n\n\t vector ordenado\n\n";
      ver.insercion(n);
      ver.imprimir(n);
      cout<<"\n\n\n";
      system("pause");

     }

     if(opciono==3)
      {
       system("cls");
       interface4();
       gotoxy(2,2);cout<<"  metodo de burbuja  \n\n";
       cout<<"\n\t vector desordenado\n\n";
       ver.imprimir3(n);
       cout<<"\n\n\t vector ordenado\n\n";
       ver.burbuja(n);
       ver.imprimir(n);
       cout<<"\n\n\n";
       system("pause");
      }


      if(opciono==4)
      {
       system("cls");
      interface4();
      gotoxy(2,2);cout<<"  metodo de Shell \n\n";
       cout<<"\n vector desordenado\n\n";
       ver.imprimir3(n);
       cout<<"\n\n vector ordenado\n\n";
       ver.shell(n);
       ver.imprimir(n);
       cout<<"\n\n\n";
       system("pause");
      }

        if(opciono==5)
      {
       system("cls");
       interface4();
       gotoxy(2,2);cout<<"   metodo de Quicksort \n\n";
       cout<<"\n vector desordenado\n\n";
       ver.imprimir3(n);
       cout<<"\n\n vector ordenado\n\n";
       ver.quicksort(izq,n);
       ver.imprimir(n);
       cout<<"\n\n\n";
       system("pause");
      }


       if(opciono==6)
      {
       system("cls");
       interface4();
       gotoxy(2,2);cout<<"  metodo de ordenacion por Residuos \n\n";
       cout<<"\n vector desordenado\n\n";
       imprimir2(n);
       cout<<"\n\n vector ordenado\n\n";
       ver.residuos(1,n,30);
       imprimir4(n);
       cout<<"\n\n\n";
       system("pause");

      }


     if(opciono==7)
      {
       system("cls");
       interface4();
       gotoxy(2,2);cout<<"  metodo de ordenacion por prioridad \n\n";
       cout<<"\n vector desordenado\n\n";
       ver.imprimir3(n);
       cout<<"\n\n vector ordenado\n\n";
       ver.prioridad(n);
       ver.imprimir(n);
       cout<<"\n\n\n";
       system("pause");
      }

     if(opciono==8)
      {
       system("cls");
       interface4();
       gotoxy(2,2);cout<<"  metodo de Ordenamiento por Fusion  \n\n";
       cout<<"\n vector desordenado\n\n";
       ver.imprimir3(n);
       cout<<"\n\n vector ordenado\n\n";
       ver.fusion(izq,n);
       ver.imprimir(n);
       cout<<"\n\n\n";
       system("pause");
      }

     if(opciono==9)
      {
       system("cls");
       interface4();
       gotoxy(2,2);cout<<"  metodo de ordenacion Externa  \n\n";
       cout<<"\n vector desordenado\n\n";
       ver.imprimir3(n);
       cout<<"\n\n vector ordenado\n\n";
       ver.externa(n);
       ver.imprimir(n);
       cout<<"\n\n\n";
       system("pause");
      }

}

if(opcion==2)
{
 interface2();
  gotoxy(2,27); cout<<"  metodos de busqueda  \n\n";
  cout<<"\n\n";
  gotoxy(3,30);textattr(6);cout<<"[";textattr(11);cout<<"1";textattr(6);cout<<"]";
  textattr(3);cout<<" metodo de busqueda secuencial\n";
  gotoxy(3,31);textattr(6);cout<<"[";textattr(11);cout<<"2";textattr(6);cout<<"]";
  textattr(3);cout<<" metodo de busqueda binaria\n";
  gotoxy(3,32);textattr(6);cout<<"[";textattr(11);cout<<"3";textattr(6);cout<<"]";
  textattr(3);cout<<" metodo de busqueda por arbol binario \n";
  gotoxy(3,33);textattr(6);cout<<"[";textattr(11);cout<<"4";textattr(6);cout<<"]";
  textattr(3);cout<<" metodo de arboles equilibrados\n";
  gotoxy(3,34);textattr(6);cout<<"[";textattr(11);cout<<"5";textattr(6);cout<<"]";
  textattr(3);cout<<" metodo de busqueda de dispersion\n";
  gotoxy(3,35);textattr(6);cout<<"[";textattr(11);cout<<"6";textattr(6);cout<<"]";
  textattr(3);cout<<" metodo de busqueda por residuos\n";
  gotoxy(3,36);textattr(6);cout<<"[";textattr(11);cout<<"7";textattr(6);cout<<"]";
  textattr(3);cout<<" metodo de busqueda externa\n";
   textattr(6);
  gotoxy(2,47);cout<<"OPCION = ";
  cin>>opcionb;
   system("cls");
  interface4();
gotoxy(3,2);cout<<"ingrese el numero a buscar = ";cin>>x;
   if(opcionb==1)
     {


      system("cls");
      interface4();
      gotoxy(2,2);cout<<"   metodo de Busqueda secuencial \n\n";
      printf("\n\n*** el valor buscado es %d ***\n\n\n",x);
      pos=ver.secuencial(n,x);
      if(pos==0)
      {printf("\n\nno se ha encontrado el numero\n\n\n\n");system("pause");}
      else
       {
      ver.imprimir3(n);
      printf("\n\n se ha encontrado el numero en a[%d]= %d\n\n",pos,a[pos]);
      cout<<"\n\n\n";
      system("pause");
       }
     }

     
   if(opcionb==2)
     {

      system("cls");
      interface4();
      gotoxy(2,2);cout<<"    metodo de Busqueda binaria \n\n";
      printf("\n\n*** el valor buscado es %d ***\n\n\n",x);
      ver.seleccion(n);
      pos=ver.binaria(n,x);
      if(pos==0)
      {printf("\n\nno se ha encontrado el numero\n\n\n\n");system("pause");}
      else
       {
        ver.imprimir3(n);
      printf("\n\n se ha encontrado el numero en a[%d]= %d\n\n",pos,a[pos]);

      cout<<"\n\n\n";
      system("pause");
       }
     }


   if(opcionb==3)
     {

      elem=a[1];
      arbol=crearArbinB(elem);
      for(i=2;i<=n;i++)
       {
        elem=a[i];
        arbol=insArbinB(elem,arbol);
       }
      system("cls");
      interface5();
      gotoxy(2,2);cout<<"  metodo de Busqueda arbol binario  \n\n";
      GraficarArbin(arbol);
      pos=ver.arbolb(x,arbol);
      gotoxy(2,39);printf("\n\n el valor buscado es %d",x);
      if(pos!=0)
      {gotoxy(1,41);printf("se ha encontrado el numero %d ",pos);}
      else
      {printf("\n\n\n\nno se ha encontrado el numero");}
      gotoxy(2,48);system("pause");
     }


   if(opcionb==4)
     {
      system("cls");

      gotoxy(2,2); cout<<"    metodo de Busqueda arbol equilibrado \n\n";
      gotoxy(2,37);printf("\n\n*** el valor buscado es %d ***\n\n\n",x);
      pos=ver.aequilibrado(n,x);

      if(pos!=0)
      {gotoxy(2,45);printf("se ha encontrado el numero %d ",pos);}
      else
      {printf("\n\n\n\nno se ha encontrado el numero");}

     getch();//gotoxy(1,43);system("pause");
     }

   if(opcionb==5)
     {
      system("cls");
        pos=ver.dispersion(n,9,x);
      interface4();
      gotoxy(2,2);cout<<"  metodo de Busqueda por dispersion \n\n";
      printf("\n\n*** el valor buscado es %d ***\n\n\n",x);
       if(pos==0)
      {printf("\n\nno se ha encontrado el numero\n\n\n\n");system("pause");}
      else
       {
      ver.imprimir(n);
      printf("\n\n se ha encontrado el numero %d\n\n",pos);
      cout<<"\n\n\n";
      system("pause");
       }
     }

 
   if(opcionb==6)
     {

        system("cls");
      interface5();
      gotoxy(2,2); cout<<"  metodo de Busqueda por residuo \n\n";
      gotoxy(3,37);printf("  el valor buscado es %d ",x);
      pos=ver.bresiduos(n,x);

      if(pos!=0)
      {gotoxy(3,39);printf("se ha encontrado el numero %d ",pos);}
      else
      {gotoxy(3,39);printf("no se ha encontrado el numero");}
     getch();

  }
   if(opcionb==7)
     {
     system("cls");
      interface4();
      gotoxy(2,2);cout<<"    metodo de Busqueda externa \n\n";
      printf("\n\n*** el valor buscado es %d ***\n\n\n",x);
      pos=ver.bexterna(n,x);
      if(pos==0)
      {printf("\n\nno se ha encontrado el numero\n\n\n\n");system("pause");}
      else
       {
      ver.imprimir(n);
      printf("\n\n se ha encontrado el numero en a[%d]= %d\n\n",pos,a[pos]);
      cout<<"\n\n\n";
      system("pause");
       }
    }
}

system("cls");
interface6();
gotoxy(2,2);printf(" volver a ingresar datos [1]si[2] salir");
cin>>repetir;
if(repetir==2)repetir=0;
}
while(repetir==1);
}




