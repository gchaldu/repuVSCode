#include <stdio.h>
#include <stdlib.h>
#include "D:\TSP\Programacion 2\Clases\Git\CEnVisualCode\pila.h"
#include "lib.h"

int main()
{
    printf("Hola mundo\n");
    printf("Hola mundo\n");
    Pila p;
    inicpila(&p);
    apilar(&p, 10);
    apilar(&p, 10);
    apilar(&p, 10);
    apilar(&p, 10);
    apilar(&p, 10);
    apilar(&p, 10);
    mostrar(&p);
    mensaje2();
    mensaje3();
    system("pause");

    return 0;
} 
   