//ejercicio 1 del Examen en programacion
//02/03/2020

#include <iostream>
using namespace std;

float squarekm (float longitud, float ancho);
float l,a;
int main (){
	cout<<"|| VALORES INGRESADOS EN MILLAS SOLAMENTE ||"<<endl;
	cout<<"\ningrese la longitud:  ";cin>>l;
	cout<<"ingrese el ancho:  ";cin>>a;
	
	cout<<"\n...El VALOR devuelto del AREA en KM al cuadrado es..."<<endl;
	cout<<"\t\t\t"<<squarekm (l,a); 
	
	return 0;	
}

float squarekm (float longitud, float ancho){
	float resp1, resp2, respt;
		resp1=longitud*1.6;
		resp2=ancho*1.6;
		respt= (resp1*resp2);
		
	return respt;
}

