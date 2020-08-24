#include "listac.h"

void add(ListaC* l,NodoC* nuevo){
 if(l->head==NULL){
     l->head=nuevo;
 }else if(nuevo->val<=l->head->val){
     nuevo->derecha=l->head;
     l->head->izquierda=nuevo;
     l->head=nuevo;
 }else{
     NodoC* aux=l->head;
     while(aux->derecha!=NULL){
         if(aux->val>nuevo->val){
                 NodoC* ant=aux->izquierda;
                 ant->derecha=nuevo;
                 nuevo->izquierda=ant;
                 nuevo->derecha=aux;
                 aux->izquierda=nuevo;
                 return;
             }else if(nuevo->val<=aux->derecha->val){
                 NodoC *siguiente=aux->derecha;
                 aux->derecha=nuevo;
                 nuevo->derecha=aux;
                 nuevo->derecha=siguiente;
                 siguiente->izquierda=nuevo;
                 nuevo->izquierda=aux;
                 return;
             }
         aux=aux->derecha;
     }
     aux->derecha=nuevo;
     nuevo->izquierda=aux;
 }
}

void Liberar(ListaC* l){
 NodoA* aux=l->head;
 NodoA* tmp;
 while(aux!=NULL){
     tmp=aux->derecha;
     free(aux);
     aux=tmp;
 }
}

void imprimir(ListaC* l){
 NodoA* aux=l->head;
 while(aux!=NULL){
     printf("El valor es %i \n",aux->val);
     aux=aux->derecha;
 }
}
ListaC* nuevaLista(){
 ListaC* nueva=(ListaC*) malloc(sizeof(ListaC));
 nueva->head=NULL;
 return nueva;
}
void generar(ListaC* l){
 FILE * fp;
 fp=fopen("./cadigo.txt","w");
 if(fp==NULL){
     printf("Error");
     return;
 }
 char cad[1024];
 sprintf(cad,"digraph G{ \n node[shape=\"box\"];\n");
 fputs(cad,fp);
 NodoC* aux;
 aux=l->head;
 guardarRecursivo(aux,fp,cad);
 sprintf(cad,"}\n");
 fputs(cad,fp);
 fclose(fp);
}
void eliminar(ListaC* lista, int pos){
 ListaC* q = lista;
 int i = 1 , band =0;
 while(q->head!=NULL){
     if(q->head->val==pos){
         printf("se elimino el valor %i\n",pos);
         band = 1 ;
         break;
         while (lista->head!=NULL) {
             lista=lista->head->derecha;
             if(lista->head->val==pos){
                 lista->head==NULL;
                 printf("se elimino el valor %i\n",pos);
             }
         }
     }
     q=q->head->derecha;
     i++;

 }
 if(band==0){
     printf("numero no encontrado");
 }
}
void Buscar(ListaC* lista, int pos){
ListaC* q = lista;
int i = 1 , band =0;
while(q->head!=NULL){
 if(q->head->val==pos){
     printf("Valor= %i\n",pos);
     band = 1 ;
     break;

 }
 q=q->head->derecha;
 i++;

}
if(band==0){
 printf("numero no encontrado");
}
}
void guardarRecursivo(NodoC* aux,FILE* fp,char c[]){
 if(aux==NULL){
     return;
 }else{
     if(aux->derecha!=NULL){

         sprintf(c,"node%p[label=\"%i\",shape=""triangle""]\n",&(*aux),aux->val);
         fputs(c,fp);
         guardarRecursivo(aux->derecha,fp,c);
         sprintf(c,"node%p->node%p;\n node%p->node%p;\n",&(*aux),&(*aux->derecha),&(*aux->derecha),&(*aux));
         fputs(c,fp);
     }else{
         sprintf(c,"node%p[label=\"%i\"]\n",&(*aux),aux->val);
         fputs(c,fp);
     }
 }
}
