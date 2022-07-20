// ejemplos de clase 
// funciones recursivas -- funcion que sume la serie 1+2+3+4...n

#include <iostream>
using namespace std;

int funcion_suma (int n);
int n;
int main (){
	 
	 cout<<"ingrese el numero de grado de la suma de la serie: ";cin>>n;
	cout<<"\n,la respuesta es: "<<funcion_suma (n);
	return 0;
}
int funcion_suma (int n){
	if (n<0)
		return 0;
	else
		return (n+funcion_suma(n-1));
}



