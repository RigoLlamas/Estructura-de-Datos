#include "Nodo.h"

Nodo::Nodo(Persona p)
{
	persona = p;
	der = NULL;
	izq = NULL;
	altura = 1;
}