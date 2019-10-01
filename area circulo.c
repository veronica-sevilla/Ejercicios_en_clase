/******************************************************************************

REALIZAR UN PROGRAMA EN C QUE DETERMINE EL AREA DEL CIRCULO.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define pi 3.1416

int suma(int a, int b);

void main()
{
    float radio, area=0;
    printf("Ingrese el radio");
    scanf("%f", & radio);
    area=pi*pow(radio,2);
    printf("El area es %.2f", area);

}


