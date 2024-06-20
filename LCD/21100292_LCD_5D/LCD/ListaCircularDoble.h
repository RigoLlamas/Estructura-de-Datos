#pragma once
#include <iostream>
#include "Nodo.h"

class ListaCircularDoble
{
	Nodo* iterador;
	Nodo* inicio;
	Nodo* ultimo;
public:
	char R;
	string resultado = "";
	void Agregar(Persona persona);
	string Eliminar(Persona persona);
	string Buscar(Persona persona);
	void Modificar(Persona persona);
	int Contar();
	string Mostrar();
	void Iterador();
	ListaCircularDoble() 
	{
		inicio = NULL;
		iterador = NULL;
		ultimo = NULL;
	}
};

