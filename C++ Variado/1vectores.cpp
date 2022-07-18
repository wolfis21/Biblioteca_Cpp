#include <iostream>

using namespace std;

int main ()
{
	int numero [] = {1,2,3,4,5};
	int suma= 1;
	
	for(int i=1; i<5; i++){	
		suma+= numero [i];
}
	
	cout<<"el valor del calculo es: "<<suma<<endl;
	
	system ("pause");
	return 0;
}
