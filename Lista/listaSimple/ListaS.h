#ifndef LISTAS_H
#define LISTAS_H
#include "NodoS.h"
using namespace std;

class ListaS {
	private:
		NodoS *first;
		NodoS *act;
		bool listaVacia();
	public:
		ListaS();
		void Insertar(int e);
		void Mostrar();
		void Eliminar(int dat);
};
#endif //CLASS LISTAS
