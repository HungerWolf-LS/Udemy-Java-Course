#include "ListaS.h"
#include "NodoS.h"
#include "NodoD.h"
#include "ListaD.h"
#include "ListaC.h"
#include "NodoC.h"
#include <iostream>

using namespace std;
int main () {
	char op;
	char salir = 'n';
	int el;
	char op1;
	char opEl;
	ListaS l;
	ListaD lD;
	ListaC lC;
	do{
		op=0;
		cout<<endl<<"Escoja lista a usar:"<<endl;
		cout<<endl<<"1-) Lista Simple"<<endl;
		cout<<endl<<"2-) Lista Doble"<<endl;
		cout<<endl<<"3-) Lista Circular"<<endl;
		cout<<endl<<"4-) Salir del programa"<<endl<<endl;
		cin>>op;
		
		switch(op){
		case '1':
			salir = 'n';
			while (salir == 'n' || salir == 'N'){
				op1='s' ;
				opEl = 's';
			while(op1 == 's' || op1 == 'S'){
				cout<<endl<<"Desea agregar un elemento a la lista? SI = S, NO = N"<<endl;
				cin>>op1;
				if(op1== 'S' || op1 == 's'){
					cout<<endl<<"Ingrese el elemento:";
					cin>>el;
					l.Insertar(el);
				}
			}

			cout<<endl<<"Esta es la lista: "<<endl;
			l.Mostrar();
			while(opEl == 's' || opEl == 'S'){
				cout<<endl<<"Desea eliminar un elemento de la lista? SI = S, NO = N"<<endl;
				cin>>opEl;
				if(opEl== 'S' || opEl == 's'){
					cout<<endl<<"Elimine el elemento:";
					cin>>el;
					l.Eliminar(el);
				}
			}
			cout<<endl<<"Esta es la lista: "<<endl;
			l.Mostrar();
			cout<<endl<<"Desea salir al menu principal? SI = S, NO = N"<<endl;
			cin>>salir;
			if(salir=='s' || salir == 'S'){
				break;
			}
			}
			break;
		case '2':
			salir = 'n';
			while (salir == 'n' || salir == 'N'){
				op1='s' ;
				opEl = 's';
			while(op1 == 's' || op1 == 'S'){
				cout<<endl<<"Desea agregar un elemento a la lista? SI = S, NO = N"<<endl;
				cin>>op1;
				if(op1== 'S' || op1 == 's'){
					cout<<endl<<"Ingrese el elemento:";
					cin>>el;
					lD.Insertar(el);
				}
			}

			cout<<endl<<"Esta es la lista: "<<endl;
			lD.Mostrar();
			while(opEl == 's' || opEl == 'S'){
				cout<<endl<<"Desea eliminar un elemento de la lista? SI = S, NO = N"<<endl;
				cin>>opEl;
				if(opEl== 'S' || opEl == 's'){
					cout<<endl<<"Elimine el elemento:";
					cin>>el;
					lD.Eliminar(el);
				}
			}
			cout<<endl<<"Esta es la lista: "<<endl;
			lD.Mostrar();
			cout<<endl<<"Desea salir al menu principal? SI = S, NO = N"<<endl;
			cin>>salir;
			if(salir=='s' || salir == 'S'){
				break;
			}
			}
			break;
		case '3':
			salir = 'n';
			while (salir == 'n' || salir == 'N'){
				op1='s' ;
				opEl = 's';
			while(op1 == 's' || op1 == 'S'){
				cout<<endl<<"Desea agregar un elemento a la lista? SI = S, NO = N"<<endl;
				cin>>op1;
				if(op1== 'S' || op1 == 's'){
					cout<<endl<<"Ingrese el elemento:";
					cin>>el;
					lC.Insertar(el);
				}
			}

			cout<<endl<<"Esta es la lista: "<<endl;
			lC.Mostrar();
			while(opEl == 's' || opEl == 'S'){
				cout<<endl<<"Desea eliminar un elemento de la lista? SI = S, NO = N"<<endl;
				cin>>opEl;
				if(opEl== 'S' || opEl == 's'){
					cout<<endl<<"Elimine el elemento:";
					cin>>el;
					lC.Eliminar(el);
				}
			}
			cout<<endl<<"Esta es la lista: "<<endl;
			lC.Mostrar();
			cout<<endl<<"Desea salir al menu principal? SI = S, NO = N"<<endl;
			cin>>salir;
			if(salir=='s' || salir == 'S'){
				break;
			}
			}
			break;
		case '4':
			exit(EXIT_SUCCESS);
			break;
		default:
			cout<<endl<<"ERROR: Escoja una opcion entre el 1 y 4!"<<endl;
			break;
		}
	}while(op!=4);
	/*int el;
	Lista l;
	char op;
	char opEl;
	char salir = 'n';
	while (salir == 'n' || salir == 'N'){
		op='s' ;
		opEl = 's';
	while(op == 's' || op == 'S'){
		cout<<endl<<"Desea agregar un elemento a la lista? SI = S, NO = N"<<endl;
		cin>>op;
		if(op== 'S' || op == 's'){
			cout<<endl<<"Ingrese el elemento:";
			cin>>el;
			l.Insertar(el);
		}
	}

	cout<<endl<<"Esta es la lista: "<<endl;
	l.Mostrar();
	while(opEl == 's' || opEl == 'S'){
		cout<<endl<<"Desea eliminar un elemento de la lista? SI = S, NO = N"<<endl;
		cin>>opEl;
		if(opEl== 'S' || opEl == 's'){
			cout<<endl<<"Elimine el elemento:";
			cin>>el;
			l.Eliminar(el);
		}
	}
	cout<<endl<<"Esta es la lista: "<<endl;
	l.Mostrar();
	cout<<endl<<"Desea salir del programa? SI = S, NO = N"<<endl;
	cin>>salir;
	if(salir=='s' || salir == 'S'){
		exit(EXIT_SUCCESS);
	}
	}*/


	/*int el;
	ListaD l;
	char op;
	char opEl;
	char salir = 'n';
	while (salir == 'n' || salir == 'N'){
		op='s' ;
		opEl = 's';
	while(op == 's' || op == 'S'){
		cout<<endl<<"Desea agregar un elemento a la lista? SI = S, NO = N"<<endl;
		cin>>op;
		if(op== 'S' || op == 's'){
			cout<<endl<<"Ingrese el elemento:";
			cin>>el;
			l.Insertar(el);
		}
	}

	cout<<endl<<"Esta es la lista: "<<endl;
	l.Mostrar();
	while(opEl == 's' || opEl == 'S'){
		cout<<endl<<"Desea eliminar un elemento de la lista? SI = S, NO = N"<<endl;
		cin>>opEl;
		if(opEl== 'S' || opEl == 's'){
			cout<<endl<<"Elimine el elemento:";
			cin>>el;
			l.Eliminar(el);
		}
		
	}
	cout<<endl<<"Esta es la lista: "<<endl;
	l.Mostrar();
	cout<<endl<<"Desea salir del programa? SI = S, NO = N"<<endl;
	cin>>salir;
	if(salir=='s' || salir == 'S'){
		exit(EXIT_SUCCESS);
	}
	}*/


	/*int el;
	ListaC l;
	char op;
	char opEl;
	char salir = 'n';
	while (salir == 'n' || salir == 'N'){
		op='s' ;
		opEl = 's';
	while(op == 's' || op == 'S'){
		cout<<endl<<"Desea agregar un elemento a la lista? SI = S, NO = N"<<endl;
		cin>>op;
		if(op== 'S' || op == 's'){
			cout<<endl<<"Ingrese el elemento:";
			cin>>el;
			l.Insertar(el);
		}
	}

	cout<<endl<<"Esta es la lista: "<<endl;
	l.Mostrar();
	while(opEl == 's' || opEl == 'S'){
		cout<<endl<<"Desea eliminar un elemento de la lista? SI = S, NO = N"<<endl;
		cin>>opEl;
		if(opEl== 'S' || opEl == 's'){
			cout<<endl<<"Elimine el elemento:";
			cin>>el;
			l.Eliminar(el);
		}
	}
	cout<<endl<<"Esta es la lista: "<<endl;
	l.Mostrar();
	cout<<endl<<"Desea salir del programa? SI = S, NO = N"<<endl;
	cin>>salir;
	if(salir=='s' || salir == 'S'){
		exit(EXIT_SUCCESS);
	}
	}*/
system("pause");
return (0);
}