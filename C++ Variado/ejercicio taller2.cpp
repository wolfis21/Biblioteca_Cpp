/* Ordenar el array (vector): 42 57 14 40 96 19 08 68 por los métodos de inserción y burbuja cada vez que reorganice el vector, se debe mostrar el nuevo vector reformado. (Valor: 3,5 ptos)
*/
#include <iostream>
#include <conio.h>

using namespace std; 

int main(){
	int vectora[]={42,57,14,40,96,19,8,68};
	int pos,aux=0;  
	
		//ordenamiento burbuja 
	for (int i=1; i<8; i++){
		for(int j=0; j<8-1; j++){	
			if (vectora[j]>vectora[j+1]){		
				aux=vectora[j];
				vectora[j]=vectora[j+1];
				vectora[j+1]=aux;
			}
		}
	}
		cout<<"\nOrden ascendente: "; 
	for(int i=1; i<=8; i++){
		cout<<vectora[i]<<" ";
	}
	cout<<"\n";
	
	//ordenamiento por insercion
	for(int i; i<8; i++){
		pos=i;
		aux=vectora[i];
		
		while ((pos>0)&&(vectora[pos-1]>aux)){
			vectora[pos]=vectora[pos-1];
			pos--;
		}
		vectora[pos]=aux;
	}
	cout<<"\nOrden ascendente: "; 
	for(int i=1; i<=8; i++){
		cout<<vectora[i]<<" ";
	}
	
	return 0;
}
