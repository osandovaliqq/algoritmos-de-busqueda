
  class ABE
{
    private:
        struct nodo
        {
            int clave;
            int info;
            bool  b;
            struct nodo *izq, *der;
            nodo(int k, int i, bool rojinegro, struct nodo *izqizq, struct nodo *derder)
            {
                clave=k;
                info=i;
                b=rojinegro;
                izq=izqizq;
                der=derder;
            };
        };
        struct nodo *cabeza, *z;
        struct nodo *ba, *a, *p, *x;
        bool rojo;
        bool negro;

    public:
        ABE(int max)
        {
            rojo=1;
            negro=0;
            z=new nodo(0, 0, negro, 0, 0);
            z->izq=z;
            z->der=z;
            cabeza=new nodo(-32767, 0, negro, 0, z);
        }

        int buscar(int v);
        void insertar(int v, int info);
        struct nodo *rotar(int v, struct nodo *y)
        {
            struct nodo *h, *n;
            h=(v < y->clave) ? y->izq : y->der;
            if(v < h->clave)
            {
                n=h->izq;
                h->izq=n->der;
                n->der=h;
            }else
            {
                n=h->der;
                h->der=n->izq;
                n->izq=h;
            }
            if(v < y->clave) y->izq=n; else y->der=n;
            return n;
        }
        void dividir(int v);
        void imprimir(struct nodo *ndo, int x, int y, int ancho);
};

  int ABE::buscar(int v)
{
    struct nodo *x=cabeza->der;
    z->clave=v;
    while(v!=x->clave)
        x=(v<x->clave) ? x->izq : x->der;
    return x->info;
}

void ABE::insertar(int v, int info)
{
    a=cabeza;
    p=cabeza;
    x=cabeza->der;
    while(x!=z)
    {
        ba=a;
        a=p;
        p=x;
        x=(v<x->clave) ? x->izq :x->der;
        if(x->izq->b && x->der->b) dividir(v);
    }
    x=new nodo(v, info, 1, z, z);
    if(v<p->clave) p->izq=x;
    else p->der=x;
    dividir(v); cabeza->der->b = negro;
}

void ABE::dividir(int v)
{
    x->b=rojo;
    x->izq->b=negro;
    x->der->b=negro;
    if(p->b)
    {
        a->b=rojo;
        if(v < a->clave != v < p->clave) p=rotar(v,a);
        x=rotar(v,ba);
        x->b=negro;
    }
}


void ABE::imprimir(struct nodo *ndo, int x, int y, int ancho)
{
    int i;
    if(ndo==NULL) ndo=cabeza->der;
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
