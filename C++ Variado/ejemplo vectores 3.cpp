#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 //calculo de magnitud vectorial MALOOOOOOOOOOOOOOO
int main() 
{      
    float vector1[3];
    float vector2[3];
    float vectorSuma[3];
    float r;
    int i;
 
    // Pedimos los datos del primer vector
    for (i=0; i<3; i++)
    {
        cout << "Introduce la componente " << i+1 << " del primer vector: ";
        cin >> vector1[i]; 
    }
    // Pedimos los datos del segundo vector
    for (i=0; i<3; i++)
    {
        cout << "Introduce la componente " << i +1 << " del segundo vector: ";
        cin >> vector2[i];
    }
    // Calculamos la suma
    for (i=0; i<3; i++)
        vectorSuma[i] = vector1[i] + vector2[i];
 
    // Y mostramos el resultado
    cout << "El vector suma es ";
    for (i=0; i<3; i++){
	
        cout << vectorSuma[i] << " ";
	 }
 	//la magnitud del vector
 	for (i=0; i<3; i++){
	 
 		r = sqrt(pow(vectorSuma[i],2));
	 }	
    cout<<"\n resultado final: "<<r<<endl;
	return 0;
}
