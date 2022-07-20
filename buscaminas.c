#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void generar_matriz_aleatoria(int dificultad,int matriz[12][12]);
void imprimir_matriz_visual(char matriz[12][12]);
void llenar_matriz(char matriz[12][12]);
int examinar_matriz(int opcion, char matrizvis[12][12],int matrizreal[12][12]);
void editar_matriz(int p,int i, int j, char matriz[12][12]);
int comprobar_si_gano(int nivel,char matriz_visual[12][12],int matrizreal[12][12]);
void perdiste(char matrisviz[12][12], int matrizreal[12][12]);

int main(){
	int matriz[12][12]={0};
	int dificultad,i,j,band,bomba=0,gano=0;
	char matrizvis[12][12];
	char continuar;
	
do{
	printf("-Introduzca el nivel \n\n  1.Facil     20 minas\n  2.Medio     30 minas\n  3.Dificil   40 minas\n");

	do{
	scanf("%d",&dificultad);
	
		switch(dificultad){
		case 1 : dificultad= 20; break;
		case 2 : dificultad= 30; break;
		case 3 : dificultad= 40; break;
	}
    }while( dificultad!=20 && dificultad!=30 && dificultad!=40);
    

    generar_matriz_aleatoria(dificultad,matriz);
    
	llenar_matriz(matrizvis);
   
   do{
   
     system("cls");
    imprimir_matriz_visual(matrizvis);
    printf("\nQue desea hacer.\n1.explotar   2.marcar   3.salir  (i,j) ");
    do{
    scanf("%d",&band);
    }while(band != 2 && band != 3 && band != 1 );
    
    if(band==1 || band==2)
    bomba = examinar_matriz (band,matrizvis, matriz);
    gano=comprobar_si_gano(dificultad, matrizvis,matriz);
     
}while(band!=3 && bomba==0 && gano==0);
    
    system("cls");
    
    if(bomba==1 && band!=3){
	perdiste(matrizvis,matriz);
	imprimir_matriz_visual(matrizvis);
	printf("\n\nHas perdido");
	}
    	
    	
    	
    
    else
	if(gano==1)
    printf("Has ganado");
    
	
	printf("\nPresione ""c"" para continuar, o cualquier letra para salir");
    
    continuar=getch();
    system("cls");
    
    
    }while(continuar=='c');
    
return 0;
}


void generar_matriz_aleatoria(int dificultad, int matriz[12][12] ){
	int cont,e=0;
	int i[50], j[50];
	
	srand(time(NULL));
	
	for(cont=0; cont< dificultad+10;cont++){
	i[cont] =   rand() % (12);}
	
	
	for(cont=0; cont< dificultad+10;cont++){
	j[cont] =   rand() % (12);}
	
	
	for(cont=0; cont<dificultad;cont++){
		
		if (matriz[i[cont]][j[cont]]==0)
		matriz[i[cont]][j[cont]]=1;
		else{
			while(matriz[i[cont]][j[cont+e]]==1)
			e=e+1;
			matriz[i[cont]][j[cont+e]]=1;
		}
		
	}
	}
	 void imprimir_matriz_visual(char matriz[12][12]){
		  int i,j,num;
		 
	 	 for(num=0;num<12;num++)
	 	 printf("%d  ",num);
	 	 printf("\n\n");
	 	 for(i=0;i<12;i++){
	 	 	for(j=0;j<12;j++){
	 	 	printf("%c  ",matriz[i][j]);
			  }
	 	 	printf(" %d\n",i);
	 	 	
		  }	
	 }
	 void llenar_matriz(char matriz[12][12]){
	 	 int i,j;
		  
		  for(i=0;i<12;i++){
		  	for(j=0;j<12;j++){
		  		matriz[i][j]='*';
			  }
		  }
	 }
	
    int examinar_matriz (int opcion ,char matrizvis[12][12], int matrizreal[12][12]){
     	
     	int q,i,j,x,y,cont,cont2,xx,yy;
     	int contx[8]={-1,0,1,1,0,0,-1,-1};
     	int conty[8]={0,-1,0,0,1,1,0,0};
     	
     	if(opcion==2){
     		do{
     			 scanf("%d %d",&i,&j);
     			 
			 }while(i>11 || j>11);	
     		  editar_matriz( 9, i, j,matrizvis);	
			   return 0;	
		 }
		 else
     	{
     		do{
     			 scanf("%d %d",&i,&j);
     			 
			 }while(i>11 || j>11);	
			 
			 x=i; y=j;
     		
     		if(matrizreal[x][y]==1)
     		return 1;
     		
     		else{
     			cont=0;
     			q=0;
				 do{
     				
     				x= x+contx[cont];
     				y= y+conty[cont];
     				
     				if(x>=0 && x<12 && y>=0 && y<12){
     					
     					if(matrizreal[x][y]==1)
     					 q=q+1;
     				}
     				   cont=cont+1;
     				   
     					
					 }while(cont!=8);
     				
     				editar_matriz( q,i, j,matrizvis);
     				if(q==0){
     					x=i; y=j;
     					for(cont=0;cont<8;cont++){
     						x=x+contx[cont];
     						y=y+conty[cont];
     						if(x>=0 && x<12 && y>=0 && y<12){
     					    	xx=x; yy=y;cont2=0;
     					    	q=0;
							 for(cont2=0;cont2<8;cont2++)
     						{
     								xx=xx+contx[cont2];
     						        yy=yy+conty[cont2];
     						        
     						
     						  if(xx>=0 && xx<12 && yy>=0 && yy<12){
     					       if(matrizreal[xx][yy]==1)
     					       q=q+1;	
     							
							 }
							 editar_matriz( q,x, y,matrizvis);	
						 }	
     				}	
					}
					 } 
     			}
     				return 0;
				 }
	            	}
		 }
     	


	void editar_matriz(int q, int i, int j, char matriz[12][12]){
		
		switch(q){
		
		case 0: matriz[i][j]='0'; break;
		case 1: matriz[i][j]='1'; break;
		case 2: matriz[i][j]='2'; break;
		case 3: matriz[i][j]='3'; break;
		case 4: matriz[i][j]='4'; break;
		case 5: matriz[i][j]='5'; break;
		case 6: matriz[i][j]='6'; break;
		case 7: matriz[i][j]='7'; break;
		case 8: matriz[i][j]='8'; break;
		case 9: matriz[i][j]='?'; break;
}
	}

	
int comprobar_si_gano(int nivel,char matriz_visual[12][12],int matrizreal[12][12]){
	
	int i,j,bombas=0;
	
	for(i=0;i<12;i++){
	for(j=0;j<12;j++){
    if(matriz_visual[i][j]=='?'&& matrizreal[i][j]==1)
    bombas= bombas +1;
	}
}
	
	if(bombas==nivel)
	return 1;
	else 
	return 0;	
}



void perdiste(char matrizvis[12][12], int matrizreal[12][12]){
	
	int i,j;
	
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++){
		if(matrizreal[i][j]==1)
		matrizvis[i][j]='x';
		
	}
}
}
	
