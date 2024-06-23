//Ejercicio 2
#include<iostream>

using namespace std;

int main(){
	
	int i=1,c=0,n1,n2;
	
	cout<<"Ingrese un numero: ";cin>>n1;
	cout<<"Ingrese otro numero: ";cin>>n2;
	
	while(i<=n1&&i<=n2){
		if(n1%i==0&&n2%i==0){
			c=c+1;
		}
		i=i+1;
	}
	if(c>1){
		cout<<"No son PESI\n";
	}
	else{
		cout<<"Son PESI\n";
	}
	return 0;
}
