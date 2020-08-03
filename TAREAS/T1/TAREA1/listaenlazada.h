#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include <iostream>
#include <nodo.h>
#include <estudent.h>
class ListaEnlazada
{
private:
    Nodo* first;

public:
    ListaEnlazada();
    void Insertar(Estudent*);
    bool Eliminar(long);
    void Buscar(long);
    bool Vacia();
};

#endif // LISTAENLAZADA_H
