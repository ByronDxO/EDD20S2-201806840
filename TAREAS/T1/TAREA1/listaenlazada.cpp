#include "listaenlazada.h"

ListaEnlazada::ListaEnlazada()
{
this->first = NULL;
}

void ListaEnlazada::Insertar(Estudent* n){
    Nodo* q = new Nodo(n,first);
    Nodo* asd = first;
    asd->siguiente=q;
}
void ListaEnlazada::Buscar(long carnet){
    Nodo *temporal = this->first;
    while(temporal != NULL){
        if(temp ->){

        }
    }
}
