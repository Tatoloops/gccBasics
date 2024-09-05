#include <stdio.h>

#define MATRIX_WIDTH_MAX 3
#define MATRIX_HEIGHT_MAX 4


int main(){

	// const int width=5;
	// const int height=4;

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
}