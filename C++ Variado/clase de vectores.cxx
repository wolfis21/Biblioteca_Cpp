//programa.que lea 30 notas, calcule el promedio, el mayor y menor

#include <iostream>
using namespace std;

int main()
{
	float notas [30], suma=0,promedio=0;
	float notasmax=0;
		cout<<"ingrese notas: "<<endl;
		
		for(int i=0;i<0; i++){
			cin>>notas [i];
		suma+=notas[i];
		 
		 if (notas [i] < notasmax)
		 	notasmax=notas[i];
		}
		promedio= suma/30;
		cout<<"promedio= "<<promedio<<endl;
		cout<<"nota mayor= "<<notasmax<<endl;
		return 0;
}
