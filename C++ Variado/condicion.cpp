#include <iostream>
using namespace std;
int main ()
{
double p1,p2,p3,pt;
  cout<<"ingrese el primer producto"<<endl;
  cin>>p1;
  cout<<"ingrese el segundo producto"<<endl;
  cin>>p2;
  cout<<"ingrese el tercer producto"<<endl;
  cin>>p3; 
  
 pt=p1+p2+p3;
 
    if (pt>5000) {
	 cout<<"saldo insuficiente"<<endl;
	 }
     else{
	   cout<<"saldo suficiente"<<endl;
	}
	cout<<"porque su monto es de: "<<pt<<"BsS."<<endl;
    system ("pause");
    return 0;

}
