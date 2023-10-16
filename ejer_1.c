#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(int argc, char *argv[]) {
	int matriz[2][3];
	for(int i=0;i<2;i++){
		for(int j=0; j<3;j++){
			printf("Ingrese el elmento%d%d: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	printf("Matriz:");
	for(int i=0;i<2;i++){
		for(int j=0; j<3;j++){
			printf(" %d",matriz[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}

