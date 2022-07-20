//Escriba una funcion llamada al_cuadrado() que calcule el cuadrado
//del valor que se le transmite y desplique el resultado.
//la funcion debera de ser capaz de elevar al cuadrado numeros flotantes

#include <iostream>
#include <math.h>
using namespace std;

void datos ();
void al_cuadrado(float x);
	float n;
	
int main (){
	
	datos ();
	al_cuadrado (n);
	
	system ("pause");
	return 0;
}
void datos (){
	cout<<"escriba el numero a elevarse: ";cin>>n;
}
void al_cuadrado (float x){
	float resultado = pow(x,2);
		cout<<"\nEl resultado es: "<<resultado<<"."<<endl;
}

