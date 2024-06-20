#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Persona 
{
	char nombre[50];
	char apellido[50];
	int edad = NULL;
	int registro = NULL;
};
class Nodo
{
public:
	Persona persona;
	Nodo* next;
	Nodo* prev;
	Nodo():next(NULL), prev(NULL) {};
};

