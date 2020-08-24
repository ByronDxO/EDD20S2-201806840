#ifndef LISTAENLAZADASIMPLE_H
#define LISTAENLAZADASIMPLE_H
#include <iostream>
#include <string.h>
#include <nodo.h>

class listaenlazadasimple
{
public:
    //TAREA 1
    listaenlazadasimple();
    ~listaenlazadasimple();

    void setCabeza(nodo);
    void setFin(nodo);
    void setTamanio(int);
    nodo getCabeza();
    nodo getFin();
    int getTamanio();

    //TAREA 1
    void insertarLista(string nombre, long carnet);
    bool buscar(int); //int identificador
    void eliminar(int); //int identificador


    //TAREA 2: Clonar lista ya creada
    void clonarLista(listaenlazadasimple *listaVacia);

    void imprimirLista();
    bool listaVacia();

private:
    nodo* cabeza;
    nodo* fin;
    int tamanio;
};

#endif // LISTAENLAZADASIMPLE_H
