#include <stdio.h>

void seba_presentacion(){

	char nombre[]="estudianteA";
	int edad=1;
	int coeficienteIntelectual=100;
	double peso=0.0;
	char hobbies[]="";
	char secreto[]=""; 

	printf("Hola companierus, me llamo __, mi edad es de __ anios.\n",nombre,&edad);
	printf("mi coeficiente intelectual es de __ puntos y peso %lf grados de emocion.\n");
	printf("en mi tiempo libre yo __, y les comparto el secreto de que __\n");
}

int main(){

	seba_presentacion();
	return 0;
}