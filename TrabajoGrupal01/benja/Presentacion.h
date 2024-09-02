#include <stdio.h>

void benja_presentacion(){

	char nombre[100]="Benja";
	int edad=21;
	int coeficienteIntelectual = 300;
	double peso = 68;
	char hobbies[100] = "como";
	char secreto[100] = "me gusta comer";

	printf("Hola companierus, me llamo __, mi edad es de __ anios.\n",nombre,&edad);
	printf("mi coeficiente intelectual es de __ puntos y peso %lf grados de emocion.\n");
	printf("en mi tiempo libre yo __, y les comparto el secreto de que __\n");
}