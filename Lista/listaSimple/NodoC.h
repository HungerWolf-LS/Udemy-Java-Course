#ifndef NODOC_H
#define NODOC_H
#include <iostream>

using namespace std;

class NodoC {
	private:
		
	public:
		int val;
		NodoC *sig;
		NodoC(int v, NodoC *s);
};
#endif //CLASS NODOC