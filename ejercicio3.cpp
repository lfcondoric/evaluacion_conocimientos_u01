//Ejercicio 3
#include<iostream>
#include<windows.h>

using namespace std;

float suma(int a);
int factorial(int e);

int main(){
	
	int n,a=1;
	float su=0;
	
	cout<<"Ingrese un numero: ";cin>>n;
 	
 	su=suma(n);
 	
 	cout<<"Calculando";
 	while(a<=3){
			cout<<".";
			a++;
			Sleep(1000);
	}
	cout<<endl;
	
 	cout<<"La suma es: "<<su<<endl;

	return 0;
}

float suma(int a){
	float s=0,f=1;
	for(int i=1;i<=a;i++){
		f=factorial(i);
		s=s+(f/(2*i));
	}
	return(s);
}

int factorial(int e){
	int f=1;
	for(int i=1;i<=e;i++){
		f=f*i;
	}
	return(f);
}
