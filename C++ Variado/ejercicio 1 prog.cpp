// Se necesita tener una ventana muy ancha para ver el cuadro completo
// Cuadro construido de manera Horizontalmente
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main() {

    srand(time(NULL));
     int n=1+rand() % (101-1);
    int VectorA[n]={};
    int VectorB[n]={};
     int s=0, x=0;     
     
     cout<<"El Vector A tiene una capacidad de "<<n<<" elementos."<<endl;
     cout<<"||";
     for (int i=0; i<n; i++){
    VectorA[i]=1+rand()%(n-1);
    cout << setw( 3 ) << VectorA[ i ];
    VectorB[VectorA[i]]++;} 
   	 cout<<"||";
   	 
  for (int i=0; i<n; i++){
    if (s<VectorB[i]){
      s=VectorB[i];
      x=i;}}  
      
   cout<<"\n\nEl valor "<<x<<" se repite "<<s<<" veces en los elementos:"<<endl;
   
  for (int i=0; i<n; i++){
    if (x==VectorA[i])
      cout<<"\nElemento: "<<i<<endl;}   
	  cout<<"\n"; 
	  
 system("pause");
 return 0;
}
