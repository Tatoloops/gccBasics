//Two gangsters

#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	int cansShot;
	int cansToShoot;
}Gangster;

int main(){

// creando gangster 1
Gangster gang1;
strcpy(gang1.name, "Harry");


// creando gangster 2
Gangster gang2;

gang2.name[0] = 'L';
gang2.name[1] = 'a';
gang2.name[2] = 'r';
gang2.name[3] = 'r';
gang2.name[4] = 'y';
gang2.name[4] = '\0';



// escanear el input
scanf("%d",&gang1.cansShot);

scanf("%d",&gang2.cansShot);
	

// calcular cuantas latas no disparo cada uno

gang1.cansToShoot= gang2.cansShot-1;
gang2.cansToShoot= gang1.cansShot-1;



//imprimir las latas no disparadas por cada uno

printf("%d %d",gang1.cansToShoot,gang2.cansToShoot);


	return 0;
}