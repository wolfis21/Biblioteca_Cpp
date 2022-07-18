 //Calcular el promedio de un alumno que tiene 7 calificaciones  
 
#include <iostream>
#include <iomanip> 
 using namespace std;
 
 int main ()
 {
float cal, suma=0, pro;
	
	cout<<"|"<<setw (4)<<" digite sus 7 calificaciones "<< "|"<<endl;
	
	for (int i=7; i>0; i--)
	{
		cin>>cal;
		cout<<" ";
			suma += cal;
	}
			pro=suma/7;
		
		cout<<"|"<<setw(8)<<" el promedio de las clasificaciones "<<"|"<<endl;
		cout<<"		"<<"|"<<setw(4)<<setprecision (4) <<pro<<"|"<<endl;
		
 	return 0;
 }
