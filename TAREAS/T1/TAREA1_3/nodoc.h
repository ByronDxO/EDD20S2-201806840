#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct NodoC
{
    struct NodoC* izquierda;
    struct NodoC* derecha;
    int val;
}NodoC,NodoA;

NodoC* newNodoC(int val);
void setIzquierda(NodoC* aux,NodoC* nuevo);
void setDerecha(NodoC* aux,NodoC* nuevo);

