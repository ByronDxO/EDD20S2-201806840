#include "nodo.h"

Nodo::Nodo(Estudent* date, Nodo* siguiente)
{
this ->date = date;
this -> siguiente = siguiente;
}
Nodo::Nodo(){}
Estudent Nodo::buscar_Carnet(){
    return *date;
}
