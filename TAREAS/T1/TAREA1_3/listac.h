#pragma once
#include <stdlib.h>
#include <stdio.h>
#include "NodoC.h"
typedef struct ListaC
{
    NodoC* head;

}ListaC;

ListaC* nuevaLista();
void add(ListaC* l,NodoC* nuevo);
void imprimir(ListaC* l);
void generar(ListaC* l);
void eliminar(ListaC* lista, int pos);
void Liberar(ListaC* l);
void Buscar(ListaC* lista,int pos);
void guardarRecursivo(NodoC* aux,FILE *fp,char *c);
