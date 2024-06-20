#include <iostream>
#pragma once
#include "ArbolAVL.h"
#include "Nodo.h"

using namespace std;

	int main()
	{
		Persona persona;
		Nodo* nodo = NULL;
		ArbolAVL AVL;
		char R = NULL;
		while (R != 'S') 
		{
			cout << "\nQue quieres hacer?\n[A] Insertar valor\n[B] Eliminar uno\n[C] Eliminar todo\n[D]Mostrar Int-Orden\n[E]Mostrar Pre-Orden\n[F]Mostrar Pos-Orden\n[G]Contar\n[H]Calcular altura\n[I]Buscar nodo\n[S] Salir\n" << endl;
			cin >> R;
			switch (R) 
			{
			case 'A':				//Insertar
			{
				AVL.Insertar(persona);
				cout << "\nDatos insertados correctamente.\n" << endl;
			}
				break;
			case 'B':				//Eliminar uno
			{
				AVL.Eliminar(R);
			}
				break;
			case 'C':				//Eliminar todo
			{
				AVL.Eliminar(R);
			}
				break;
			case 'D':				//Mostrar intorden
				cout << "Recorrido Int-Orden del Arbol AVL: \n";
				AVL.Mostar(R);
				break;
			case 'E':				//Mostrar preorden
			{
				cout << "Recorrido Pre-Orden del Arbol AVL: \n";
				AVL.Mostar(R); 
			}
				break;
			case 'F':				//Mostrar posorden
			{
				cout << "Recorrido Pro-Orden del Arbol AVL: \n";
				AVL.Mostar(R);
			}
				break;
			case 'G':				//Contar
			{
				cout << "\nEl arbol cuenta con: " << AVL.Contar() << " nodos" << endl;
			}
			break;
			case 'H':				//Calcular altura
			{
				cout << "\nLa altura del arbol es de: " << AVL.CalcularAltura(nodo, NULL) << endl;
			}
			break; 
			case 'I':				//Buscar elemento
			{
				AVL.BuscarNodo(nodo, NULL, R);
			}
				break;
			case 'S':
			{
				cout << "\nQue tenga buen dia" << endl;
			}
			break;
			default:
			{
				cout << "\nCreo que no se puede joven (-_-) \n" << endl;
			}
			break;
			}
		}
		return 0;
	}