/******************************************************************************

realizar un programa que permita convertir de grados a centigrados

*******************************************************************************/
#include <stdio.h>

void main()
{
    float cent, fahr, gradosCent=0,gradosFahr=0;
    int op;
    printf("Menu Principal .1Grados centigrados a fahrenheit 2.grados fahrenheit a centigrados");
    printf("Escoja una opcion:");
    scanf("%d", &op);
    if(op==1)
    {
        printf("Ingrese los grados centigrados:");
        scanf("%f", &cent);
        gradosFahr=((cent*9)/5)+32;
        printf("Grados fahrenheit:%.2f", gradosFahr);
    }
    else
    {
        printf("ingrese los grados fahrenheit:");
        scanf("%f", &fahr);
        gradosCent=((fahr-32)*5)/9;
        printf("Grados centigrados:%.2fn",gradosCent);
    }
    
}


