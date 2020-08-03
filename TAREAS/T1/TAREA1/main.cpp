#include <QCoreApplication>
#include<listaenlazada.h>
#include<iostream>
#include<String>
#include<QString>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
printf("Bienvenido al Programa de Lista enlazada del carnet:201806840");
int contador =0;
string name ;
long carnet;
QString asd;
ListaEnlazada list ;

do{
    printf(" \n opcion 1 insertar estudiante  \n opcion 2 buscar estudiante \n opcion 3 eliminar estudiante \n presione 9 para salir");
    cin>>contador;

 if(contador==1){

     printf(" \n ingrese el nombre \n");
     cin>>name;
     printf(" \n ingrese el carnet (solo numeros por favor) \n ");
     cin>>carnet;

     std::string str=name ;
      QString qs = QString::fromLocal8Bit(str.c_str());
     Estudent* est = new Estudent( asd,carnet);
     list.Insertar(est);
    }else if(contador==2){
     printf("ingrese el carnet");
     cin>>carnet;
     list.Buscar(carnet);


 }else if(contador==3){

     printf("ingrese el carnet");
     cin>>carnet;
     list.Eliminar(carnet);
 }else {
     contador=9;
     printf("Adios");
 }




}while (contador!=9);

}
