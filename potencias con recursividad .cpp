//
//

#include <iostream>
using namespace std;

int potencia (int x, int y);
int base, exp;

int main (){
		
	cout<<"\nEscriba la base: ";cin>>base;
	cout<<"\nEscriba el exponente: ";cin>>exp;
	
	potencia (base,exp);
	cout<<"\n\n la respuesta es: "<<potencia (base,exp);
	return 0;
}

int potencia (int x, int y){
	
	if (y==1){
		return x;
	}else{
		return x*potencia (x,y-1);
	}
	
}
