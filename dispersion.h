    class BD
{
    private:
        int M;
        struct nodo
        {
            int clave, info;
            struct nodo *siguiente;
            nodo(int k, int i, struct nodo*n)
            {
                clave=k;
                info=i;
                siguiente=n;
            };
        };

        struct nodo *z, **cabezas;
    public:
        BD(int tm)
        {
            int i;
            M=tm;
            z= new nodo(0, 0, NULL);
            z->siguiente=z;
            cabezas = new nodo *[M];
            for(i=0; i<M; i++)
                cabezas[i]=new nodo(0, 0, z);
        }
        ~BD(void){;};
        int dispersion(int v);
        int buscar(int v);
        void insertar(int v, int info);
};

int BD::dispersion(int v)
{
    return v%M;
}

void BD::insertar(int v, int info)
{
    struct nodo *x, *t;
    t=cabezas[dispersion(v)];
    z->clave=v;
    while(v>t->siguiente->clave)
        t=t->siguiente;
    x=new nodo(v, info, t->siguiente);
    t->siguiente=x;
}

int BD::buscar(int v)
{
     struct nodo *t;
     t=cabezas[dispersion(v)];
     z->clave=v;
     while(v>t->clave) t=t->siguiente;
     return t->info;
}

