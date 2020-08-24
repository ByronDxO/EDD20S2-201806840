#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string.h>

using namespace std;

class estudiante
{
public:
    estudiante(string, long); //Constructor
    estudiante();
    ~estudiante(); //Destructor
    string getNombre();
    long getCarnet();
    void setNombre(string);
    void setCarnet(long);

private:
    string nombre;
    long carnet;
};

#endif // ESTUDIANTE_H
