#ifndef LISTAD_H
#define LISTAD_H
#include "NodoD.h"
using namespace std;

class ListaD {
	private:
		NodoD *first;
		NodoD *act;
		bool listaVacia();
	public:
		ListaD();
		void Insertar(int e);
		void Mostrar();
		void Eliminar(int dat);
};
#endif //CLASS LISTAD