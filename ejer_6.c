#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(){
	int habitantes[3][2]={0},i,j,acu=0,k=0;
	float promedio[3]={0};
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("Piso N%d ingrese la cantidad de habitantes en el departamento N%d \n",i+1,j+1);
			scanf("%d",&habitantes[i][j]);
			acu+=habitantes[i][j];
			for(k=0;k<3;k++){
				if(i==k){
					promedio[k]=promedio[k]+habitantes[i][j];
				}
			}
		}
	}
	
	printf("Total de habitantes: %d \n",acu);
	for(i=0;i<3;i++){
		printf("Promedio de piso %d de habitantes por piso: %.2f \n",i+1,promedio[i]/2);
	}
	return 0;
}
