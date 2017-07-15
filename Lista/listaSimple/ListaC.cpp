#include "ListaC.h"
#include "NodoC.h"
#include <iostream>

ListaC::ListaC(){
	first = NULL;
	last = NULL;
}

void ListaC::Insertar(int e){
	NodoC *nuevo = new NodoC(e,NULL);
	if (listaVacia()){
		first = nuevo;
	} else{
		last->sig = nuevo;
	}
	last = nuevo;
	last ->sig = first;
	
}

void ListaC::Mostrar(){
	
	NodoC *temp = first;
	do{
		if(temp == first){
			cout<<"*";
		}
		cout<<temp->val<<"-->";
		if(temp == last){
		cout<<"*";
		}
		temp = temp->sig;
	}while(temp!=first);
	
}

bool ListaC::listaVacia(){
	return first == NULL;
}

void ListaC::Eliminar(int dat){
	NodoC *first1;
	NodoC *second1;
	NodoC *firstfirst;
	NodoC *first1C;
	NodoC *second1C;
	NodoC *firstfirstC;
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
			last->sig = first;
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
			if(firstfirst==first){
			second1->sig = NULL;
			last = second1;
			last ->sig = firstfirst;
			first1 = NULL;
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