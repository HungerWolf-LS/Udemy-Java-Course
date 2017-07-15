#ifndef NODOS_H
#define NODOS_H
#include <iostream>

using namespace std;

class NodoS {
	private:
		
	public:
		int val;
		NodoS *sig;
		NodoS(int v, NodoS *s);
};
#endif //CLASS NODO
