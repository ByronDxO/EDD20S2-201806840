#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "ListaC.h"
#include "NodoC.h"
int main()
{
    NodoA* a=newNodoC(10);
    NodoA* b=newNodoC(3);
    NodoC* c=newNodoC(25);
    ListaC* l=nuevaLista();
    add(l,a);
    add(l,b);
    add(l,c);

    imprimir(l);
    generar(l);
    Liberar(l);
    free(l);

    Buscar(l,10);
   eliminar(l,10);
    return 0;
}

