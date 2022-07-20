//mayor entre dos numeros con funciones 

#include <iostream>
#include <conio.h>
using namespace std;

	int encontrarmax (int x, int y);

int main (){
	
	int n1, n2;
	
	cout<<"Ingrese dos numeros para evaluar: "<<endl;
	cin>>n1>>n2;
	
	cout<< "EL MAYOR DE LOS NUMEROS ES: "<<encontrarmax (n1, n2);
	
	getch ();
	return 0;
}

int encontrarmax (int x, int y){
	
	int numeromx;
	
		if (x > y) {numeromx = x;}
		else {numeromx = y;}
		
		return numeromx;
}

