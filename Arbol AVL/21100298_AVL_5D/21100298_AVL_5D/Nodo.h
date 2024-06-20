#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Persona
{
	char nombre[50];
	char fecha[12];			//DD/MM/AAAA
	int registro = NULL;
};
class Nodo
{
public:
	Persona persona;
	Nodo* der;
	Nodo* izq;
	int altura;
	Nodo(Persona persona);
};