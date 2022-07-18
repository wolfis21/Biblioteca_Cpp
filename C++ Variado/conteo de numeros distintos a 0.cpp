#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	
	int numero, cont=0;
		cout<<setw(5)<<"|"<<"ADIVINAN EL NUMERO"<<"|"<<endl;
	do{	
		cout<<"escriba un numero: ";cin>>numero;
			cont++;
	}while (numero != 0);
	
		cout<<"---------ya termino el juego----------"<<endl;

		cout<<cont<<" "<<"intentos"<<endl;
		
	system ("pause");
	return 0;
}
