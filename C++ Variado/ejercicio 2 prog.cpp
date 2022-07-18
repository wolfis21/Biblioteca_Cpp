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
    
     int n=1+rand() % (101-1);
    int VectorA[n]={};
    int s;
    
     cout<<"Vector Original:"<<endl;
     for (int i=0; i<n; i++){
     VectorA[i]=1+rand() % (n-1);
  cout << setw( 3 ) << VectorA[ i ];}
  cout << endl;
  
 for(int j=1; j<n; j++){
 s=VectorA[j]; 
 int Elemento=j;
 
 while (( Elemento>0 ) && ( VectorA[Elemento-1]>s ) ){
 VectorA[Elemento]=VectorA[Elemento-1];
 Elemento--;
 } 
 VectorA[ Elemento ] = s;
 } 

 cout <<"Vector Ordenando de Menor a Mayor:"<<endl;
 for ( int i = 0; i < n; i++ ){
 cout << setw( 3 ) << VectorA[ i ];}
 cout << endl;
 return 0;
}
