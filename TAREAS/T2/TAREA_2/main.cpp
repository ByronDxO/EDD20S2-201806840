#include <QCoreApplication>
#include <listaenlazadasimple.h>
#include <nodo.h>
#include <estudiante.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void menu();

int main(int argc, char *argv[])
{
    listaenlazadasimple *Listaenlazadasimple = new listaenlazadasimple();
    listaenlazadasimple *listacopia = new listaenlazadasimple();

    Listaenlazadasimple->insertarLista("Rodrigo", 19);
       Listaenlazadasimple->insertarLista("Rodrigo2", 15);
       Listaenlazadasimple->insertarLista("Bryan 1", 30);
       Listaenlazadasimple->insertarLista("Bryan2", 23);
       Listaenlazadasimple->imprimirLista();

       Listaenlazadasimple->clonarLista(listacopia);
       listacopia->imprimirLista();


       printf("segunda iteracion de impresion con el dato eliminado");
       Listaenlazadasimple->eliminar(19);
       Listaenlazadasimple->imprimirLista();


           listacopia->imprimirLista();


    QCoreApplication a(argc, argv);

    return a.exec();
}
