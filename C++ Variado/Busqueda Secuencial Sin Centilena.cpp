#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int TAM = 100;
	void imprimeCB (int*CB){
		for(int i=0;i<TAM;i++){
			cout<<CB[i];
				cout<<CB[i];
		}
	}
int main (){
	int CB[TAM];
	int i, dato;
		srand ((unsigned int)time(NULL));
			for(i=0;i<TAM;i++)
				CB[i]=(int)(rand()%100);
			imprimeCB(CB);
			dato =(int)(rand()%100);
				cout<<"Dato a Buscar: "<<dato;
			i=0;
				while ((CB[i]!=dato)&&(i<TAM)){
					i++;
						if (CB[i]==dato)
							cout<<"Posicion "<<i;
							else
							cout<<"Elemento no esta en el Array. ";
				}
			return 0;
}
