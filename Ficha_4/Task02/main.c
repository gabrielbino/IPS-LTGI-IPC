#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int userValue;

    printf("Para sair digite um número negativo ou maior que 100. \n\n");
    while (true)
    {
        printf("Digite um número inteiro positivo até 100: ");
        scanf("%d", &userValue);
        printf("O número digitado foi: %d \n\n", userValue);

        if (!(userValue >= 0 && userValue < 101))
        {
            printf("Execução encerrada pelo utilizador.");
            return 0;
        }
    }
}
