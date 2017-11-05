#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include"colasprioridad.h"
#include "arbolequilibrado.h"
#include "dispersion.h"
#include "busquedaresiduo.h"

class metodo
{

private:
 int x;
public:

// metodos de ordenacion

void imprimir(int n);
void imprimir3(int n);
void seleccion(int n);
void insercion(int n);
void burbuja(int n);
void shell(int n);
void quicksort(int izq,int n);
void residuos(int izq,int der,int b);
void prioridad(int n);
void fusion(int izq,int der);
void externa(int n);

//metodos de busqueda

int secuencial(int n,int x);
int binaria(int n,int x);
int arbolb(int x,ArbinB a);
int aequilibrado(int n,int x);
int dispersion(int n,int dis,int v);
int bresiduos(int n,int x);
int bexterna(int n,int x);

metodo& operator=(int i)
{x=i;return *this;}
inline unsigned bits(int k,int j)
{return(x>>k)&~(~0<<j);}

};


int a[1000],b[1000];           // VECTOR  GLOBAL
metodo c[1000];
//colasprioridad cp(int n);

 void metodo::imprimir3(int n)
{
int i;
for(i=1;i<=n;i++)
{
textattr(6);gotoxy(4+4*i,7);printf("]");
textattr(6);gotoxy(2+4*i-1,7);printf("[");
textattr(7);gotoxy(2+4*i,7);printf("%d",a[i]);
textattr(7);gotoxy(2+4*i,8);printf("%d",i);
}
}

void metodo::imprimir(int n)
{
int i;
for(i=1;i<=n;i++)
{
textattr(6);gotoxy(4+4*i,14);printf("]");
textattr(6);gotoxy(2+4*i-1,14);printf("[");
textattr(7);gotoxy(2+4*i,14);printf("%d",a[i]);
textattr(6);gotoxy(2+4*i,15);printf("%d",i);
}
}

void intercambio(int max,int n)
{
 int var;
  var=a[max];
  a[max]=a[n];
  a[n]=var;
}


void imprimir2(int n)
{
int i;
for(i=1;i<=n;i++)
  {
textattr(6);gotoxy(4+4*i,7);printf("]");
textattr(6);gotoxy(2+4*i-1,7);printf("[");
textattr(7);gotoxy(2+4*i,7);printf("%d",c[i]);
textattr(7);gotoxy(2+4*i,8);printf("%d",i);
 }
}

void imprimir4(int n)
{
int i;
for(i=1;i<=n;i++)
  {
textattr(6);gotoxy(4+4*i,14);printf("]");
textattr(6);gotoxy(2+4*i-1,14);printf("[");
textattr(7);gotoxy(2+4*i,14);printf("%d",c[i]);
textattr(6);gotoxy(2+4*i,15);printf("%d",i);
 }
}



void intercambio2(int max,int n)
{
 metodo var;
  var=c[max];
  c[max]=c[n];
  c[n]=var;
}


  int elementomayor(int N)                                    //Implementacion que encuentra el valor del mayor elemento del array
{
    int i, mayor;
    mayor=a[1];
    for(i=2;i<=N;i++)
       if(mayor<a[i]) mayor=a[i];

    return mayor;
}






                                // METODOS DE ORDENAMIENTO
void metodo::seleccion(int n)
{
 int i,j=1,min=100000,pos;

  for(i=1;i<=n;i++)
  {
    while(j<=n)
     {
     if(a[j]<=min)
      {min=a[j];pos=j;}
       j++;
     }
    a[pos]=a[i];
   a[i]=min;
   j=i+1;
  min=1000000;
   }
}


void metodo::insercion(int n)
{
int i,j,pos,var,p;
a[0]=0;
for(i=2;i<=n;i++)
 {
  j=i;
   var=a[i];
  while(a[j-1]>=var)
    {
     a[j]=a[j-1];
     j--;
    }
a[j]=var;
 }
}

void metodo::burbuja(int n)
{
  int i=0,j=0,var=0;

  for(i=1;i<=n-1;i++)
    {
     for(j=1;j<n;j++)
       {
        if(a[j]>=a[j+1])
         { intercambio(j,j+1);
         }
       }
    }
}


void metodo::shell(int n)
{
int i,j,h,v;
for(h=1;j<=n/9;h=3*h+1);
for(;h>0;h/=3)
for(i=h+1;i<=n;i+=1)
   {
    v=a[i];j=i;
    while(j>h && a[j-h]>v)
     {a[j]=a[j-h];j-=h;}
     a[j] =v;
    }

}



void metodo::quicksort(int izq,int der)
{
  int i,j,v,var;
  if(der>izq)
   {
    v=a[der];i=izq-1;j=der;
    for(;;)
     {
     while(a[++i]<v);
     while(a[--j]>v);
     if(i>=j) break;
     var=a[i];a[i]=a[j];a[j]=var;
   }
    var=a[i];a[i]=a[der];a[der]=var;
    quicksort(izq,i-1);
    quicksort(i+1,der);
   }
}


void metodo::residuos(int izq,int der,int b)
{
int i,j;

   if(der>izq && b>0)
     {
       i=izq;j=der;
       while(j!=i)
         {
          while(!c[i].bits(b,1)&&i<j)i++;
          while(c[j].bits(b,1)&& j>i)j--;
          intercambio2(i,j);

         }

       if(!c[der].bits(b,1))j++;
       residuos(izq,j-1,b-1);
       residuos(j,der,b-1);
     }



}

void metodo::prioridad(int n)             // cola de prioridad
{
   int i;
    colasprioridadmonticulo cpm(n);

    for(i=1; i<=n; i++) cpm.insertar(a[i]);
    for(i=n; i>=1; i--) a[i]=cpm.suprimir();



 /*
  int i;

  colaprioridad cp(n);

   for(i=1; i<=n; i++) cp.insertar(a[i]);
   for(i=n; i>=1; i--) a[i]=cp.suprimir();

  */
}
                                         // fin cola de prioridad

void metodo::fusion(int izq,int der)
{
int i,j,k,m;
if(der>izq)
 {
  m=(der+izq)/2;
  fusion(izq,m);
  fusion(m+1,der);
  for(i=m+1;i>izq;i--) b[i-1]=a[i-1];
  for(j=m;j<der;j++)b[der+m-j]=a[j+1];
  for(k=izq;k<=der;k++)
  a[k]=(b[i]<b[j])? b[i++]:b[j--];
  }



}
void metodo::externa(int n)
{
}


                                //   METODOS DE BUSQUEDAS



int metodo::secuencial(int n,int x)
{
int i;

for(i=1;i<=n;i++)
  {
   if(a[i]==x)return i;
  }
 return 0;

}


int metodo::binaria(int n,int x)
{
int izq=1,r=1,i;
int der;
der=n;
  while(der>=izq)
   {
    r=(izq+der)/2;
    if(x==a[r]) return r;
    if (x<=a[r])
     {
      der=r-1;
     }
   else
    {
     izq=r+1;
    }
  }
return 0;
 }

int metodo::arbolb(int x,ArbinB a)
{
 if(vacioArbin(a))
  return 0;
  else if(a->info==x)
        {
          return a->info;
        }
       else if(a->info>x)
       return arbolb(x,a->izq);
       else return arbolb(x,a->der);
  }

int metodo::aequilibrado(int n,int v)
{
 int i,x;
    ABE ab(n);
    clrscr();
    for(i=1; i<=n;i++)
        ab.insertar(a[i], i);
    x=ab.buscar(v);
    ab.imprimir(NULL, 40, 5, 20);


    return x;
}

int metodo::dispersion(int n,int dis,int v)
{
int i,x;
    BD bd(dis);
    clrscr();
    for(i=1; i<=n;i++)
        bd.insertar(a[i], i);
    x=bd.buscar(v);

    return x;
}

int metodo::bresiduos(int n,int v)
{
  int i,x, b=32;
    int max=elementomayor(n);
    clavebits t;
    while(!(t.bits(max, --b,1)));
    BR br(b);

    for(i=1; i<=n;i++)
        br.insertar(a[i], i);
    x=br.buscar(v);
    br.imprimir(NULL, 40, 5, 20);


   return x;

}
int metodo::bexterna(int n,int x)
{
return 0;
}

