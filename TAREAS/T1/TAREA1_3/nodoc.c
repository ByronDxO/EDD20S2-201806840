#include "nodoc.h"

void setDerecha(NodoC* aux,NodoC* nuevo){
    aux->derecha=nuevo;
}
void setIzquierda(NodoC* aux,NodoC* nuevo){
    aux->izquierda=nuevo;
}
NodoC* newNodoC(int val){
    NodoC* nuevo= (NodoC*) malloc(sizeof(NodoC));
    nuevo->derecha=NULL;
    nuevo->izquierda=NULL;
    nuevo->val=val;
    return nuevo;
}
