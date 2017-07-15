#include "NodoD.h"
#include <iostream>

NodoD::NodoD(int v, NodoD *s, NodoD *a){
	val = v;
	sig = s;
	ant = a;
}