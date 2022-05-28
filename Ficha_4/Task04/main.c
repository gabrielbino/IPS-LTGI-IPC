#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int cont, number, fatorial;

    printf("=x=x=x= Fatorial =x=x=x= \n \n");

    printf("Digite um número positivo maior que 1: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("Valor inválido.");
        return 0;
    }

    cont = number;
    fatorial = 1;

    printf("%d! = ", cont);

    for (cont; cont > 0; cont -= 1)
    {
        printf("%d", cont);

        if (cont > 1)
        {
            printf(" x ");
        }
        else
        {
            printf(" = ");
        }

        fatorial *= cont;
    }

    printf("%d \n", fatorial);
}
