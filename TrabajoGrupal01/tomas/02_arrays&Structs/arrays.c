#include <stdio.h>


#define ARRAY_MAX 10

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


	
	return 0;
}