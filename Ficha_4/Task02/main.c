#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int userValue;

    printf("Para sair digite um n�mero negativo ou maior que 100. \n\n");
    while (true)
    {
        printf("Digite um n�mero inteiro positivo at� 100: ");
        scanf("%d", &userValue);
        printf("O n�mero digitado foi: %d \n\n", userValue);

        if (!(userValue >= 0 && userValue < 101))
        {
            printf("Execu��o encerrada pelo utilizador.");
            return 0;
        }
    }
}
