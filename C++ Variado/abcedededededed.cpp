//App de de operaciones matematicas
#include <iostream>
#include <iomanip>
#include <string.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
 
 int main ()
 {
 	float a,b,c;
 	int resp=0, resp2=0;
	
	do{ 
		cout<<setw (13)<< "|"<< "TABLA DE OPERACIONES"<< "|"<<endl;
		cout<< "__Suma_1"<<endl; 
		cout<< "__Resta_2"<<endl; 
		cout<< "__Multiplicacion_3"<<endl; 
		cout<< "__Division_4"<<endl; 
		cout<< "__Potencias_5"<<endl;
		cout<<"\n"<<setw (13)<< "|"<< "¿QUE DESEA HACER?"<<"|"<<endl;
		cout<<"\n----------seleccione una opcion-------"<<endl;
		cin>> resp;
		
	
		switch (resp){
			case 1: cout<< "se sumara";
					cout<< ", escriba dos numeros"<<endl;
					cin>>a>>b;
				c= a+b;
					cout<< "la operacion da: "<<c<<endl;
			break;
				case 2: cout<< "se restara";
					cout<< ", escriba dos numeros"<<endl;
					cin>>a>>b;
				c= a-b;
					cout<< "la operacion da: "<<c<<endl;
			break;
				case 3: cout<< "se multiplicara";
					cout<< ", escriba dos numeros"<<endl;
					cin>>a>>b;
				c= a*b;
					cout<< "la operacion da: "<<c<<endl;
			break;
				case 4: cout<< "se dividira";
					cout<< ", escriba dos numeros"<<endl;
					cin>>a>>b;
				c= a/b;
					cout<< "la operacion da: "<<c<<endl;
			break;
				case 5: cout<< "se hara una potencia";
					cout<< "; escriba primero la base y luego lo que quiere elevarlo"<<endl;
					cin>>a>>b;
				c= (pow(a,b));
					cout<< "la operacion da: "<<c<<endl;
			break;
		}
				 cout << "Ingrese 1 para hacer otra operacion\n";
        		cout << "Ingrese 2 para salir\n";
				cin>>resp2;
				
	} while (resp2 != 2);
	
		cout << "\n----GRACIAS POR USAR ESTA HERRAMIENTA----"	<<endl;
		
 	system ("pause");
 	return 0;
 }
