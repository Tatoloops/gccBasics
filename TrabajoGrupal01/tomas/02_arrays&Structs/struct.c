#include <stdio.h>

//#include <string.h>

typedef struct{
	int x;					//4 bytes
	int y;					//4 bytes
}position;

typedef struct{
	char nombre[20];				//20 bytes
	int edad;						//4 bytes
	position positionEnMapa;		//8 bytes  -> 20 + 4 + 8 = 32
}persona;	



persona constructorDePersona(char* _nombre, int _edad, int _x, int _y){

	persona pers1;

	//crear una persona para devolver.

	// copiar nombre 
	for(int i = 0 ; i<19;i++){
		pers1.nombre[i]=_nombre[i];
	}
	pers1.nombre[19]='\0';

	pers1.edad=_edad;
	pers1.positionEnMapa.x=_x;
	pers1.positionEnMapa.y=_y;


	return pers1;
}

void imprimirPersona(persona weon){
	printf("nombre: %s\n",weon.nombre);
	printf("edad: %d\n",weon.edad);
	printf("position: %d, %d",weon.positionEnMapa.x,weon.positionEnMapa.y);
}



int main(){

	// position pos1;
	// pos1.x=5;
	// pos1.y=76;

	

	// java:    persona eseWeon = new eseWeon();

	// int tamanio=sizeof(persona);


	// printf("tamanio clase persona: %d",tamanio);



	//crear al weon
	persona eseWeon = constructorDePersona("juan pablo",18,125,23627);

	//imprimir al weon.
	imprimirPersona(eseWeon);

	return 0;
}