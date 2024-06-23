//Ejercicio 1
#include<iostream>

using namespace std;

int main(){
	
	float a,b;
	char op;
	
	cout<<"Ingrese un numero: ";cin>>a;
	cout<<"Ingrese otro numero: ";cin>>b;
	cout<<"Ingrese un operador: ";cin>>op;
	
	switch(op){
		case'+':cout<<"La suma es: "<<a+b<<endl;
				break;
		case'-':cout<<"La resta es: "<<a-b<<endl;
				break;
		case'*':cout<<"El producto es: "<<a*b<<endl;
				break;
		case'/':if(b!=0){
					cout<<"El cociente es: "<<a/b<<endl;
				}
				else
					cout<<"Indefinido\n";
				break;	
		default:cout<<"Operador incorrecto\n";
				break;
	}
	
	return 0;
}
