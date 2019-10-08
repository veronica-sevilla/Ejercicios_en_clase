/******************************************************************************

escribir mayor o menor edad

*******************************************************************************/
#include <stdio.h>

void main()
{
    int edad;
    char nombre[10];
    printf("Ingrese su nombre:");
    scanf("%s", &nombre);
    printf("Ingrese su edad:");
    scanf("%d", &edad);
    if(edad>=18)
        printf("%s es Mayor de Edad", nombre);
    else 
        printf("%s es Menor de Edad", nombre);

}

