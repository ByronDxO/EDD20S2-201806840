#include "listaenlazada.h"
# include <QString>
using namespace std;
ListaEnlazada::ListaEnlazada()
{
this->first = NULL;
}

void ListaEnlazada::Insertar(Estudent* n){
   if(first!=NULL){
       Nodo* q = new Nodo(n);
       Nodo* asd = first;
       asd->siguiente=q;
   }else {
       Nodo* q = new Nodo(n);
      first =q ;
   }
}
void ListaEnlazada::Buscar(long carnet){
    Nodo *temporal = this->first;
    while(temporal != NULL){
        if(temporal -> buscar_Carnet().get_carnet()== carnet){
QString nombre = temporal ->buscar_Carnet().get_nombre();
long carnet = temporal->buscar_Carnet().get_carnet();
cout<<"Estudiante"<<&nombre<<"\n carnet:"<<carnet;

        }else {
            cout<<"No se encontro al estudiante";

        }
        temporal=temporal->siguiente;
    }
}
bool ListaEnlazada::Eliminar(long carnet){
    int cont2 = 0;
    int cont = 0 ;
    Nodo *temporal = this->first;
    while(temporal != NULL){
        cont++;
        if(temporal -> buscar_Carnet().get_carnet()== carnet){

while(temporal->siguiente != NULL){
    temporal= temporal->siguiente;



}
temporal=NULL;
cout<<"Se ah eliminado el nodo con el carnet"<<carnet;




        }else {
            cout<<"No se pudo eliminar debido a que no se encontro la informacion del estudiante";

        }
        temporal=temporal->siguiente;
    }
}
