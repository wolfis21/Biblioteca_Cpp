#include <iostream>
using namespace std;

int main (){
	
	char LARGO [] = {'i','n','f','o','r','m','a','t','i','c','a'};
	char ele ='m';
		
		for(int i=0; i<11; i++){
			if (LARGO[i]==ele)
				cout<<"Elemento encontrado en:"<<i;
		}
		
	return 0;
}
