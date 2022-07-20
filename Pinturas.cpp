//Un pintor se está preparando para pintar una obra de arte.
// El lienzo y los pinceles que desea usar costarán $40.
// cada color de pintura o tarro que compre es un $5 adicional.
// Determine cuánto dinero necesitará en función de la cantidad 
//de colores que desea comprar si el impuesto en esta tienda es de 10%. 
//Redondee al número entero más cercan 

#include <iostream>
#include <string>
using std::getline;
using namespace std;

 const int cost=40;
 const int plu=5;

 int main (){
 	
 	float rsp, rsp2, imp=0.10, n;
 	char colors[50];
	 	
 		cout<<"\n\t||Preparativo para obra maestra||"<<endl;
 		cout<<"\t (recuerde que tiene un costo base de 40$\n\t el conseguir lienzo y pinceles.)"<<endl;
 		cout<<"\t(no esta metido el costo de pinturas, debe de comprarlas)"<<endl;
 		cout<<"\n\npinturas tienen costo de 5$ mas un costo del 10% al monto."<<endl;
 		cout<<"Ingrese la cantidad de pinturas que querra: ";cin>>n;
 		cout<<"ingrese los colores requeridos:  "<<endl;
 			cin.getline(colors, 50); //no se logra guardar
 			
 		/*	
 		rsp=plu*n;
 		rsp2=rsp*imp;
 		rsp=rsp+rsp2;

 		
			cout<<"\n\ncosto a pagar total: "<<rsp; 		
		 */
 	return 0;
 }
