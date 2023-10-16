#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,j,k=0;
	float matriz[3][12]={0},acu1=0,acu2=0,acu3=0,reca,acu[12]={0};
	while(j>0){
		printf("Ingrese el numero del Bondi: ");
		scanf("%d",&j);
		if(j>0){
			printf("Ingrese la Linea del Bondi: ");
			scanf("%d",&i);
			printf("Ingrese la recuadacion: ");
			scanf("%f",&reca);
			matriz[i-1][j-1]=reca;
			if(i-1==0){
				acu1+=reca;
			}
			else{
				if(i-1==1){
					acu2+=reca;
				}
				else{
					acu3+=reca;
				}
			}
			for(k=0;k<12;k++){
				if(j-1==k){
					acu[k]+=reca;
				}
			}
		}
	}
	for(i=0;i<12;i++){
		printf("N%d de coche recaudo: %.2f\n ",i+1,acu[i]);
	}
	printf("Recaudacion de la linea 1: %.2f\n",acu1);
	printf("Recaudacion de la linea 2: %.2f\n",acu2);
	printf("Recaudacion de la linea 3: %.2f\n",acu3);
	printf("Recaudacion total: %.2f\n",acu1+acu2+acu3);
	return 0;
}
