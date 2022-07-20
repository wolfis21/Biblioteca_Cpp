//ejercicio 2 del Examen en programacion
//02/03/2020

#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

void volumen_cono (float r, float altura);
float r, alt;

int main(){
	
	cout<<"\n\tPara sacar el volumen de un cono necesitamos saber: "<<endl;
	cout<<"1)El radio que tiene la base"<<endl;
	cout<<"2)La altura que tiene este cono"<<endl;
	cout<<"\n...al saber estos datos ingreselos en pantalla..."<<endl;
		getch ();
	cout<<"RADIO:  ";cin>>r;
	cout<<"ALTURA:  ";cin>>alt;	
	
	volumen_cono(r, alt);
	
	return 0;
}

void volumen_cono (float r, float altura){
	float const pi=3.14;
	float v;
		v= (pi * (pow(r,2))*altura)/3;
		
			cout<<"\nEl volumen es: "<<v<<endl;
}
