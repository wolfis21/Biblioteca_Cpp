#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
  system("color 09");
    float t, p, s, mayor=0, menor=40;
    srand(time(NULL));
    
    cout<<"|     DIA     |";
    
  for (int j=1; j<=9; j++)
  {
    cout<<"  "<<j<<" |";
  }
  for (int j=10; j<=30; j++)
  {
    cout<<" "<<j<<" |";
  }
    cout<<endl<<"| TEMPERATURA |";
  for (int i=1; i<=30; i++)
  {
      t = 21+rand() % (41-21);
    if (t>=21 && t<=40)
    cout<<" "<<t<<" |";
    s+=t;
    
        if (t > mayor)
    {
      mayor=t;
      }
      else if (t < menor)
    {
      menor=t;
       }
}  
  p=s/30;
  
  cout<<endl<<"El promedio de temperatura es: "<<p<<endl;
  cout<<"Temperatura Maxima es: "<<mayor<<endl;
  cout<<"Temperatura Minima es: "<<menor<<endl;
  
  system("pause");
  return 0;
}
