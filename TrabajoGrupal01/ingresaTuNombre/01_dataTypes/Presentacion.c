#include <stdio.h>

void presentacion(){

	char nombre[]="miNombre";
	int edad=123;
	int coeficienteIntelectual=12525;
	double peso=512;
	char hobbies[]="me gusta comer pizza";
	char secreto[]="ayer me comi chocooate"; 

	printf("Hola companierus, me llamo %s, mi edad es de %d anios.\n",nombre,edad);
	printf("mi coeficiente intelectual es de %d puntos y peso %lf grados de emocion.\n",coeficienteIntelectual,peso);
	printf("en mi tiempo libre yo %s, y les comparto el secreto de que %s\n",hobbies,secreto);
}

int main (){

	presentacion();
	return 0;
}
