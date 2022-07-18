#include<iostream>
#include<conio.h>
using namespace std;

int main(){
  float n, numeros[100];
  int i, j, aux;
  
  cout<<"Digite el numero de elementos que va tener el arreglo: ";
  cin>>n;
  
  //ingresando numeros
  for(i=0; i<n; i++){
    cout<<i+1<<". Digite un numero: ";
    cin>>numeros[i];
  }
  
  //metodo burbuja
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(numeros[j]>numeros[j+1]){
        aux=numeros[j];
        numeros[j]=numeros[j+1];
        numeros[j+1]=aux;
      }
    }
  }
  
  //imprimiendolos ordenadamente
  cout<<"\nOrden ascendente: ";
  for(i=1; i<=n; i++){
    cout<<numeros[i]<<" ";
  }
  
  cout<<"\nOrden descendente: ";
  for(i=n; i>0; i--){
    cout<<numeros[i]<<" ";
  }
  
  getch();
  return 0;
}
