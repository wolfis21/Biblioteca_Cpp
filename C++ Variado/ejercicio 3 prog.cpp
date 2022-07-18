// Se necesita tener una ventana muy ancha para ver el cuadro completo
// Cuadro construido de manera Horizontalmente
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main() {
  system("color 09");
    srand(time(NULL));
    int n=1+rand() % (21-1);
    int MatrizA[n][n]={};
    int s=n;     
     
    cout<<"La matriz A tiene "<<n<<" filas y "<<n<<" columnas."<<endl;
  cout<<"Dicha matriz tiene una capacidad de "<<n*n<<" elementos."<<endl;
     
  for (int j=0; j<n; j++){
    for (int i=0; i<n; i++){
    MatrizA[j][i]=1+rand()%(9-1);
    cout<<MatrizA[j][i]<<" ";}
    cout<<"\n";
    }
  cout<<"La diagonal secundaria de la matriz A es:"<<endl;
  
  for (int j=0; j<n; j++){
    for (int i=0; i<n; i++){
      if(s-1<=i){
      cout<<MatrizA[j][i]<<" ";}
      else{
      cout<<" "" ";}
    }
    s--;
    cout<<"\n";
    }
 
 system("pause");
 return 0;
}
