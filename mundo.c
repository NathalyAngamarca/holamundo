#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	char nombre[50];
	printf("Hola Mundo!!!");
	printf("Por favor, ingresa tu nombre: ");
    scanf("%s", nombre);  // Escaneamos el nombre del usuario
    printf("Hola, %s. ¡Bienvenido!\n", nombre);
}