#include "listaenlazadasimple.h"

listaenlazadasimple::listaenlazadasimple()
{

    this->cabeza=NULL;
        this->fin=NULL;
        this->tamanio=0;
    }


    void listaenlazadasimple::insertarLista(string nombre, long carnet){
        estudiante *Estudiante = new estudiante(nombre, carnet);
        nodo *nuevoNodo = new nodo(Estudiante);
        if(this->cabeza==NULL){

            this->cabeza=nuevoNodo;
            this->fin=nuevoNodo;
        }else{

            this->fin->setSiguiente(nuevoNodo);
            this->fin=nuevoNodo;
        }
        this->tamanio++;

    }

    bool listaenlazadasimple::buscar(int carnet){
        nodo *temp = this->cabeza;
        while(temp != NULL){
            if(temp->getEstudiante()->getCarnet()==carnet){
                string nombre = temp->getEstudiante()->getNombre();
                long carnet = temp->getEstudiante()->getCarnet();
                cout<<"\nSe encontro el estudiante '"<<nombre<<"' con el carnet "<<carnet<<"\n"<<endl;
                return true;
            }else if(temp->getSiguiente()==NULL){
                cout<<"No se encontro el estudiante :(\n"<<endl;
            }
            temp=temp->getSiguiente();
        }
        return false;
    }

    void listaenlazadasimple::eliminar(int carnet){
        nodo *temp=this->cabeza;

        if(temp!=NULL){
            nodo *anterior = NULL;
            while((temp!=NULL) && (temp->getEstudiante()->getCarnet() != carnet)){
                anterior = temp;
                temp = anterior->getSiguiente();
            }


            if(temp == NULL){
                cout<<"No se encontro el estudiante a eliminar\n"<<endl;
            }else if(anterior == NULL){

                this->cabeza = cabeza->getSiguiente();
                delete temp;
                this->tamanio--;
                cout<<"Su estudiante ha sido eliminado de su lista :o\n"<<endl;
            }else{

                if(temp == (this->fin)){

                    cout<<"\nSe elimino el fin.";
                    this->fin = anterior;
                }
                anterior->setSiguiente(temp->getSiguiente());
                delete temp;
                this->tamanio--;
                cout<<"Su estudiante ha sido eliminado de su lista :o\n"<<endl;
            }

        }
    }

    void listaenlazadasimple::imprimirLista(){
        nodo *temp = this->cabeza;
        if(!this->listaVacia()){
            cout<<"El tamanio de su lista es: "<<this->tamanio<<endl;
            while(temp!=NULL){
                string nombre = temp->getEstudiante()->getNombre();
                long carnet = temp->getEstudiante()->getCarnet();
                cout<<"Estudiante: "<<nombre<<" , Carnet: "<<carnet<<endl;
                temp = temp->getSiguiente();
            }
        }else{
            cout<<"Su lista esta vacia! D:"<<endl;
        }
        cout<<"\n";
    }

    bool listaenlazadasimple::listaVacia(){
        return (this->cabeza == NULL)? true : false;
    }


    //TAREA_2=CLONAR_UNA_LISTA
    //CALCULO_DE_0(n)
    void listaenlazadasimple::clonarLista(listaenlazadasimple *listaVacia){
        nodo *aux = this->cabeza; //constante 1
        if(aux==NULL){  // constante 1
            cout<<"Lista vacia!"; //constante 1
            return;
        }
        while(aux!=NULL){ // bucle hasta n
            string nombreEstudiante = aux->getEstudiante()->getNombre();//constante 1
            long carnetEstudiante = aux->getEstudiante()->getCarnet(); // constante 1
            listaVacia->insertarLista(nombreEstudiante, carnetEstudiante); //constante
            aux = aux->getSiguiente();//constante 1
        }
        cout<<"\n\tSu lista ha sido clonada! :D\n";//constante 1
    }
