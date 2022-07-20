//programa que eleve al cuadrado los elementos de vector
//funciones

#include <iostream>
using namespace std;

void cuadrado (int vector[],int);
void salida (int vector[],int);
int const tam=10;

int main (){
	
	int vector[tam]={2,4,6,8,10,12,14,16,18,20};
		cout<<"| 	ELEVACION AL CUADRADO DE UN VECTOR	|"<<endl;
		cout<<"\nvector original: \n"<<endl;
		for (int i=0; i<10; i++){
			cout<<vector[i]<<"   ";
		}
		cout<<"\n\n";
		
	cuadrado (vector,tam);
	salida (vector,tam);
	
	return 0;
}

void cuadrado (int vector[], int tam){
	
	for (int i=0; i<tam; i++){
		vector[i] *=vector[i];
	}
}

void salida (int vector[],int tam){
	
	for (int i=0;i<tam;i++){
		cout<<vector [i]<<"  ";
	}
}

