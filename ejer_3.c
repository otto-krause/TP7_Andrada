#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int matriz[2][3],acu=0,menor;
	for(int i=0;i<2;i++){
		for(int j=0; j<3;j++){
			printf("Ingrese el elmento%d%d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	printf("Matriz:\n");
	for(int i=0;i<2;i++){
		for(int j=0; j<3;j++){
			if(i==0){
				matriz[i][j]=matriz[i][j]*4;
			}
			if(j==2){
				matriz[i][j]=matriz[i][j]*3;
			}
			printf(" %d",matriz[i][j]);
			acu+=matriz[i][j];
			if(i==0&&j==0)
				menor=matriz[i][j];
			else{
					if(matriz[i][j]<menor)
						menor=matriz[i][j];
				}
		}
		printf("\n");
	}
	printf("Menor: %d\n",menor);
	printf("Suma: %d",acu);
	return 0;
}
