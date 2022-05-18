#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
        printf("************************************************************** \n \n");
        printf("Este programa soma 2 numeros inteiros e apresenta o resultado. \n \n");
        printf("***************************************************************\n \n");

    printf("Introduza um numero inteiro e pressione enter: \n");
    scanf("%d", &num1);

    printf("Introduza outro numero inteiro e pressione enter: \n");
    scanf("%d", &num2);

    printf("A soma dos dois numeros introduzidos = %d \n", num1+num2);

    return 0;
}
