/******************************************************************************

tabla de mulriplicae

*******************************************************************************/
#include <stdio.h>

void main()
{
    int num, limite, cont=1, resultado;
    printf("Ingrese la tabla de multiplicar:");
    scanf("%d", &num);
    printf("Ingrese el limite:");
    scanf("%d",&limite);
    for(cont<=1;cont<=limite;cont++)
    {
        resultado=num*cont;
        printf("%d x %d = %d\n",num,cont,resultado);
        
    }

    return 0;
}
