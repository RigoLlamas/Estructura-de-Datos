#pragma once
#include <iostream>
#include "Nodo.h"

class ArbolAVL
{
    Nodo* raiz;
    int TomarAltura(Nodo* nodo);
    int TomarBalance(Nodo* nodo);
    Nodo* MinimoNodo(Nodo* nodo);
    Nodo* RotacionDer(Nodo* y);
    Nodo* RotacionDerIzq(Nodo* nodo);
    Nodo* RotacionIzq(Nodo* x);
    Nodo* RotacionIzqDer(Nodo* nodo);
    Nodo* InsertarNodo(Nodo* nodo, Persona persona);
    Nodo* EliminarNodo(Nodo* nodo, int elimina);
    void EliminarArbol(Nodo* nodo);
    void MostarInt(Nodo* nodo);
    void MostarPre(Nodo* nodo);
    void MostarPos(Nodo* nodo); 
public:
    int cant = 0;
    void BuscarNodo(Nodo* nodo, int buscar, char R);
    int CalcularAltura(Nodo* nodo, int buscar);
    ArbolAVL()
    {
        raiz = NULL;
    }
    void Insertar(Persona persona);
    void Eliminar(char R);
    void Mostar(char R);
    int Contar();
};