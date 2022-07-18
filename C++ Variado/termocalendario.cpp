//termocalendario == ISAAC SAADO_c.i 27765209
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
	system ("color 0b");
	  float t, p, s, mayor=0, menor=40;
    srand(time(NULL));
    
    cout<<"|  DIA	|" "|TEMPERATURA |"<<endl;
    cout<<"======================="<<endl;
    
  for (int i=1; i<=30; i++)
  {
     t = 21+rand() % (41-21);
	
    if  (t>21 && t<40)
      
       cout<<"|"<<setw(5)<<i<<"	||	"<<t<<" C."<<" |"<<endl;  
       s+=t;
       
       if (t > mayor){
       	mayor= t;
	   }
	   else if (t < menor){
	   	menor= t;
	   }
}
	p= s/30;
		cout<<"======================="<<endl;
		cout<<"| EL PROMEDIO DEL MES |"<<endl;
		cout<<setw(7)<<"====="<<"|"<<setprecision(2)<<p<<"C."<<"|"<<"====="<<endl;
		cout<<setw(4)<<"==="<<"|"<<"MAYOR <-> "<<mayor<<"C."<<"|"<<"==="<<endl;
		cout<<setw(4)<<"==="<<"|"<<"MENOR <-> "<<menor<<"C."<<"|"<<"==="<<endl;
	
	return 0;
}
