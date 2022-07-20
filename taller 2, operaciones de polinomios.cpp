#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main (){
	char poli1[40]={};
	char poli2[40]={};
	int matriz1[4][2]={};
	int matriz2[4][2]={};
	int num1,num2;
	
	cout<<"Inserte el 1er polinomio:"<<endl;
	cin.getline(poli1,40,'\n');
	num1=atoi(poli1);
	cout<<"Inserte el 2er polinomio:"<<endl;
	cin.getline(poli2,40,'\n');	
	num2=atoi(poli2);
	
	for(int i=0; i<4; i++){
			for(int j=1; j<2; j++){
				cout<<matriz1[i][j];
			}
	}
	
	for(int i=0; i<4; i++){
			for(int j=1; j<2; j++){
				cout<<matriz2[i][j];
			}
	}	
	
	cout<<num1<<endl;
	cout<<num2<<endl;	
	
	system ("pause");
	return 0;
}
