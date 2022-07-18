/*hacer un programa que lea 5 numeros, forme un arreglo y luego los multiplique 
por 2 formando un nuevo arreglo*/

#include <iostream>
using namespace std;

	int main(){
		
		int arreglo1 [5];
		int Rarreglo [5];
		
			cout<<"ingrese 5 numeros para un vector"<<endl;
			
		for(int i=0; i<5; i++){
			
			cout<<i+1<<". Numero del vector: ";
			cin>>arreglo1 [i];
			Rarreglo [i] = arreglo1 [i]*2;
			
		}
			for(int i=0; i<5; i++){
				
			cout<<Rarreglo [i]<<" ";
		}
		
		return 0;
	}
