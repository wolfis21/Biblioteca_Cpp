#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
  int matriz [2][2]={{04,24} , {966,2043}};
  
	cout<<setw(3)<<"||"<<"Agenda de emergencia"<<"||"<<setw(3)<<endl;
	
	cout<<"\n 1.Isaac Saado"<<setw(2)<<"×"endl;
	cout<<"2.Wadih Saado"<<setw(2)<<"×"<<endl;
	cout<<"3.Aibsel Mathison"<<setw(2)<<"×"<<endl;
	cout<<"×××××××××××××××××××"<<endl;
	
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<matriz [i][j];
		}
	cout<<"\n";
	}
		
		
			
	system ("pause");				
	return 0;
}