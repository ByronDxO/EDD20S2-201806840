#ifndef NODO_H
#define NODO_H
#include <estudiante.h>
#include <iostream>
#include <string.h>

class nodo
{
public:
    nodo(estudiante*);
    nodo();
    ~nodo();
    void setEstudiante(estudiante*);
    void setSiguiente(nodo*);
    estudiante* getEstudiante();
    nodo* getSiguiente();

private:
    estudiante* Estudiante; //dato
    nodo* siguiente; //puntero
};

#endif // NODO_H
