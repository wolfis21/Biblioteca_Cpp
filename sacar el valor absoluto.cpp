//sacar el valor absoluto de un numero

#include <iostream>
#include <conio.h>
using namespace std;

template <class tipod>
void mostrarabs (tipod numero);

int main (){
	
	int num1= -5;
	float num2= -50.5;
	double num3= -500.24856;
	
	mostrarabs (num1);
	mostrarabs (num2);
	mostrarabs (num3);
	
	getch ();
	return 0;
}

template <class tipod>
void mostrarabs (tipod numero){

	if (numero < 0){
		numero= numero * (-1);
	}
		cout<<"El valor absoluto es: "<<numero<<endl;
}
