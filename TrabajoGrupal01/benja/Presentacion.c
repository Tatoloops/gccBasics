#include <stdio.h>

void benja_presentacion(){

	char nombre[]="Benja";
	int edad=21;
	int coeficienteIntelectual = 300;
	double peso = 68;
	char hobbies[] = "como";
	char secreto[] = "me gusta comer";

	printf("Hola companierus, me llamo %s, mi edad es de %s anios.\n",nombre,edad);
	printf("mi coeficiente intelectual es de %d puntos y peso %lf grados de emocion.\n",coeficienteIntelectual,peso);
	printf("en mi tiempo libre yo %s, y les comparto el secreto de que %s\n",hobbies,secreto);
}

int main (){

	benja_presentacion();
	return 0;
}