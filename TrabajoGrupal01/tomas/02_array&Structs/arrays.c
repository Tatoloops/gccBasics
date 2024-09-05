#include <stdio.h>


#define ARRAY_MAX 10
#define MATRIX_WIDTH_MAX 6
#define MATRIX_HEIGHT_MAX 8


int main(){

	// --- arrays ---

	// %d int
	// %s String (char [])

	int arrayDeNumeros[ARRAY_MAX];

	for (int i = 0;i<ARRAY_MAX;i++){
		printf("insertar numero %d: ",i+1);
		scanf("%d",&arrayDeNumeros[i]);	
	}
	
	printf("\nlista de numeros: ");
	for (int i = 0;i<ARRAY_MAX;i++){
		printf("%d ",arrayDeNumeros[i]);	
	}
	printf("\n");


	// ---- matrices ----

	// declaracion
	int matriz1 [MATRIX_HEIGHT_MAX][MATRIX_WIDTH_MAX];

	// asignar valores

	printf("\n");
	for (int i =0;i<MATRIX_HEIGHT_MAX;i++){
		printf("\n");
		for (int j=0;j<MATRIX_WIDTH_MAX;j++){

			printf("insertar valor en posicion [%d][%d]: ",i,j);
			scanf("%d",&matriz1[i][j]);


		}
	}

	printf("\n");
	for (int i =0;i<MATRIX_HEIGHT_MAX;i++){
		printf("\n");
		for (int j=0;j<MATRIX_WIDTH_MAX;j++){

			printf("insertar valor en posicion [%d][%d]: %d\n",i,j,matriz1[i][j]);


		}
	}

	printf("\n");
	for (int i =0;i<MATRIX_HEIGHT_MAX;i++){
		printf("\n");
		for (int j=0;j<MATRIX_WIDTH_MAX;j++){

			printf("%5d  -  ",matriz1[i][j]);


		}
	}


	// imprimir por pantalla
	printf("\n");
	return 0;
}