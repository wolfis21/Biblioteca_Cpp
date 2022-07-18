/*desarrolle un programa  que lea de la entrada estandar un vector de numeros enteros
y determine el mayor elemento del vector*/

#include <iostream>
using namespace std;

int main (){
	int numeros [100], n,  mayor=0;
	
		cout<<"Escriba el numero de su vector: ";cin>>n;
		cout<<"\n";
			
	for (int i=0; i<n; i++){
		cout<<i+1<<". Numero del vector: ";
		cin>>numeros [i];
		
		if (numeros [i] > mayor)
			mayor=numeros [i];
	}
		cout<<"\n el numero mayor del VECTOR es: "<<mayor<<"."<<endl;
		
	system ("pause");
	return 0;
}
