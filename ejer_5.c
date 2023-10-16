#include <stdio.h>

int main(int argc, char *argv[]) {
	float alumnos[100][5],notaN,acu=0;
	int i,j,num,tri;
	char resp,resp2;
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			if(j==0)
				alumnos[i][0]=i+1;
			else{
				if(j==1){
					printf("Ingrese el nota del primer trimste: ");
					scanf("%f",&alumnos[i][1]);
				}
				else{
					if(j==2){
						printf("Ingrese el nota del segundo trimste: ");
						scanf("%f",&alumnos[i][2]);
					}
					else{
						if(j==3){
							printf("Ingrese el nota del trercer trimste: ");
							scanf("%f",&alumnos[i][3]);
						}
					}
				}
			}
		}
		acu=0;
	}
	printf("Quiere editar alguna nota S/N");
	scanf("%s",&resp);
	while(resp=='S' || resp=='s'){
		printf("ingrese nro de legajo: ");
		scanf("%d",&num);
		printf("ingrese nro de trimestre: ");
		scanf("%d",&tri);
		printf("ingrese la nueva nota: ");
		scanf("%f",&notaN);
		
		printf("la nota anterior es: %f",alumnos[num-1][tri]);
		printf("Desea continuar; S/N");
		scanf("%s",&resp2);
		if(resp2=='S' || resp=='s'){
			alumnos[num-1][tri]=notaN;
		}
		printf("Quiere editar alguna nota S/N");
		scanf("%s",&resp);
	}
	
	for(i=0;i<2;i++){
		for(j=1;j<5;j++){
			if(j==1)
			{acu=acu+alumnos[i][1];
			}
			if(j==2){
				acu=acu+alumnos[i][2];
			}
			if(j==3){
				acu=acu+alumnos[i][3];
			}
			if(j==4){
				alumnos[i][4]=acu/3;
			}
		}
		acu=0;
	}
	
	printf("Legajo Primer Segundo Tercer Promedio\n");
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("%.2f   ",alumnos[i][j]);
		}
		printf("\n");
	}
	return 0;
}
