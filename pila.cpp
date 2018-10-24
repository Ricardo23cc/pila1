#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct nodo{
	int dato;
	nodo *next;
	
};
 void agragarpila(nodo *&,int);
int main(){
	nodo *pila=NULL;
	int n1,n2;
	
	cout<<"dime un numero";
	cin>>n1;
	agregarpila(pila,n1);
	cout<<"dime un numero";
	cin>>n2;
	agregarpila(pila,n2);
	getch ();
	return 0;
}
void agregarpila(nodo *&pila,int n){
	nodo *nuevo_nodo = new nodo ();
	nuevo_nodo->dato = n
	nuevo_nodo->next = pila;
	pila=nuevo_nodo
		cout<<"\nEl elemento"<<n<<"agregar ah pila chingon"<<endl;
}
