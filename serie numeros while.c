/******************************************************************************

realizar un programa que permita generar n numeros enteros

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1, nnum, suma=0;
    printf("Cuantos numeros va ingresar:");
    scanf("%d", &nnum);
    while(cont<=nnum)
    {
        suma=suma+cont;
        printf("%d\n", cont);
        cont++;
    }
    printf("La suma de %d numeros es %d\n", nnum, suma);
}
