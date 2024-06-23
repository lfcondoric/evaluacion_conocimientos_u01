//Ejercicio 2
#include<iostream>

using namespace std;

int pesi(int a, int b);

int main(){
	
	int c,n1,n2;
	
	cout<<"Ingrese un numero: ";cin>>n1;
	cout<<"Ingrese otro numero: ";cin>>n2;
	
	c=pesi(n1,n2);

	if(c>1){
		cout<<"No son PESI\n";
	}
	else{
		cout<<"Son PESI\n";
	}
	return 0;
}

int pesi(int a, int b){
	int c=0,i=1;
	while(i<=a&&i<=b){
		if(a%i==0&&b%i==0){
			c=c+1;
		}
		i=i+1;
	}
	return (c);
}
