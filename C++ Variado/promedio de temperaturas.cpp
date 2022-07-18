#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
  float t, p, s;
    srand(time(NULL));
    
  for (int i=1; i<=24; i++)
  {
     t = 16+rand() % (46-16);
	
    if  (t>16 && t<45)
      s+=t;
}	
    p= s/24;
      cout<< "promedio de la temperatura es: "<<p<<endl;
    
      system ("pause");
    
    return 0; 
}
