#include <stdio.h>

int main(){

	printf("ingrese cantidad a mostrar de numero y sus combinaciones:\n");
	int numero;
	scanf("%d",&numero);


	printf("decimal -- hexadecimal -- octa\n -----------------------------\n");
	for (int i =0;i<numero;i++){
		printf(" %.02d    --    %.02x   --    %o\n",i,i,i);
	}

	return 0;
}