#ifndef NODOD_H
#define NODOD_H
#include <iostream>

using namespace std;

class NodoD {
	private:
		
	public:
		int val;
		NodoD *sig;
		NodoD *ant;
		NodoD(int v, NodoD *s, NodoD *a);
};
#endif //CLASS NODOD