#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std; 

int main(){
  system ("color 3a");
  
  float l, p, s;
  	
	cout<<"Ingrese el limte de peso diario de la pesca"<<endl;
  	cin>>l;
  
  for (int tp=1; tp=tp; tp++)
  {
    cout<<"Ingrese el valor de tipo del pescado "<<tp<<endl;
    cin>>p;
    s+=p;
    
    if (l <= s){
      cout<<"Ha excedido el limite del peso diario"<<endl;
      break;
    }
    else if (p==0){
      cout<<"Ingreso de pescados concluidos"<<endl;
      break;
  }
  	cout<<"El peso total hasta el momento es de: "<<s<<"Kg"<<endl;   
  }
  	cout<<"El peso total hasta el momento es de: "<<s<<"Kg"<<endl;
  system("pause"); 
  
		return 0;
}

