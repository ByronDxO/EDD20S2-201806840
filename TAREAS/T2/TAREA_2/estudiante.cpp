#include "estudiante.h"
estudiante::estudiante(string nombre, long carnet)
{
    this->carnet=carnet;
    this->nombre=nombre;
}

estudiante::estudiante(){}

estudiante::~estudiante(){
    cout<<"Estudiante Eliminado";
}

long estudiante::getCarnet(){
    return carnet;
}

string estudiante::getNombre(){
    return nombre;
}

void estudiante::setCarnet(long carnet){
    this->carnet=carnet;
}

void estudiante::setNombre(string nombre){
    this->nombre=nombre;
}
