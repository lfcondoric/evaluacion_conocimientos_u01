//Ejercicio 1
#include<iostream>

using namespace std;

int main(){
	
	float a,b,r;
	char op;
	
	cout<<"Ingrese un numero: ";cin>>a;
	cout<<"Ingrese otro numero: ";cin>>b;
	cout<<"Ingrese un operador: ";cin>>op;
	
	switch(op){
		case '+': r=a+b;
				cout<<"La suma es: "<<r<<endl;
				break;
		case '-': r=a-b;
				cout<<"La resta es: "<<r<<endl;
				break;
		case '*': r=a*b;
				cout<<"El producto es: "<<r<<endl;
				break;
		case '/': r=a/b;
				cout<<"El cociente es: "<<r<<endl;
				break;	
	}
	
	return 0;
}
