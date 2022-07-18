//ejercicio 1
#include <iostream>
using namespace std;

int main(){
	int vectorA[]={1,2,1,4,5,6,7,2,9,10}; //defini los vectores de una vez para ahorrar tiempo 
	int vectorB[]={11,1,13,14,15,10,17,18,19,20};
	int vectorC[10];
	int i,j,aux=0; //variables para el ordenamiento burbuja 

	//suma de los vectores 
	cout<<"Primer ejercicio: "<<endl;
	cout<<"suma de los vectores: "; 
	for (int i=0; i<10; i++){
		vectorC[i]=vectorA[i]+vectorB[i];
		cout<<vectorC[i]<<" ";
	}
	
	cout<<"\n";

	//ordenamiento burbuja 
	for (int i=0; i<10; i++){
		for(j=0; j<10; j++){	
			if (vectorC[j]>vectorC[j+1]){		
				aux=vectorC[j];
				vectorC[j]=vectorC[j+1];
				vectorC[j+1]=aux;
			}
		}
	}
		
	cout<<"\nOrden descendente: ";
	for(int i=10; i>=0; i--){
		cout<<vectorC[i]<<" ";
	}
}
