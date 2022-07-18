#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
	float a,b,c,d,R;
cout<<"escriba a: "<<endl; cin>>a;
cout<<"escriba b: "<<endl; cin>>b;
cout<<"escriba c: "<<endl; cin>>c;
cout<<"escriba d: "<<endl; cin>>d;

R= a+(b/(c-d));
cout.precision (2);
cout<<"el resultado es "<<R<<endl;

return 0;

}
