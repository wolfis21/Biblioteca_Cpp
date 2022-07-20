//
//
#include <iostream>
using namespace std;

void escribe (int ini, int fin);
int a,b;

int main (){
	
	cout<<"\nESCRIBA DOS NUMEROS:  ";cin>>a>>b;
	escribe (a,b);
	return 0;
}
void escribe (int ini, int fin){
	
	if (fin==0){
		 cout<<fin;
	}else{
		cout<<(ini+escribe(ini, fin-1))<<"  ";
	}
}
