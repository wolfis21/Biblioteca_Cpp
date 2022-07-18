#include <iostream>

using namespace std;

int main(){
	
	int temperatura, cont;
	
	for (int i=1; i<=6; i++){
	
	cout<<"ingrese la temperatura: ";cin>>temperatura;
		cont+=temperatura;
	
	}
		cont /=6;
	cout<<"el promedio del dia es: "<<cont<<endl;
	
	return 0;

}
