#include <iostream>
using namespace std;
int main ()
{
	int A,B,S,P,M;
	std::cout<<"Ingrese 2 valores"<<endl;
	std::cin>>A>>B;
	S=A+B;
	P=A*B;
	M=A%B;
	std::cout<<"Suma= "<<S<<endl;
	std::cout<<"Producto= "<<P<< endl;
	std::cout<<"Modulo= "<<M<< endl;
	system ("pause");
	return 0;
}
