#include "nodo.h"

nodo::nodo(estudiante *Estudiante)
{
    this->Estudiante = Estudiante;
        this->siguiente = NULL;
    }

    nodo::nodo(){
    }

    nodo::~nodo(){
        cout<<"\nNodo se destruyo - ";
    }

    nodo* nodo::getSiguiente(){
        return this->siguiente;
    }

    void nodo::setSiguiente(nodo *nuevoNodo){
        this->siguiente=nuevoNodo;
    }

    estudiante* nodo::getEstudiante(){
        return this->estudiante;
    }

    void nodo::setEstudiante(estudiante* estudiante){
        this->estudiante=estudiante;
    }
