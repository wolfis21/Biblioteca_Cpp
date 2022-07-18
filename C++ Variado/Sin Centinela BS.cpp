#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

const int TAM = 100;
	void imprimeCB (char*CB){
		int i;
		for(i=0;i<TAM-1;i++){
			cout<<CB[i]<<"  ";
		}
	}
int main (){
	char CB[TAM+1];
	int i, dato;
		srand ((unsigned char)time(NULL));
			for(i=0;i<TAM;i++)
				CB[i]=(char)(rand()%100);
			imprimeCB(CB);
			dato =(char)(rand()%100);
			CB[i]=dato;
				cout<<"\n\nDato a Buscar: "<<dato;
			i=0;
				while (CB[i]!=dato){
					i++;
				}
						if (CB[i]==dato)
							cout<<"\n\nPosicion "<<i<<endl;
							else
							cout<<"\n\nElemento no esta en el Array. ";
				
	
			return 0;
}
