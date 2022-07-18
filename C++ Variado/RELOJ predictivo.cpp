#include <iostream>
using namespace std;
//RELOJ
int main ()
{
int t,h,ht;
cout<<"escriba la hora actual sin minutos ni segundos: "; cin>>t;
cout<<"...escriba la hora que quiera añadir..."; cin>>h;

ht=(t+h)%12;

cout<<"la hora actual es: "<<ht<<endl;
system ("pause");
return 0;

}
