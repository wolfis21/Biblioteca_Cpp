//ARREGLO BIDIMENCIONAL 
#include <iostream>
#include <iomanip>
using namespace std;

	int main (){
		
		int cuadro [100][100], filas, columnas;
		
		cout<<"	Ingrese el numero de FILAS que desea: "; cin>>filas;
		cout<<"	Ingrese el numero de COLUMNAS que desea: "; cin>>columnas;
		
		for (int i=0; i<filas; i++){
			for (int j=0; j<columnas; j++){
					
					cout<<"ingrese ["<<i<<"] ["<<j<<"] : ";
					cin>> cuadro [i][j];
			}
		}
			cout<<"\n";
		for (int i=0; i<filas; i++){
			for (int j=0; j<columnas; j++){
			
				cout<<setw(5)<<cuadro [i][j];
			}
			cout<<"\n";
		}
		
	system ("pause");
	return 0;
	}
