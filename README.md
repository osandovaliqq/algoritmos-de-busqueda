# algoritmos-de-busqueda
Repositorio Oscar
Métodos de Ordenación


Ordenación por Selección: Este algoritmo es muy sencillo y funciona de la siguiente forma: se busca el elemento más pequeño  del Vector y se intercambia con el que esta en la primera posición, después se busca el segundo mas pequeño y se intercambia con el elemento de la segunda posición y continua así hasta que el vector este ordenado.


Ejemplo:


Se ubica el elemento más pequeño del vector

5
10
8
1
9


Se intercambia con el que esta en la primera posición

1
10
8
5
9


Luego se ubica el segundo elemento más pequeño y se intercambia con el de la segunda
Posición

1
10
8
5
9


1
5
8
10
9

.
.
.
.

1
5
8
9
10


Así hasta quedar completamente ordenado.



El Algoritmo de este método es:


El bucle for  hace referencia  al intercambio  de n veces del vector, y la variable i guarda la posición a intercambiar

for (i = 1; i <= n; i++)
  {

el bucle while  encuentra el elemento menor del vector que corresponde y se almacena en la variable min y la posición del elemento en la variable j

    while (j<=n)
     {
     if (a[j] <= min)
      {min = a[j]; pos = j ;}
       j++;
     }

 hace el intercambio correspondiente con el menor encontrado

   a [pos]=a[i];
   a[i] =min;
   j = i + 1;
  min = 1000000;
   }

Ordenación por Inserción: Este método funciona de la siguiente forma: el elemento considerado se inserta moviendo una posición a la derecha a todos los elementos mayores que el e insertando a continuación el elemento en la posición vacante.

Ejemplo:

Se compara la posición 2 con el 1 y se intercambia si es menor

5
6
8
1
9

Luego se compara  la posición 3 con la 2

5
6
8
1
9


Luego  la posición 4 con la 3, como la posición 4 es menor que la posición 3 entonces se intercambia sucesivamente hasta quedar ordenado

5
6
8
1
9


Se mueven todos los elementos mayores a la derecha

_
5
6
8
9


Y se inserta el elemento en la posición correspondiente

1
5
6
8
9

El algoritmo de este método es:


a[0]=0;   // elemento menor posible  del vector

El bucle for  hace referencia  al ciclo  de n-1 veces del método 

for (i = 2; i< = n; i++)
 {
     j = i;

la variable var almacena el valor correspondiente a evaluar

    var = a [i];    

el ciclo while mueve todos los valores mayores que var a la derecha

  while (a [j-1]>=var)
    {
     a[j] = a [j-1];               // intercambio
     j--;
     }
a[j]=var;
  }



Método de Ordenación de Burbuja: En este método se efectúan tantos pasos  en el Vector como sea necesario, intercambiando elementos adyacentes entre si, cuando en algún paso no se necesite intercambios el vector estar ordenado.


Ejemplos: 


Compara la 2 posición con la 1, si esta es menor se intercambian

5
8
6
1
9


Luego se compara la 3 posición con la 2, y se intercambian

5
6
8
1
9



Luego se compara la 4 posición con la 3, y se intercambian

5
6
1
8
9


Luego se compara la n posición con la n-1 y si es menor se intercambian

5
6
1
8
9



Este procedimiento se hace n-1 veces hasta que el vector este completamente ordenado.


El algoritmo para este método es:


El bucle for  hace referencia  al ciclo  de n-1 veces del método 


for (i = 1; i<= n-1; i++)
  {

este bucle for compara y ordena todos los elementos adyacentes entre sí , esto se repite
n-1 veces gracias al primer bucle for quedando el vector completamente ordenado

  for (j = 1; j <n; j++)
    {

 el if compara  los elementos adyacentes y si es menor el de la izq se intercambia, la variable var almacena el valor a intercambiar

    if (a[j] >= a [j + 1])                                      
      {var = a [j + 1];                    	
       a [j + 1] = a[j];
       a[j] = var;
      }
    } 
 }





Método de Ordenación Shell: La idea de este método  es reorganizar el archivo para que tenga la propiedad de que tomando todos los elementos h-ésimos  se obtenga un Archivo ordenado, Entonces estará h-ordenado o sea esta constituido por h archivos ordenados independientes y entrelazados entre sí.

Ejemplo:

Este ejemplo muestra la  operación de la ordenación Shell para incrementos decrecientes
De 13, 4, 1 

En el primer paso se toma la primera posición y se compara con la posición 13, y si es menor se intercambia.

5
6
8
7
4
6
9
2
3
3
4
2
1

Intercambio

1
6
8
7
4
6
9
2
3
3
4
2
5

En el segundo paso la serie es de 4 por lo tanto se divide el vector en partes de  a  4 se compara y se ordena hasta que estos elementos queden ordenados

1
6
8
7
4
6
9
2
3
3
4
2
5
1                                5                                 9                               13 

1
6
8
7
3
6
9
2
4
3
4
2
5
 
Luego se analiza las posiciones 2, 6, 10

1
6
8
7
4
6
9
2
3
3
4
2
5
      2                                 6                                 10

Se comparan y se  ordenan

1
3
8
7
4
6
9
2
3
6
4
2
5


Luego se compara las posiciones 3, 7, 11: 4, 8, 12  respectivamente



1
3
4
7
4
6
8
2
3
6
9
2
5
                  3                                7                                 11


1
3
4
2
4
6
8
2
3
6
9
7
5
                          4                                8                                 12        

En el 3 paso la serie es de 1 luego el vector se divide en n partes, Este ultimo paso es 
El método de inserción con la ventaja que ningún elemento tiene que desplazarse muy lejos


1
3
4
2
4
6
8
2
3
6
9
7
5

1
3
4
2
4
6
8
2
3
6
9
7
5

1
2
3
4
4
6
8
2
3
6
9
7
5

1
2
2
3
4
4
6
8
3
6
9
7
5

1
2
2
3
3
4
4
6
8
6
9
7
5

1
2
2
3
3
4
4
6
6
8
9
7
5

1
2
2
3
3
4
4
6
6
7
8
9
5

1
2
2
3
3
4
4
5
6
6
7
8
9

Quedando la lista finalmente ordenada



El algoritmo de este método es:


Este for muestra el incremento de la serie (16, 10, 7,…., 3), con la variable h como indicador de los h subarchivos del vector.

for (h = 1; j <= n/9; h = 3*h+1);

Este for divide la variable h en 3

for (; h>0; h/=3)


la variable i del for indica la siguiente posición a comparar

for (i=h+1; i<=n; i+=1)
   {

 La variable v es la variable pivote

    v = a[i]; j = i;

En este ciclo while se compara y se  intercambian los valores con la variable pivote

  while (j>h && a [j-h]>v)
     {a [j]=a [j-h]; j - = h;}
     a[j] =v;
    }



Método de Ordenación Quicksort: Esta es probablemente la técnica más rápida conocida. Fue desarrollada por C.A.R. Hoare en 1960.Su funcionamiento es el siguiente.

       Eliges un elemento de la lista. Puede ser cualquiera .Lo llamaremos elemento de división. Buscas la posición que le corresponde en la lista ordenada. Acomodas los elementos de la lista a cada lado del elemento de división, de manera que a un lado queden todos los menores que él y al otro los mayores. En este momento el elemento de división separa la lista en dos sublistas. Realizas esto de forma recursiva para cada sublista mientras éstas tengan un largo mayor que 1. Una vez terminado este proceso todos los elementos estarán ordenados. 


Comenzamos con la lista completa. El elemento divisor será el 4: 

5
3
7
6
2
1
4

Comparamos con el 5 por la izquierda y el 1 por la derecha. 
5
3
7
6
2
1
4

5 es mayor que cuatro y 1 es menor. Intercambiamos: 
1
3
7
6
2
5
4

Avanzamos por la izquierda y la derecha: 
1
3
7
6
2
5
4

3 es menor que 4: avanzamos por la izquierda. 2 es menor que 4: nos mantenemos ahí. 
1
3
7
6
2
5
4

7 es mayor que 4 y 2 es menor: intercambiamos. 
1
3
2
6
7
5
4

Avanzamos por ambos lados: 
1
3
2
6
7
5
4

En este momento termina el ciclo principal, porque los índices se cruzaron. Ahora intercambiamos a[i] con a [der] 
1
3
2
4
7
5
6
Aplicamos recursivamente a la sublista de la izquierda. Tenemos lo siguiente: 
1
3
2
1 es menor que 2: avanzamos por la izquierda. 3 es mayor: avanzamos por la derecha. Como se intercambiaron los índices termina el ciclo. Se intercambia lista[i] con lista[sup]: 
1
2
3
Al llamar recursivamente para cada nueva sublista (lista[0]-lista[0] y lista[2]-lista[2]) se retorna sin hacer cambios (condición 5.).Para resumir te muestro cómo va quedando la lista: 
Segunda sublista: a [4] - a [6] 
7
5
6

5
7
6

5
6
7
Para cada nueva sublista se retorna sin hacer cambios (se cruzan los índices). 

Finalmente, al retornar de la primera llamada se tiene el arreglo ordenado: 
1
2
3
4
5
6
7


El algoritmo para este método es:


Este if verifica que no se crucen los límites

if (der>izq)
   {
 la variable v contiene el valor de la partición 

  v = a [der]; i = izq-1; j = der;
    for (;;)
      {
 
Se clasifican los subarchivos

   while (a [++i] <v);
     while (a [--j]>v);

Sale del bucle cuando se Cruzan los punteros

     if (i>=j) break;
 
 Se intercambia los valores del vector 

   var = a[i]; a[i] = a[j]; a[j] = var;
   }
  
Se ordena recursivamente los dos subarchivos, con el método divide y vencerás 

  var = a[i]; a[i] = a [der]; a [der] = var;
    
quicksort (izq, i-1);
    quicksort (i+1, der);  
}


Método de Ordenación por Residuo: En este método se aprovecha el hecho de que las claves pueden considerarse como números de algún intervalo finito, este tipo de métodos de ordenación se denominan ordenación por residuos. Este método funciona de la siguiente manera, se reordenan los registros de un archivos de manera que todas aquellas claves que comiencen con el Bit 0 se coloquen delante de todas las que comiencen con el Bit  1, para esto se examina el archivo empezando por la izquierda para encontrar una clave que empiece con el Bit 1 y empezando por la derecha para encorar una clave que empiece con el Bit 0, intercambiándolas recursivamente y continuando así hasta que se crucen los punteros.



Ejemplo:


La tabla esta inicialmente desordenada


9
=
1
0
0
1
6
=
0
1
1
0
7
=
0
1
1
1
2
=
0
0
1
0
8
=
1
0
0
0
10
=
1
0
1
0
1
=
0
0
0
1
5
=
0
1
0
1
4
=
0
1
0
0
3
=
0
0
1
1

Se Analiza el Bit mas izquierdo de los números y se ordena

6
=
0
1
1
0
7
=
0
1
1
1
2
=
0
0
1
0
1
=
0
0
0
1
5
=
0
1
0
1
4
=
0
1
0
0
3
=
0
0
1
1
9
=
1
0
0
1
8
=
1
0
0
0
10
=
1
0
1
0

Luego se ordena de la misma manera con el Bit que sigue, dejando los 1 hasta el principio del Bit 0 ordenado anteriormente


2
=
0
0
1
0
1
=
0
0
0
1
3
=
0
0
1
1
6
=
0
1
1
0
7
=
0
1
1
1
5
=
0
1
0
1
4
=
0
1
0
0
9
=
1
0
0
1
8
=
1
0
0
0
10
=
1
0
1
0









Luego se ordena el siguiente Bit

1
=
0
0
0
1
2
=
0
0
1
1
3
=
0
0
1
1
5
=
0
1
0
1
4
=
0
1
0
0
6
=
0
1
1
0
7
=
0
1
1
1
9
=
1
0
0
1
8
=
1
0
0
0
10
=
1
0
1
0


Finalmente se ordena el primer Bit de los elementos, quedando la tabla ordenada


1
=
0
0
0
1
2
=
0
0
1
1
3
=
0
0
1
1
4
=
0
1
0
0
5
=
0
1
0
1
6
=
0
1
1
0
7
=
0
1
1
1
8
=
1
0
0
0
9
=
1
0
0
1
10
=
1
0
1
0


El algoritmo de este método es:


Este if verifica que no se crucen las variables izq y der

if (der > izq && b > 0)
   {

    Las variables i y j toman los valores limites

       i = izq; j = der; 
       while (j != i)
         {

          Estos ciclos while compara los bits de los datos del vector

          while (! c[i].bits (b, 1) && i < j) i++;
          while (c[j].bits (b, 1) && j > i) j--;

     Intercambia  los valores 

           Intercambio (i, j);
          }

   Este if  aumenta j si c[der].bit es falso o sea si no ha llegado al limite

      if (!c[der].bits(b,1)) J++;

       Llama recursivamente a la función residuos

       residuos (izq, j-1, b-1);
       residuos (j, der, b-1);
   }



Colas de Prioridad: Una cola de prioridad es una generalización de pilas y colas, puesto que estas estructuras se pueden implementar con colas de prioridad, haciendo las asignaciones de prioridad adecuadas, las aplicaciones de esta estructura son muchas como sistemas de simulación, planificación de tareas en los sistemas informáticos, etc.
 Un método de ordenación de las colas de prioridad es la ordenación por montículos que es simplemente construir un montículo que contenga los elementos a ordenar y después suprimirlos todos en orden. Una forma de ordenar consiste en insertar los elementos en un montículo vacío y  después efectuar n operaciones de suprimir, colocando  el elemento que se ha suprimido en el lugar que ha quedado vacante en el montículo que se esta comprimiendo.
Las dos operaciones básicas de las colas de prioridad son insertar y eliminar mínimo. Vamos a conocer su funcionamiento.
Insertar
Inicialmente se inserta el nuevo elemento en la primera posición libre de la cola de prioridad, en el montículo representado arriba se insertaría como el hijo derecho del nodo C. En el caso de que el nuevo elemento fuese mayor que su padre la operación de inserción habría finalizado, ya que seguiría manteniendo la condición de orden de los montículos. Por supuesto este era el caso simple...
La complejidad se produce cuando el nodo insertado es menor que su padre. Si repasamos las condiciones para que una estructura sea un montículo binario observaremos que es necesario que cada nodo sea menor que sus hijos, por lo que si dejásemos la estructura así, con el nuevo nodo en la última posición, esa estructura ya no sería un montículo.
Para solucionar este problema lo que se realiza es un intercambio entre padre e hijo. Con este intercambio ya estaría solucionado el problema, pero ¿qué sucede si el nuevo nodo (que se ha intercambiado con el padre) es aún más pequeño que su nuevo padre?. Pues la respuesta es simple, se volvería a realizar un nuevo intercambio del nuevo nodo con su nuevo padre, prolongándose estos intercambios hasta que el nuevo nodo sea mayor que sus padre o hasta que el nuevo nodo llegue a la raíz.

Ejemplo:









la condición de orden sólo obliga a que un nodo sea menor que sus descendientes, no a que sea menor que los nodos que estén en un nivel inferior. Esto se puede apreciar con el hijo izquierdo de 2 (valor 5) y el nodo con valor 4 situado en el mismo nivel. Nodo 4 es menor que nodo 5 y está en un nivel inferior. Esto no importa, el montículo es correcto.
Eliminar mínimo
La operación eliminar mínimo consta de dos partes, la búsqueda del mínimo y su eliminación. La búsqueda es fácil, el mínimo es siempre la raíz. Eliminarlo es lo complejo.
Al eliminar el mínimo se crea un hueco en la raíz, este hueco se cubrirá con el menor de uno de los siguientes nodos, sus hijos o el último nodo del montículo. Al realizar este trasvase, se creará un nuevo hueco en el lugar del nodo que promocionó a la raíz, excepto si el nodo que promocionó fue el último del montículo. Para cubrir este nuevo hueco se vuelve a realizar la misma acción, se cubre con el menor de sus hijos o con el último nodo si éste es más pequeño. Este procedimiento se repetirá recursivamente hasta que el hueco sea cubierto por el último nodo del montículo original, caso que se producirá cuando dicho nodo sea menor que los nodos hijo del hueco o cuando el hueco esté situado en un nodo hoja.




Al eliminar el mínimo (1), se crea un hueco en la raíz que será cubierto por el menor de los siguientes nodos: hijo izquierdo (2), hijo derecho (3), último nodo (4). En este caso el nodo que promociona será el 2.

Para ocupar el nuevo nodo se tienen en cuenta los siguientes nodos: hijo izquierdo (5), hijo derecho (8), último nodo (4). El mínimo es el 4, por lo tanto es el que ocupa el hueco y se acaba la operación de inserción. La estructura obtenida es un montículo correcto.





     La ordenación por montículo no utiliza memoria extra y garantiza ordenar N elementos en alrededor de NlogN pasos, sin importar cual sea la entrada. Por desgracia, su bucle interno es algo mas largo que el del Quicksort  y como promedio es dos veces más lento.
     
La idea es simplemente construir un montículo que contenga los elementos a ordenar y después suprimirlos todos en orden, Una forma de ordenar consiste en insertar los elementos en un montículo vacío, como en las dos primeras líneas del código siguiente y después efectuar N operaciones suprimir, colocando el elemento que se ha suprimido en el lugar que ha quedado vacante en el montículo que se esta  suprimiendo

El algoritmo para este método es:


     int i;
    
    Colasprioridadmonticulo cpm(n);
    for (i=1; i<=n; i++) cpm.insertar(a[i]);
    for (i=n; i>=1; i--) a[i]=cpm.suprimir();



Fusión: Este método ordena un vector dado, lo divide en dos, se ordenan las dos mitades recursivamente y lo fusiona entre si, este método tiene la ventaja  de que ordena un vector de n elementos en un tiempo proporcional a nlogn  y su desventaja es que parece difícil evitar la utilización de un espacio extra proporcional a n.

Ejemplo: 


Vector desordenado

4
5
9
3
1
8
7

Se compara los 2 primeros elementos

4
5
9
3
1
8
7

Luego los dos siguientes
  
4
5
9
3
1
8
7

Se intercambia el 3 con el 9 y estos se comparan con los anteriores

4
5
9
3
1
8
7


3
4
5
9
1
8
7


Luego se compara los siguientes elementos

3
4
5
9
1
8
7

Se intercambian y se funcionan con los anteriores

1
3
4
5
9
8
7

Se compara el 9 con el 8 y se fusionan ordenadamente con los anteriores

1
3
4
5
8
9
7

Por ultimo se compara el 9 con el 7 y se fusiona con los anteriores, quedando la lista ordenada

1
3
4
5
7
8
9


El algoritmo de este método es:


Verificamos que no se crucen los limites
if (der>izq)
 {
 el pivote apunta a la mitad del vector

   m = (der+izq)/2;

   la llamada fusión va dividiendo el vector en forma recursiva

   fusion (izq, m);
   fusion (m+1, der);

estos ciclos ordena el vector fusionando los dos vectores ordenados independientemente

   for (i=m+1; i>izq; i--) b [i-1] = a [i-1];
   for (j=m; j<der; j++) b[der + m-j]=a[j+1];
   for (k=izq; k<=der; k++)
   a[k] = (b[i]<b[j]) ? b [i++]: b[j--];
 }









método de ordenación externa: Algunos métodos de ordenación deben procesar archivos muy grandes, demasiado como para tenerlos en memoria principal, a este tipo de métodos se les denomina métodos externos.

     Hay dos factores determinantes que hacen que los algoritmos externos sean diferentes de los que se han visto hasta ahora. El primero es que el costo de acceso a un elemento es infinitamente más grande que el de cualquier actualización o cálculo, el segundo es que existen severas restricciones de acceso, dependiendo del medio de almacenamiento externo utilizado. En síntesis tratándose de la ordenación externa, los aspectos del problema relativos al sistema son tan importantes como los aspectos algorítmicos  ambas áreas se deben considerar cuidadosamente si se quiere desarrollar una ordenación externa eficaz, el costo principal de una ordenación externa se debe a las de entrada-salida.

     La mayoría de los métodos de ordenación externa usan como estrategia hacer una pasada a lo largo del archivo a ordenar dividiendo a este en bloques del tamaño de la memoria interna  y ordenando estos bloques, luego los fusiona entre si creando sucesivamente archivos ordenados mas grandes hasta que el archivo completo este ordenado. El acceso a los datos es en su mayoría de forma secuencial, lo que hace apropiado este método para la mayor parte de los dispositivos externos.	




Métodos de Búsqueda


Búsqueda Secuencial: Es el método de búsqueda mas simple y consiste en almacenar todos los registros en un vector luego cuando se inserta un nuevo registro, se pone al final del vector cuando se lleva a cabo una búsqueda simplemente se recorre secuencialmente el vector



Ejemplo:

Si el elemento buscado es el 1 el método compara la primera posición  con el elemento buscado si coincide retorna el valor

5
8
6
1
9


Luego hace el mismo procedimiento con la segunda posición

5
8
6
1
9


Compara la 3 posición con el elemento buscado

5
8
6
1
9


en la cuarta posición coincide con el elemento buscado y termina la búsqueda

5
8
6
1
9


El algoritmo de este método es:


Este algoritmo casi no necesita explicación, la variable x es el elemento buscado

El ciclo for hace referencia al recorrido del método de 1 al n elemento

for(i=1;i<=n;i++)
  {
 si el valor de la posición del vector analizado es igual al valor buscado entonces retorna el valor
  if(a[i]==x)return i;
  }
si al recorrer las n posiciones no coincide ninguna con el valor buscado entonces retorna 0
 return 0;



Método de búsqueda binaria: Este método usa el paradigma de divide y vencerás y se utiliza cuando los datos en el vector son muchos, se divide el conjunto de registros en dos partes, se determina a cual de las dos partes debe pertenecer el valor buscado, y a continuación se repite el proceso en esa parte, este método necesita tener el vector ordenado para poder funcionar.



Ejemplo:



5
8
6
1
9
Izq                     r                        Der


Como el elemento es mayor entonces la variable izq toma una posición más que la variable de pivote

5
8
6
1
9
                         Izq         r            Der


Luego como el valor buscado es mayor que el valor del pivote entonces la variable izq toma una posición más que el valor del pivote



5
8
6
1
9
                                                  Izq ; der; r

Como la variable buscada es igual a la que apunta el pivote retorna el valor






El algoritmo de este método es:


Este ciclo while funcionara hasta que der que inicialmente es el tamaño del vector sea menor que izq que inicialmente es el primer elemento del vector.

  while (de r>= izq )
   {

      la variable r es el pivote que indica la posición a buscar     
    r = ( izq +der)/2;



si  x, el elemento buscado,  es igual a la posición que indica la variable pivote entonces retorna la posición
    
if(x==a[r]) return r;    

   
Si el elemento buscado es menor que la posición que apunta el pivote, entonces la variable der va a ser igual a una posición menor a la del pivote, en caso contrario izq va a ser una posición mas que la del pivote, con esto se logra dividir el vector en dos cada vez que se busca en el vector

 if (x<= a[r])
     {
      der = r - 1;
     }
   else
    {
     izq = r + 1;
    }

  }
si no se  encuentra el valor se retorna cero

return 0;


Método de búsqueda de Árbol Binario: La búsqueda  por árbol binario es un método simple y eficaz de búsqueda dinámica que esta calificado como uno de los algoritmos fundamentales de la informática, Este método encuentra  un valor buscado x, primero se compara este  con la raíz, si es igual., se detiene la búsqueda, si es mayor, se va al subárbol de la derecha, en el caso que sea menor se va al subárbol de la izquierda, este método se aplica recursivamente.


Ejemplo:

Este ejemplo muestra el método de búsqueda del árbol binario, buscando el número 22 en el árbol








Primero se analiza el nodo padre y se compara con el numero buscado, si es mayor se busca al nodo hijo de la derecha, si es menor se busca en el nodo hijo izquierdo, como el número buscado es mayor al nodo padre se va al nodo der.








Se compara nuevamente el nodo con el valor buscado, y como el 22 es mayor que el nodo 20 se pasa al nodo hijo derecho






Luego el nodo 23 es mayor al nodo buscado por tanto se revisa el nodo hijo izquierdo y como este coincide con el valor buscado entonces, termina la búsqueda 


El algoritmo de este método es:


{
este if consulta si el árbol esta vacío y si resulta verdadero retorna 0

if (vacioArbin(a))
  return 0;

este if compara el elemento analizado con el elemento buscado  y si son iguales retorna el elemento

 else if (a->info==x)
       {
          return a->info;
        }

estos instrucciones recursivas va recorriendo el árbol de la forma divide y vencerás

       else if(a->info > x)
       return arbolb(x, a->izq);
       else return arbolb(x, a->der);

 }



Árboles equilibrados:  El algoritmo de búsqueda de un árbol binario puede comportarse muy mal en archivos ya ordenados, para eliminar el peor caso en los árboles binarios de búsqueda, se necesitara alguna flexibilidad en la estructura de datos que se a utilizar

  
El algoritmo de este metodo es:
 
     int i,x;
    ABE ab(n);
    clrscr();
    for (i=1;i<=n; i++)
    ab.insertar (a[i], i);
    x=ab.buscar(v);
    ab.imprimir (NULL, 40, 5, 20);
    Return x;



Búsqueda Dispersión: Una técnica de búsqueda completamente diferente de las basadas en estructuras de arbole de comparación de los capítulos anteriores es la dispersión: un método que permite hacer directamente referencia a los registros de una tabla por medio de transformaciones aritméticas sobre las claves para obtener direcciones de la tabla.

    El primer paso en una búsqueda por dispersión consiste en evaluar una función de dispersión que transforma la clave de búsqueda en direcciones de la tabla. Idealmente, diferentes claves deben dar diferentes direcciones, pero ninguna función de dispersión es perfecta, y dos o más claves diferentes pueden dar la misma dirección de la tabla.

     La segunda parte de una búsqueda por dispersión es pues un proceso de resolución de colisiones, que permite tratar este tipo de claves. Uno de los métodos de resolución de colisiones que se estudiaran utiliza las listas enlazadas y es apropiado en situaciones muy dinámicas en las que el número de claves de búsqueda no se puede predecir.

Encadenamiento separado

Se puede utilizar los procedimientos de búsqueda e inserción en una lista, modificados de tal forma que se utilice la función de dispersión para escoger entre las listas reemplazando simplemente las referencias a cabeza por cabezas [dispersión (v)].

Por ejemplo, si las claves del ejemplo se insertan sucesivamente enana tabla inicialmente vacía utilizando la función de dispersión, resulta entonces el conjunto de listas que se muestra en el dibujo siguiente. Este método se denomina tradicionalmente encadenamiento separado porque los registros en colisión se encadenan juntos en listas enlazadas independientes. Las listas se pueden mantener ordenadas. Pro esto no es tan importante en esta aplicación como lo fue para la búsqueda secuencial elemental porque las listas so bastantes cortas. Evidentemente, el total de tiempo que se necesita para una búsqueda depende de la longitud de las listas y de la posición relativa de las claves entre ellas.



3
6
4
4
6
6
1            2           3           4            5          6


1
2
3
4
5
6


                   3        4                 6


                              4                6

                                                6     
                                           

El algoritmo de búsqueda de este método es:

int BD::buscar(int v)
{
     struct nodo *t;
     t=cabezas[dispersion(v)];
     z->clave=v;
     while(v>t->clave) t=t->siguiente;
     return t->info;
}
Búsqueda por Residuo: El método de búsqueda por residuo mas simple es el de búsqueda digital, el algoritmo es precisamente el mismo que el de búsqueda por árbol binario, excepto que el movimiento por las ramas del árbol no se hace de acuerdo con el resultado con una comparación entre elementos, sino  con los bits de los elementos, En el primer nivel se utiliza el primer bit, en el segundo nivel se utiliza el segundo bit y así hasta encontrar un nodo externo. El código es virtualmente el mismo que el de la búsqueda del árbol binario. La única diferencia es que las claves son del  tipo clavebits utilizando en la ordenación por residuos y se utiliza la función bits, para tener acceso a los bits individuales, en lugar de las comparaciones entre claves


Ejemplo de un árbol digital


1
0
0
1
2
0
1
0
3
0
1
1
4
1
0
0
5
1
0
1
                 
                             




La estructura de dato de este programa son las mismas que las que se utilizaron en los árboles binarios de búsqueda elementales. La constante maxb es el numero de bits de las claves que se van a ordenar. El programa supone que el primer bit de cada clave es 0, y así que la búsqueda comienza en cabeza, un enlace a un nodo de cabecera del árbol con clave 0. Que Posee un enlace izquierdo que apunta al árbol de búsqueda. Así el procedimiento de inicialización para este programa es el mismo que para un árbol binario de búsqueda, excepto que se empieza con cabeza-> izq = z en lugar de cabeza->der = z


El algoritmo de búsqueda de este método es:


  int max=elementomayor(n);
    clavebits t;
    while(!(t.bits(max, --b,1)));
    BR br(b);

    for(i=1; i<=n;i++)
        br.insertar(a[i], i);
    x=br.buscar(v);
    br.imprimir(NULL, 40, 5, 20);


Búsqueda externa

Al igual que en la ordenación externa, el aspecto sistema, unido a la utilización de materiales complejos de E/S, es un factor decisivo en el rendimiento de los métodos de búsqueda externa, pero no será posible estudiarlo con gran detalle. Sin embargo, a diferencia de la ordenación, donde los métodos externos son realmente muy diferentes de los internos, se vera que los métodos de búsqueda externa son prolongaciones lógicas de los métodos que se han estudiado para la búsqueda interna

Acceso secuencial indexado:

     La búsqueda secuencial en disco es la extensión natural de los métodos de búsqueda secuencial elementales, los registros se almacenada en orden creciente de sus claves y las búsquedas se efectúan simplemente leyendo los registros uno tras otro hasta encontrar uno que tenga una clave mayor o igual que la buscada. Por ejemplo, si las claves de búsqueda son E J E M P L O y se dispone de discos capaces de contener tres paginas de cuatro registros cada una, la búsqueda secuencial pura no es atractiva porque, por ejemplo, buscar P requeriría leer todas las páginas.

Árboles b:

     Una forma mejor de efectuar la búsqueda en situaciones dinámicas es utilizar árboles equilibrados. Con objeto de reducir el número de los accesos al disco, es razonable permitir un gran número de claves por nodo, lo que provoca que los nodos tengan un alto grado de ramificación. Tales árboles fueron denominados árboles b. Un árbol b de orden M construido a partir de N registros aleatorios contiene aproximadamente 1,44N/M nodos.

Dispersión extensible:

     Una alternativa a los árboles B, que prolonga los algoritmos de búsqueda digital para aplicarlos en la búsqueda externa, se desarrollo en 1978 por R. Fagin y R. Strong , Este método, denominado dispersión extensible, implica dos accesos al disco en cada búsqueda en aplicaciones típicas, mientras que al mismo tiempo permite una inserción eficaz. Al igual que en los árboles B, los registros se almacenada en paginas que, cuando se llenan, se dividen en dos partes; como en el acceso secuencial indexado, se mantiene una índice al que se accede para encontrar la pagina que contiene los registros que concuerdan con la clave de búsqueda. La dispersión extensible combina estas ideas mediante la utilización de las propiedades digitales de las claves de búsqueda



Análisis matemático del algoritmo Quicksort:

Este algoritmo es probablemente la técnica más rápida conocida. Fue desarrollada por C.A.R. Hoare en 1960. El algoritmo original es recursivo, pero se utilizan versiones iterativas para mejorar su rendimiento. El algoritmo fundamental es el siguiente: 
•	Eliges un elemento de la lista. Puede ser cualquiera (en Optimizado veremos una forma más efectiva). Lo llamaremos elemento de división. 
•	Buscas la posición que le corresponde en la lista ordenada (explicado más abajo). 
•	Acomodas los elementos de la lista a cada lado del elemento de división, de manera que a un lado queden todos los menores que él y al otro los mayores (explicado más abajo también). En este momento el elemento de división separa la lista en dos sublistas (de ahí su nombre). 
•	Realizas esto de forma recursiva para cada sublista mientras éstas tengan un largo mayor que 1. Una vez terminado este proceso todos los elementos estarán ordenados. 
Una idea preliminar para ubicar el elemento de división en su posición final sería contar la cantidad de elementos menores y colocarlo un lugar más arriba. Pero luego habría que mover todos estos elementos a la izquierda del elemento, para que se cumpla la condición y pueda aplicarse la recursividad. Reflexionando un poco más se obtiene un procedimiento mucho más efectivo. Se utilizan dos índices: i, al que llamaremos contador por la izquierda, y j, al que llamaremos contador por la derecha. El algoritmo es éste: 
•	Recorres la lista simultáneamente con i y j: por la izquierda con i (desde el primer elemento), y por la derecha con j (desde el último elemento). 
•	Cuando a[i] sea mayor que el elemento de división y a[j] sea menor los intercambias. 
•	Repites esto hasta que se crucen los índices. 
•	El punto en que se cruzan los índices es la posición adecuada para colocar el elemento de división, porque sabemos que a un lado los elementos son todos menores y al otro son todos mayores (o habrían sido intercambiados). 
Al finalizar este procedimiento el elemento de división queda en una posición en que todos los elementos a su izquierda son menores que él, y los que están a su derecha son mayores. 

Cálculo de la complejidad:

   Parte no recursiva es O(n)
   Llamadas recursivas: (depende de los valores de i, j)
   Si se parte por k (1k  n-1): 

    Quicksort (izq, i-1);     T(k)
    Quicksort (i+1, der);    T(n-k)
    

                                                        1                                        n = 1

  En un caso concreto: Tk(n) =   
                                                        n + Tk (k)+Tk (n-k)           n>1


Considerando todos los casos igualmente probables



                 1                                                       n=1
T (n) =
                  n+1/(n-1)  T(k)+T(n-k)                n>1



Mejor caso: 

 Pivote = mediana 
El  vector se parte por la mitad
T (n)=n + 2T(n/2)  O(n log(n))
La mayoría de casos tienen este comportamiento

Peor caso: O (n)
Cálculo de la complejidad
Ocurre cuando la lista ya está ordenada, porque cada llamada genera sólo una sublista (todos los elementos son menores que el elemento de división). En este caso el rendimiento se degrada a O(n2). T ordenada (desequilibrio, llamada recursiva con 1 y n-1 elementos)

t (n)=n + t(1) + t(n-1)  (n)

Caso medio:

La complejidad para dividir una lista de n es O(n). Cada sublista genera en promedio dos sublistas más de largo n/2. Por lo tanto la complejidad se define en forma recurrente como:
f (1) = 1 
f (n) = n + 2 f(n/2)



Ventajas: 
•	Muy rápido 
•	No requiere memoria adicional. 
Desventajas: 
•	Implementación un poco más complicada. 
•	Recursividad (utiliza muchos recursos). 
•	Mucha diferencia entre el peor y el mejor caso.



Análisis matemático del algoritmo de búsqueda secuencial


 Es unos de los métodos de búsqueda mas simple y consiste en almacenar todos los registros en un array. Cuando se inserta un nuevo registro, se pone al final del vector; cuando se lleva a cabo una búsqueda, se recorre secuencialmente el vector. 
    La búsqueda secuencial utiliza siempre N + 1 comparaciones para una búsqueda sin éxito y alrededor de N/2 comparaciones por termino medio para una búsqueda con éxito.
Para una búsqueda sin éxito, esta propiedad se deduce directamente del programa: se debe examinar cada registro para decidir si una clave en particular esta ausente. Para una búsqueda con éxito, si se supone que todos los registros tienen la misma probabilidad de ser el buscado, el numero medio de comparaciones es (1 + 2 + …..+ N)/N = (N + 1)/2 exactamente la mitad del coste de una búsqueda infructuosa


Análisis del algoritmo:


for(i =1;i< = n; i++)                         1
   {
   if(a[i]==x)return i;                      2,3
   }
 Return 0;                                         4


(1)              4 OE (incremento y asignación,1 comparaciones, un acceso al ciclo)
(2)              1 OE (condición)
(3)              1 OE  (si la condición se cumple)
(4)              1 OE  (si la condición no se cumple)



Caso mejor:

Encontramos el elemento en la primera posición.
Se realiza (*1*) y la primera condición de (*1*) 

T(n)=1+1.=2

Caso peor:

 El elemento no está en el vector.

 (2) la condición se repite n-1 veces                          1OE
 (1) incremento y asignación n-1veces                      2OE
 (1) el bucle se repite n-1 veces                                 2OE	
 (4) salida del bucle                                                   1OE	

	
T(n) = (i =1, n-1 (1+2+2))+1= 5n +1

 


Caso promedio:

El bucle se ejecutará un número de veces entre 0 y n-1 y vamos a suponer que cada una tiene la misma probabilidad de suceder. Existen n posibilidades (puede que el elemento no esté), luego cada una tendrá 1/n. El número medio de veces que se ejecutará el bucle es:






Premisa :         




n-1                 n-1          
i      i
i=0                 1=1
                                                    
                  n-1                                      n-1
                      i·(1/n)  =  1/n i = 1/n ((n2+n)/2 – n) = (n-1)/2
                  i=0                                       i=0

T(n)=((i=1,(n-1)/2  (1+2+2))+1)= 5n +1

                                                              for	






































Conclusión


     En este informe se han presentado una gran variedad de algoritmos de búsqueda y ordenación para distintos tipos de aplicaciones y soluciones, como los algoritmos de selección, inserción, Shell, residuo, etc., que se han aplican a un vector de enteros y colas de prioridad, árbol binario, etc., que se aplica a una estructura árbol.

     Se ha analizado con profundidad el método de ordenación Quicksort y  búsqueda secuencial, estudiando sus complejides y rendimientos.

     El algoritmo de ordenación Quicksort  O (nlogn)  tiene el mejor rendimiento pero es complicado de implementar sin embargo, es apropiado para cantidades grandes de datos.

     En el programa que viene adjunto con este informe se ha divido en un archivo con extensión CPP y 5 cabeceras header, la cual la cabecera método contiene todos los algoritmos expuestos en este informe, las cabeceras colaprioridad.h y arbolequilibrado.h,
 arbolbinario contiene las clases de estos algoritmos
























































































































































































