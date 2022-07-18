#include <iostream>
#include <time.h>

using namespace std; 

int main(){
 int num, suma;
 srand(time(NULL));
 
 cout<<"Numeros aleatorios:"<<endl;
 
 do{
  num=rand()%(10);
  cout<<num<<endl;
  suma+=num;
 
 }while (num!=0);
 
 cout<<"\nLa suma de los numeros es: "<<suma<<endl;
 return 0;
}