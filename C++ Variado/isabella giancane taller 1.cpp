#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main (){
  
  int num,exp;
  char respuesta;
  while(respuesta!='n'){
  system("color 57");
  cout<<"************************************"<<endl; //36 
  cout<<"----FACTORES PRIMOS DE UN NUMERO----"<<endl;
  cout<<"************************************"<<endl;
  cout<<"-------- Ingrese un numero ---------"<<endl; 
  cin>>num;
  exp=num;
  cout<<"************************************"<<endl;
  int vector[exp]={};
  for(int i=2; num>1; i++){
    while (num%i==0){
      ++vector[i];
      num/=i;
    }
  }
    cout<<"--------- Factores primos ----------"<<endl;
  for(int i=1; i<exp; i++){
    if(vector[i]!=0){
      cout<<i<<"^"<<vector[i]<<" * ";
    }
  }
  cout<<"\n************************************"<<endl;
  cout<<"\tDesea continuar?"<<endl;
  cout<<"     s para si y n para no:"<<endl;
  cin>>respuesta;
  } 
  getch ();
  return 0;
}
