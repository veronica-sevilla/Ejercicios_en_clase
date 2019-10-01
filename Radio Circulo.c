/******************************************************************************

Realizar un programa en C que permita realizar el area de un circulo

*******************************************************************************/

#include <stdio.h> //definicion bibliotecas//
#define pi 3.1416 //definicion constantes//

void main() // Definicion de la funcion principal//

{
    float radio,area=0; //declaracion de variable//
    printf("Escriba el radio: "); //Impresion en pantalla//
    scanf("%f",&radio);//Lectura de variable radio//
    area=pi*radio*radio; //Proceso//
    printf("El area es %.2f", area); //Salida del area del circulo//
}
