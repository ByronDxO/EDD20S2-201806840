#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include <nodo.h>
#include <estudent.h>
class ListaEnlazada
{
private:
    Nodo* first;

public:
    ListaEnlazada();
    void Insertar(Estudent*);
    void Eliminar(long);
    void Buscar(long);
    bool Vacia();
};

#endif // LISTAENLAZADA_H
