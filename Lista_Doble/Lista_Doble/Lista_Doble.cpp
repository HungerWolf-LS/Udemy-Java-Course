// Lista_Doble.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "string.h"
#include "iostream"

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Lista *lista = new Lista();
	lista->insertar("test 1");

	cout<<lista->getUltimo();
	return 0;
}

class Nodo{
private:
	string valor;
	Nodo *siguiente;
public:
	Nodo(string valor = "", Nodo *siguiente = NULL)
	{
		this->valor = valor;
		this->siguiente = siguiente;
	}

	void setValor(string valor)
	{
		this->valor = valor;
	}

	void setSiguiente(Nodo *siguiente)
	{
		this->siguiente = siguiente;
	}

	string getValor()
	{
		return this->valor;
	}

	Nodo *getSiguiente()
	{
		return this->siguiente;
	}
};

class Lista
{
private:
	Nodo *cabeza;

public:
	Lista()
	{
		this->cabeza = NULL;
	}

	void setCabeza(Nodo *nodo)
	{
		this->cabeza = nodo;
	}

	Nodo *getCabeza()
	{
		return this->cabeza;
	}

	Nodo *getUltimo()
	{
		Nodo *aux;
		aux = this->cabeza;
		if (aux)
		{
			while (aux->getSiguiente() != NULL)
			{
				aux = aux->getSiguiente();
			}
		}
		return aux;
	}

	Nodo *buscar(string valor)
	{
		Nodo *aux;
		aux = this->cabeza;
		while (aux)
		{
			if (aux->getValor() == valor)
				return (aux);
			aux = aux->getSiguiente();
		}
		return NULL;
	}

	void *insertar(string valor){
		Nodo *nodoNuevo, *aux;
		nodoNuevo = new Nodo(valor);
			aux = this->getUltimo();
			if (aux){
				aux->setSiguiente(nodoNuevo);
			}
			else{
				this->setCabeza(nodoNuevo);
			}
		return;
	}
};


