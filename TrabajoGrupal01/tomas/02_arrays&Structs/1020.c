#include <stdio.h>
#include <math.h>

// typedef int entero;
// typedef double realNumber;


typedef struct{
	double x;
	double y;
} nail;

// struct clavo{
// 	double x;
// 	double y;
// };



int main(){

	nail myNail1;
	//struct clavo myClavo1;

	myNail1.x=55.527;
	myNail1.y=13.01;


	printf("posicion del nail 1 es: %.2lf %.1lf",myNail1.x,myNail1.y);

	return 0;
}