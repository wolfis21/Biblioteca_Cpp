/*3.- Dado un vector x de n elementos reales, donde n es impar, diseñar una función que calcule y devuelva la mediana de ese vector.
 La mediana es el valor tal que la mitad de los números son mayores que el valor y la otra mitad son menores. Escribir un programa que compruebe la función. (Valor: 3,5 ptos)*/
 
#include <iostream>
using namespace std;

int funcionQueCompara(const void *a, const void *b) {
  
    int aInt = *(int *) a;
    int bInt = *(int *) b;
    // Al restarlos, se debe obtener un número mayor, menor o igual a 0
    // Con esto ordenamos de manera ascendente
    return bInt - aInt;
}

int main(void) {
    int arreglo[] = {22, 11, 90, 1, 97, 6, 15, 13, 30, 19, 20};
    int tamanioElemento = sizeof arreglo[0];
    int longitud = sizeof arreglo / tamanioElemento;

    int mitad = longitud / 2;
    int mediana;
    //  ver si la longitud es par
    if (longitud % 2 == 0) {
        // promediar los valores del centro
        mediana = (arreglo[mitad - 1] + arreglo[mitad]) / 2;
    } else {
        mediana = arreglo[mitad];
    }
    printf("Imprimendo arreglo:\n");
    for (int x = 0; x < longitud; x++) {
        cout<<arreglo[x]<<" ";
    }
    cout<<"\nla mediana es: "<<mediana;

    return 0;
}
