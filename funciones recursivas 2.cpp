// ejemplos de clase 2 
// funciones recursivas -- funcion que determine la potencia de un numero n, recursivamente

#include <iostream>
#include <math.h>
using namespace std;

long long int funcion_potencia (int a, int n);
int n, a;
int main (){
	 
	 cout<<"ingrese la base: ";cin>>a;
	cout<<"ingrese la potencia: ";cin>>n;
	
	cout<<"el valor es: "<<funcion_potencia (a,n);
	
	return 0;
}
long long int funcion_potencia (int a, int n){
	if (n<=1)
		return (a);
	else
		return (a*funcion_potencia(a,n-1));
}
