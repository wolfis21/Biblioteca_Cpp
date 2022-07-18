
#include <iostream>
using namespace std;

int main(){
	
	char letras1[] = {'a','b','c','d','e'};
	char letras2[] = {'f','g','h','i','j'};
	char letras3 [10];
	
	//copiando los elementos de las letras1 hacia letras3
	for(int i=0; i<5; i++){
		letras3[i] = letras1[i];
	}
	//copiando los elementos de las letras2 hacia letras2
	for(int i=5; i<10; i++){
		letras3 [i] = letras2 [i-5]; 
	}
	for(int i=0; i<10; i++){
		cout<<letras3 [i]<<" ";
	}
	
	system ("pause");
	return 0;
}
