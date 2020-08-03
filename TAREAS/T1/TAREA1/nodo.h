#ifndef NODO_H
#define NODO_H
#include <estudent.h>

class Nodo
{

public:
    Estudent *date;
    Nodo *siguiente;
    Nodo(Estudent*,Nodo*);
Nodo();
    Estudent buscar_Carnet();

};

#endif // NODO_H
