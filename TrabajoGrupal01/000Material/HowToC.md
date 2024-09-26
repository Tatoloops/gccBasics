# Como trabajar con C

## --- Compilar ---

gcc "archivo.c" -o "executable.exe"

## --- Syntax para incluir librerias ---

#include <stdio.h>  -> standard input output
#inlucde <stdlib.h> -> librearia standard

#include <stdbool.h> -> boolean type library
#include <string.h>	-> librearia para trabajar con strings
#include <math.h> -> para utilizar comandos de matematica avanzados, asi como random numbers.

#include <time.h> -> trabajar con el tiempo
#include <windows.h> -> para comandos especificos de windows


## --- Syntax ---

### if / else

	if (i == 20){
		//cuerpo
	}
	else if( condition ){
		//cuerpo
	}
	else if( condition ){
		//cuerpo
	}
	else{
		//cuerpo
	}

### loops

* for loop
	for (int i=0; i<10;i++){

	}

* while loop

	while (condition){
		//cuerpo
	}


* do-while loop
	do {
		//cuerpo
	}
	while( condition );



### funciones

	{dataType} {nombreFuncion}({dataType arg0, dataType arg1}) {

		//cuerpo de la function
		return {dataTypeInstance};
	}

ejemplo:

	int sumarDosNumeros(int num1, int num2){
		int sumaTotal;
		sumaTotal= num1+ num2;
		return sumaTotal;
	}

#### funcion main

	int main(int args, char* argc[]){

		return 0;
	}


## --- clase 01: dataTypes --- 

### declarando variables

	int numero= 5;
	float numeFloat= 5.5;
	double numDouble = 5.5;
	char caracter = 'c';

	//string data type.
	char frase[] = "soy una frase";

### printf & scanf

* scanf numero:

	int numero;
	scanf("%d",&numero);

* scanf string (SIN ESPACIOS)

	char nombre[20];
	scanf("%s",nombre);


* printf "hola mundo"

	printf("hola mundo");


* printf numeros enteros (int %d)
	int cinco=5;
	printf("imprimir numero cinco: %d",cinco);

* printf char[] (strings %s)

	char frase[]= "hola soy sebas";
	printf("imprimir frase: %s",frase);

* comandos dentro de un string

\n -> salto de linea
\0 -> fin de frase
\\ -> backslash
\" -> doble comillas


## --- clase 02 arrays & Structs --- 

En C no existen los datos privados, ni protected, en C, todo es public access.
No existen las clases.

### arrays

	//declaracion

	dataType arrayName[n];

	//example:

	int listaNumeros[10];



	//acceder a los valores y asignar.
	listaNumeros[0]=51;
	listaNumeros[1]=1;
	listaNumeros[2]=61;
	listaNumeros[3]=833;
	...
	listaNumeros[9]=833;


	//imprimir array

	for (int i=0;i<10;i++){
		printf("%d ",listaNumeros[i]);
	}

### matrix

	//declaration
	dataType matrixName[n][m];


	//example:
	double matriz[5][4];

	//acceder a los valores de la matriz y asignacion

	matriz[4][1] = 161;

	for(int j =0;j<5;j++){
		for (int i=0;i<4;i++){

			matriz[j][i]=24.61		//agregar valor, puede ser aleatorio, o con un    scanf("%lf",&matriz[j][i]);

		}
	}


### structs

	// TIPO A
	struct structName{
		dataType variableName;
		dataType variableName;
		dataType variableName;
		dataType variableName;
	};


	//declaracion y uso

	struct arbol{
		int numHojas;
		int altura;
		char nombre[20]
	};


	sizeof(dataType/structType); -> devuelve el numero de bytes que utiliza dicha estructura/dataType.
	typedef algo nuevoNombreDeAlgo; -> le otorga un nuevo nombre o definicion a alguna estructura, tipo de variable, etc.
	struct -> crear variable.
	