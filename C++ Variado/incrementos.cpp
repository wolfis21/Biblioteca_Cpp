#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	int suma= 0, exponencial, resultado= 0;
	
		cout<<" ingrese el numero de veces que quiere multipilicar las potencias: ";cin>>exponencial;
		
	for (int i=1; i<=exponencial; i++){
		
		resultado = pow(2,i);
		suma+=resultado; 
	}
		cout<<"el resultado es: "<<suma<<endl;
	
	system ("pause");
	return 0;
}
