#include <iostream>
using namespace std;
int main ()
{
	int Ap, Re, De, To, A, R, D;
	cout<<"Ingrese la cantidad de estudiantes que Aprobaron la materia"<<endl;
	cin>>Ap;
	cout<<"Ingrese la cantidad de estudiantes que Reprobaron la materia"<<endl;
	cin>>Re;
	cout<<"Ingrese la cantidad de estudiantes que Desertaron la materia"<<endl;
	cin>>De;
	To=Ap+Re+De;
	A=Ap*100/To;
	R=Re*100/To;
	D=De*100/To;
	cout<<"El porcentaje de aprobados de la materia es de= "<<A<<"%"<<endl;
	cout<<"El porcentaje de reprobados de la materia es de= "<<R<<"%"<<endl;
	cout<<"El porcentaje de desertores de la materia es de= "<<D<<"%"<<endl;
	system ("pause");
	return 0;
}
