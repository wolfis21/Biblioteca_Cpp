//programa que lea una cantidad de segundo y las lleve a tantas horas, minutos y segundos
//usando funciones

#include <iostream>
using namespace std;

void  tiempo (int stotal, int& s, int& m, int& h);
int stotal, s, m, h;
int main (){
	
	cout<<"\n\tIngrese la cantidad de segundos totales: "<<endl;
	cin>>stotal;
	
	tiempo (stotal, s, m, h);
	
	cout<<"\n\nHORAS: "<<h<<endl;
	cout<<"MINUTOS: "<<m<<endl;
	cout<<"SEGUNDOS: "<<s<<endl;
	
	return 0;
}

void  tiempo (int stotal, int& s, int& m, int& h){
	h= stotal/3600;
	stotal%=3600;
	m= stotal/60;
	s= stotal%60;

}
