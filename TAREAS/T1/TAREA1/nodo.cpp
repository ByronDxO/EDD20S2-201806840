#include "nodo.h"

Nodo::Nodo(Estudent* date)
{
this ->date = date;
this ->siguiente=NULL;
}
Nodo::Nodo(){}
Estudent Nodo::buscar_Carnet(){
    return *date;


}
