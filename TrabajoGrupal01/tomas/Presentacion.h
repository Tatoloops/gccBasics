#include <stdio.h>
#include <string.h>

#define MACRO1 40



void tomas_presentacion(){

	char frase[2048];
    char nombre[10];
    int edad;
    int coeficienteIntelectual;
    double peso;
    char hobbies[50];
    char secreto[40]; 

    printf("\ningrese su nombre: ");
    scanf("%9s", nombre); // Limit input to avoid buffer overflow
    printf("\nedad: ");
    scanf("%d", &edad);
    printf("\ncoeficiente intelectual: ");
    scanf("%d", &coeficienteIntelectual);
    printf("\npeso de mi cerebro: ");
    scanf("%lf", &peso); // Correct format specifier for double
    getchar(); // Clear newline left in buffer after scanf

    printf("\nque me gusta hacer en mi tiempo libre: ");
    fgets(hobbies, sizeof(hobbies), stdin); // Read a line including spaces

    // Remove newline character if fgets reads one
    size_t len = strlen(hobbies);
    if (len > 0 && hobbies[len - 1] == '\n') {
        hobbies[len - 1] = '\0';
    }

    printf("\ncomparte un secreto intimo: ");
    fgets(secreto, sizeof(secreto), stdin); // Read a line including spaces

    // Remove newline character if fgets reads one
    len = strlen(secreto);
    if (len > 0 && secreto[len - 1] == '\n') {
        secreto[len - 1] = '\0';
    }
    
    printf("Hola companierus, me llamo %s, mi edad es de %d anios.\n", nombre, edad);
    printf("mi coeficiente intelectual es de %d puntos y peso %.2f grados de emocion.\n", coeficienteIntelectual, peso);
    printf("en mi tiempo libre yo %s, y les comparto el secreto de que %s\n", hobbies, secreto);



	//export to a text file

}