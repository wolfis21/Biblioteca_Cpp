#include <iostream>

using namespace std;

int main (){
	
	int resp = 0;
	do{
		system ("cls");
		system("color 08");
	long int n,e;
			cout<<"\n   CALCULADOR DE FACTORES PRIMOS"<<endl;
			cout<<"\tINGRESE UN NUMERO"<<endl;
			cout<<"ªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªª"<<endl;
			cout<<"\t\t"; cin>>n;
	e=n;
	int vector[e]={};
	for(int i=2; n>1; i++){
		while (n%i==0){
			++vector[i];
			n/=i;
		}
	}
			cout<<"ªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªª"<<endl;
	        cout<<"\t    RESULTADO"<<endl;
	        cout<<"ªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªªª"<<endl;
	        
	for(int i=1; i<e; i++){
		if(vector[i]!=0){
			cout<<"\t"<<i<<"^"<<vector[i]<<" * ";
		}
	}
			cout<<"\n\nPresione 1 para continuar"<<endl;
			cout<<"Presione 0 para salir"<<endl;
			cin>>resp;
	
		}while ( resp != 0);
			cout<<"    ...GRACIAS POR SU USO..."<<endl;
	return 0;
}
