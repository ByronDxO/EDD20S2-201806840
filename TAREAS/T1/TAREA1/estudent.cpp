#include "estudent.h"
#include <QString>
Estudent::Estudent(QString nombre, long carnet)
{

    this->nombre = nombre ;
    this ->carnet= carnet;

}

QString Estudent::get_nombre(){
    return nombre ;
}

long Estudent::get_carnet(){
    return carnet;
}
void Estudent::set_Estudent(QString nombre, long carnet){
    this->nombre = nombre ;
    this ->carnet= carnet;
}
