//ARREGLO BIDIMENCIONAL 
#include <iostream>
#include <iomanip>
using namespace std;

	int main(){
 	
	 	int matriz [3] [3] = {{1,2,3}, {4,5,6}, {7,8,9}};
	 	
	 	cout<<"       |	"<<"matriz completa"<<setw(5)<<"|"<<endl;
	 	for (int i=0; i<3; i++){
	 		for (int j=0; j<3; j++){
	 			cout<<setw(12)<<matriz [i][j];
	 		}
			 cout<<"\n";
		 }
	 	system ("pause");
	 	return 0;
	 }
