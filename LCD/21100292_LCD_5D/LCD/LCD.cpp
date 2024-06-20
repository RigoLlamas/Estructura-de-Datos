#include <iostream>
#pragma once
#include "ListaCircularDoble.h"
#include "Nodo.h"

using namespace std;

int main()
{
	string respuesta;
	char R = NULL;
	int dato = NULL;
	ListaCircularDoble lis;
	Persona persona;
	while (R != 'S')
	{
		cout << "¿Que deceas hacer?" << endl;
		cout << "\n[ A ]\tAgregar datos\n[ B ]\tBuscar\n[ C ]\tEliminar\n[ D ]\tModificar\n[ E ]\tContar nodos\n[ F ]\tMostrar todo\n[ G ]\tIterador\n[ S ]\tSalir" << endl;
		cin >> R;
		switch (R)
		{
		case('A'):	//Agregar
		{
			lis.Agregar(persona);
			break;
		}
		case('B'):	//Buscar
		{

			cout << lis.Buscar(persona) << endl;
			break;
		}
		case('C'):	//Eliminar
		{
			respuesta = lis.Eliminar(persona);
			cout << respuesta << endl;
			break;
		}
		case('D'):	//Modificar
		{

			lis.Modificar(persona);
			break;
		}
		case('E'):	//Contar nodos
		{
			int Cantidad = NULL;
			Cantidad = lis.Contar();
			cout << "La cantidad de Nodos actuales son:" << Cantidad << endl;
			break;
		}
		case('F'):	//Mostar todo
		{
			respuesta = lis.Mostrar();
			cout << respuesta << endl;
			break;
		}
		case('G'):	//Iterador
		{
			lis.Iterador();
			break;
		}
		default:
			break;
		}
	};
}
