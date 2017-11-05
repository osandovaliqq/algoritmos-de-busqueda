 class clavebits
{
    private:
        int x;
    public:
        clavebits& operator=(int i)
        {
            x=i;
            return*this;
        }
        inline unsigned bits(int t,int k, int j)
        {
            x=t;
            return (x>>k)&~(~0<<j);
        }
};


    class BR
{
    private:
        struct nodo
        {
            int clave;    //clave utilizada para la busqueda
            int info;     //dato(s) que contine cualquier informacion relacionada con clave
            struct nodo *izq, *der;   //punteros nodos a hijos del nodo
            nodo(int k, int i, struct nodo *izqizq, struct nodo *derder)
            {
                clave=k;
                info=i;
                izq=izqizq;
                der=derder;
            };
        };
        struct nodo *cabeza, *z;
        clavebits t;
        int maxb;

    public:
        BR(int max)
        {
            maxb=max;
            z=new nodo(0, 0, 0, 0);
            cabeza=new nodo(-32767, 0, z, NULL);
        }
        ~BR()
        {;};
        int buscar(int v);
        void insertar(int v, int info);
        void imprimir(struct nodo *ndo, int x, int y, int ancho);
};
int BR::buscar(int v)
{
    struct nodo *x=cabeza->izq;
    int b=maxb;
    z->clave=v;
    while(v!=x->clave)
        x=(t.bits(v, b--,1)) ? x->der : x->izq;
    return x->info;
}

void BR::insertar(int v, int info)
{
    struct nodo *p, *x;
    p=cabeza;
    int b=maxb;
    x=cabeza->izq;
    while(x!=z)
    {

        p=x;
        x=(t.bits(v, b--, 1)) ? x->der :x->izq;
    }
    x=new nodo(v, info, z, z);
    if(t.bits(v, b+1, 1)) p->der=x;
    else p->izq=x;
}

void BR::imprimir(struct nodo *ndo, int x, int y, int ancho)
{
    int i;
    if(ndo==NULL) ndo=cabeza->izq;
    for(i=x-ancho+1; i<x+ancho; i++)
    {
         textcolor(BROWN);
        gotoxy(i,y+1);printf("\xc4");
    }
        textcolor(BROWN);
    gotoxy(x-ancho,y+1);printf("\xda");
    gotoxy(x,y+1);printf("\xc1");
    gotoxy(x+ancho,y+1);printf("\xbf");
      textattr(8);
    gotoxy(x,y);cprintf("%d",ndo->clave);
    if(ndo->izq!=z) imprimir(ndo->izq, x-ancho, y+2, ancho/2);
    if(ndo->der!=z) imprimir(ndo->der, x+ancho, y+2, ancho/2);
}


