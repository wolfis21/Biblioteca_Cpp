#include <iostream>
#include <math.h>
using namespace std;
//CAlCULO DE Hipotenusa triangulo 
int main ()
{
  double A,B,C;
  cout<<"ingrese cateto A= "<<endl;
  cin>>A;
  cout<<"ingrese Cateto B= "<<endl;
  cin>>B;
  C=sqrt(pow(A,2)+(pow(B,2)));
  cout<<"La hipotenusa es= "<<C<< endl;
  system ("pause");
  return 0;
}
