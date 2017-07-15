#include "ListaD.h"
#include "NodoD.h"
#include <iostream>


ListaD::ListaD(){
	first = NULL;
	act = NULL;
}
void ListaD::Insertar(int e){
	NodoD *nuevo = new NodoD(e,NULL,NULL);
	if (listaVacia()){
		first = nuevo;
	} else{
		act->sig = nuevo;
	}
	nuevo->ant = act;
	act = nuevo;
	
}
void ListaD::Mostrar(){
	cout<<"Null-->";
	NodoD *temp = first;
	while(temp){
		cout<<temp->val;
		if(temp==act){
			cout<<"-->";
		}else{
		cout<<"<-->";
		}
		temp = temp->sig;
	}
	cout<<"Null"<<endl;
}
bool ListaD::listaVacia(){
	return first == NULL;
}
void ListaD::Eliminar(int dat){
	NodoD *first1;
	NodoD *second1;
	NodoD *firstfirst;
	NodoD *first1C;
	NodoD *second1C;
	NodoD *firstfirstC;
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
			first ->ant = NULL;
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
			second1->sig = firstfirst;
			first1 = NULL;
			firstfirst ->ant = second1;
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