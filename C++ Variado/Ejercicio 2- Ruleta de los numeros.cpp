#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std; 
//ruleta de numeros, adivina 1
int main()
{
	system ("color 3a");
	int t, respuesta, cont=1;
	srand (time(NULL));
		cout<<setw (18)<<"|"<<"BIENVENIDO A LA RULETA"<<"|"<<endl;
		cout<<"==========================================================="<<endl;
		cout<<"En este juego tienes que adiviniar un numero del 1 al 20"<<endl;
		cout<<"(tienes 12 intentos, depende de tu desempeño clasificaras)"<<endl;
		cout<<"==========================================================="<<endl;
		cout<<setw (20)<<"|	"<<"EMPEZAMOS"<<"	|"<<endl;
	
			t = rand()%(20);
				cout<<endl;
	
	while (cont<12)
	{
			cout<<"-----------------------------------------------------------"<<endl;
			cout<<"Intento Numero "<<cont<<setw(15)<<"||	";
		
		 cin>>respuesta;
		
		if (respuesta > t){
			cout<<setw(23)<<"//"<<"VALOR MUY ALTO"<<"\\"<<endl;
		}
		else if (respuesta < t){
			cout<<setw(23)<<"//"<<"VALOR MUY BAJO"<<"\\"<<endl;
		}
		else if (respuesta==t){
			cout<<setw(20)<<"|	"<<"HA GANADO"<<"	|"<<endl;
			cont++;
			break;
		}
		cont++; 	
	}
		cout<<endl;
		cout<<"------------SU CLASIFICACION ES LA SIGUIENTE---------------"<<endl;
		cout<<"presione ENTER para saberlo"<<endl;
		system ("pause");
		
		if (cont<= 1 && cont <=3){
			cout<< "///-- SUERTUDO --/// "<<endl;
		}
		else if (cont <= 4 && cont<= 6){
			cout<<" ///-- GENIO --/// "<<endl;
		}
		else if (cont <= 7 && cont<= 12){
			cout<<"///-- TONTO --/// "<<endl;
		}
return 0;
}
