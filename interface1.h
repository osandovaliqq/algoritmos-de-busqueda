#include <conio.h>
#include <conio.c>
#include <iostream.h>


void interface1()
{
  int i=1,izq=1,x,pos,posy,posx;
system("cls");
 textcolor(BROWN);
cout<<"\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xbb";
for(posy=2;posy<=25;posy++)
{gotoxy(73,posy);
cout<<"\xba";}
gotoxy(73,posy-1);cout<<"\xbc";
for(posx=72;posx>=1;posx--)
{gotoxy(posx,posy-1);cout<<"\xcd";}

gotoxy(42,2);cout<<"\xba";
gotoxy(1,3);cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";

cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc";

 gotoxy(1,2);cout<<"\xba";
gotoxy(1,3);cout<<"\xcc";


for(posy=4;posy<=24;posy++)
{gotoxy(1,posy);
cout<<"\xba";}
gotoxy(1,25);cout<<"\xc8";

textattr(7);

cout<<"\n\n";
gotoxy(2,5);
textattr(7);
gotoxy(2,2);printf(" Metodos de ordenacion y busqueda");
cout<<"\n\n";
gotoxy(3,6);textcolor(BROWN);cout<<" M E N U ";
  textattr(7);
gotoxy(3,8);textattr(6);cout<<"[";textattr(11);cout<<"1";textattr(6);cout<<"]";textattr(3);cout<<" metodos de ordenamiento\n";
gotoxy(3,9);textattr(6);cout<<"[";textattr(11);cout<<"2";textattr(6);cout<<"]";textattr(3);cout<<" metodos de busqueda    \n";
gotoxy(3,10);textattr(6);cout<<"[";textattr(11);cout<<"3";textattr(6);cout<<"]";textattr(3);cout<<" Salir                  ";
textattr(7);
}


    void interface2()
{
 int i=1,izq=1,x,pos,posy,posx;

textcolor(BROWN);
gotoxy(1,26);
cout<<"\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xbb";
for(posy=27;posy<=48;posy++)
{gotoxy(73,posy);
cout<<"\xba";}
gotoxy(73,posy-1);cout<<"\xbc";

for(posx=72;posx>=1;posx--)
{gotoxy(posx,posy-1);cout<<"\xcd";}


gotoxy(42,27);cout<<"\xba";
gotoxy(1,28);cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc";

    
 gotoxy(1,27);cout<<"\xba";
gotoxy(1,28);cout<<"\xcc";
for(posy=29;posy<=47;posy++)
{gotoxy(1,posy);
cout<<"\xba";}
gotoxy(1,48);cout<<"\xc8";

textattr(7);
cout<<"\n\n";
gotoxy(2,5);
textcolor(BROWN);
  textattr(7);

}

 void interface3()
 {
textattr(6);
gotoxy(1,1);cout<<"Universidad Arturo Prat";
gotoxy(1,2);cout<<"   Dpto de Ingenieria  ";
gotoxy(1,3);cout<<"    Iquique - Chile    ";
gotoxy(1,4);cout<<"_______________________";

gotoxy(48,44);cout<<"Autor = ";
cout<<"   Oscar Sandoval";
gotoxy(48,46);cout<<"Profesor = ";
cout<<"Ceferino Castro";
gotoxy(16,20);printf(" Programa de Metodos de Busqueda y Ordenamientos");
textattr(3);
gotoxy(16,22);cout<<"  Ingenieria Civil en Computacion e Informatica" ;getch();
 }

void interface4()
{

   int i=1,izq=1,x,pos,posy,posx;
     textcolor(BROWN);
cout<<"\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xbb";
for(posy=2;posy<=25;posy++)
{gotoxy(73,posy);
cout<<"\xba";}
gotoxy(73,posy-1);cout<<"\xbc";
for(posx=72;posx>=1;posx--)
{gotoxy(posx,posy-1);cout<<"\xcd";}

gotoxy(42,2);cout<<"\xba";
gotoxy(1,3);cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";

cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc";
    gotoxy(1,2);cout<<"\xba";
gotoxy(1,3);cout<<"\xcc";


for(posy=4;posy<=24;posy++)
{gotoxy(1,posy);
cout<<"\xba";}
gotoxy(1,25);cout<<"\xc8";



textattr(7);
}


void interface5()
{
   int i=1,izq=1,x,pos,posy,posx;
     textcolor(BROWN);
cout<<"\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xbb";
for(posy=2;posy<=50;posy++)
{gotoxy(73,posy);
cout<<"\xba";}
gotoxy(73,posy-1);cout<<"\xbc";
for(posx=72;posx>=1;posx--)
{gotoxy(posx,posy-1);cout<<"\xcd";}

gotoxy(42,2);cout<<"\xba";
gotoxy(1,3);cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";

cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc";
gotoxy(1,2);cout<<"\xba";
gotoxy(1,3);cout<<"\xcc";

  for(posy=4;posy<=49;posy++)
{gotoxy(1,posy);
cout<<"\xba";}
gotoxy(1,50);cout<<"\xc8";





textattr(7);
}




void interface6()
{
  int i=1,izq=1,x,pos,posy,posx;

 textcolor(BROWN);
cout<<"\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcb\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd";
gotoxy(42,2);cout<<"\xba";
gotoxy(1,3);cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd";
cout<<"\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc";

gotoxy(1,2);cout<<"\xba";
gotoxy(1,3);cout<<"\xc8";



textattr(7);

cout<<"\n\n";
gotoxy(2,5);
textcolor(BROWN);
  textattr(7);

}

