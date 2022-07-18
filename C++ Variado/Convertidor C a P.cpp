#include <iostream>
using namespace std;
//Convertidor de C/P
int main ()
{
	float V,R;
	const float P=2.54;
	cout<<"coloque la operacion en cm"<<endl;
	cin>>V;
	R=V/P;
	cout<<"su resultado en pulgada es:"<<R<<"pulg."<<endl;
	system ("pause");
	return 0;
}
