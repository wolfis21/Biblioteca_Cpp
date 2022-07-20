//El costo de enviar por correo una carta de primera clase es de $5 para cartas que 
//pesan menos de 500 grs y de $7 más $2 por cada grs. adicional o fracción para cartas
// que pesan más de 500 grs. Dado el peso de una carta 
//como un número real de grs., muestre por pantalla el costo de enviar una carta.


#include <iostream>
using namespace std;

void calcularTotal(int num){
	int a=0; 
	int b=500; 
	int c=0;  
	if (num <= 500){   
		cout<<"El total a pagar es $5"<<endl;  
	}
	else if (num > 500){   
		int res = num % b; 
		for(int i=0; i < res; i++){  
			c+=2;  
			a=c+7;
		}
		cout<<"El total a pagar es: "<<a<<endl; 
	}
}
int main(){
	float num;  
		cout<<"digite os gramos: ";  
			cin>>num;  
	
	calcularTotal(num); 
	
	return 0; 
}
	

