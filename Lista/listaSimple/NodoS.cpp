#include "NodoS.h"
#include <iostream>

NodoS::NodoS(int v, NodoS *s){
	val = v;
	sig = s;
}