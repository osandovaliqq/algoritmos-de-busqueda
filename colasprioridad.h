
  class colasprioridadmonticulo
{

    private:
          int *a;
          int N;
    public:
        colasprioridadmonticulo(int max)
        {
            a = new int[max];
            N=0;
        }
        ~colasprioridadmonticulo()
        {
            delete a;
        }
        void subirmonticulo(int k)
        {
            int v;
            v=a[k];
            a[0]=32767;                                                         //centinela - elemento maximo que puede contener un integer
            while(a[k/2]<=v)
            {
               a[k]=a[k/2];
               k=k/2;
            }
            a[k]=v;
        }

        void insertar(int v)
        {
            a[++N]=v;
            subirmonticulo(N);
        }

        void bajarmonticulo(int k)
        {
            int j, v;
            v=a[k];
            while(k<=N/2)
            {
                j=2*k;
                if(j<N && a[j]<a[j+1]) j++;
                if(v>=a[j]) break;
                a[k]=a[j];
                k=j;
            }
            a[k]=v;
        }

        int suprimir()
        {
            int v=a[1];
            a[1]=a[N--];
            bajarmonticulo(1);
            return v;
        }

        int sustituir(int v)
        {
            a[0]=v;
            bajarmonticulo(0);
            return a[0];
        }
};


/*
 class colaprioridad
{
     private:
          int *a;
          int n;

     public:
         colaprioridad(int max)
         {
             a = new int[max];
             n=0;
         }

           void insertar(int v)
         {
              a[n++]=v;
         }
         int suprimir()
         {
             int j, max=1;
             for(j=2; j<=n; j++)
                 if(a[j]>a[max]) max=j;
             intercambio(a, max, n);
             return a[n--];
         }

         inline void intercambio(int *a, int i, int j)
         {
              int t;
              t=a[i];
              a[i]=a[j];
              a[j]=t;
         }

   };

  */
