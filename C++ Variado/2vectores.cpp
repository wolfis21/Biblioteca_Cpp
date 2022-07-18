/*Realice un programa que lea N numeros enteros y los almacene en un vector. 
Luego imprima el vector des el primer elemento hasta el ultimo 
y desde el ultimo elemento hasta el primero. Mostrar los resultados*/
#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int numero [100], n;
	system("color 06");
	
		cout<<"|"<<setw(2)<<"ESCRIBA DE CUANTO QUIERE QUE SEA SU VECTOR"<<"|";cin>>n;
		cout<<"\n";
	for (int i=0; i<n; i++){
		
		cout<<"\n Escriba su "<<i+1<<" del vector: ";	cin>>numero[i];
	}
		cout<<"\n";
		cout<<"|"<<setw(2)<<"SE IMPRIME DEL PRIMERO AL ULTIMO COMO"<<"|"<<endl;
		
	for (int i=0; i<n; i++){
		cout<<setw(1)<<"|"<<setw(2)<< numero[i]<<"  ";
	}
		cout<<"\n";
		cout<<"--------------------------------------------"<<endl;
		cout<<"|"<<setw(2)<<"SE IMPRIME DEL ULTIMO AL PRIMERO COMO"<<"|"<<endl;
	
	for (int i=n-1; i>=0; i--){
		cout<<setw(1)<<"|"<<setw(2)<< numero[i]<<"  ";
	}

	cout<<"\n";
	system ("pause");
	return 0;
}
