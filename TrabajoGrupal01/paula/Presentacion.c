#include <stdio.h>

void paula_presentacion(){

	char nombre[]="Paula";
	int edad=21;
	int coeficienteIntelectual=100;
	double peso=52;
	char hobbies[]="me maquillo, juego videojuegos y gasto mi tiempo en vida haciendo pudriendome en mi cama";
	char secreto[]="es un secreto, asi que nada"; 

	printf("Hola companierus, me llamo %s, mi edad es de %d anios.\n",nombre,edad);
	printf("mi coeficiente intelectual es de %d puntos y peso %lf grados de emocion.\n",coeficienteIntelectual,peso);
	printf("en mi tiempo libre yo %s, y les comparto el secreto de que %s\n",hobbies,secreto);
}

int main (){

	paula_presentacion();
	return 0;
}
