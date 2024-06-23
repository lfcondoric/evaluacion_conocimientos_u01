//Ejercicio 3
#include<iostream>

using namespace std;

float suma(int a);
int factorial(int e);

int main(){
	
	int n;
	float su=0;
	
	cout<<"Ingrese un numero: ";cin>>n;
 	
 	su=suma(n);
 	
 	cout<<su<<endl;

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
