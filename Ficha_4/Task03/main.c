#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int dia = 0;
    int mes = 0;
    int ano = 0;

    printf("Digite o dia: ");
    scanf("%d", &dia);

    scanf("%c");
    printf("Digite o mês: ");
    scanf("%d", &mes);

    printf("Digite o ano: ");
    scanf("%d", &ano);

    switch (mes)
    {
        case 2:
            if (dia > 0 && dia < 29)
            {
                printf("%d / %d / %d", dia, mes, ano);
            }
            else
            {
                printf("Data inválida");
            }
            break;

        case 1 || 3 || 5 || 7 || 8 || 10 || 12:
            if (dia > 0 && dia < 32)
            {
                printf("%d / %d / %d", dia, mes, ano);
            }
            else
            {
                printf("Data inválida");
            }
            break;

        default:
            if (mes > 12 || mes < 0)
            {
                printf("Data inválida");
            }
            else if (dia > 0 && dia < 31)
            {
                printf("%d / %d / %d", dia, mes, ano);
            }
            else
            {
                printf("Data inválida");
            }
            break;
    }
}
