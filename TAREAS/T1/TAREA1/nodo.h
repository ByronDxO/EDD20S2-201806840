#ifndef NODO_H
#define NODO_H
#include <estudent.h>

class Nodo
{
private:

    Estudent* date;
    Nodo* siguiente;
public:
    Nodo(Estudent,Nodo);
};

#endif // NODO_H
