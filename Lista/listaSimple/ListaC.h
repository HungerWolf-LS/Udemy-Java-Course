#ifndef LISTAC_H
#define LISTAC_H
#include "NodoC.h"
using namespace std;

class ListaC {
	private:
		NodoC *first;
		NodoC *last;
		bool listaVacia();
	public:
		ListaC();
		void Insertar(int e);
		void Mostrar();
		void Eliminar(int dat);
};
#endif //CLASS LISTAC