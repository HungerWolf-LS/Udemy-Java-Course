#include "ListaS.h"
#include "NodoS.h"
#include <iostream>


ListaS::ListaS(){
	first = NULL;
	act = NULL;
}
void ListaS::Insertar(int e){
	NodoS *nuevo = new NodoS(e,NULL);
	if (listaVacia()){
		first = nuevo;
	} else{
		act->sig = nuevo;
	}
	act = nuevo;
}
void ListaS::Mostrar(){
	NodoS *temp = first;
	while(temp){
		cout<<temp->val<<"-->";
		temp = temp->sig;
	}
	cout<<"Null"<<endl;
}
bool ListaS::listaVacia(){
	return first == NULL;
}
void ListaS::Eliminar(int dat){
	NodoS *first1;
	NodoS *second1;
	NodoS *firstfirst;
	NodoS *first1C;
	NodoS *second1C;
	NodoS *firstfirstC;
	int c=0,d=0;
	first1 = first;
	second1 = first;
	firstfirst = first ->sig;
	first1C = first;
	second1C = first;
	firstfirstC = first ->sig;
	while(c==0 && d==0){
	if(first1->val==dat){
			first = firstfirst;
			first ->sig = firstfirst ->sig;
			second1 = NULL;
			d=1;
	}else{
		c=1;
	}
	}
	if(c==1){
		second1 = first1C;
		first1 = second1C->sig;
		firstfirst = first1->sig;
	while(first1){
		if(first1->val==dat){
			if(firstfirst==NULL){
			second1->sig = NULL;
			first1 = NULL;
			act = second1;
			c=1;
			}else{
			second1->sig = first1->sig;
			first1 = NULL;
			c=1;
			}
		}else {
			firstfirst = firstfirst ->sig;
			first1 = first1->sig;
			second1= second1->sig;
				}
			}
	
	}
}