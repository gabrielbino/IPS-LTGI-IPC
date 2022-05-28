#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, soma;
    int cont = 0;

    printf("x=x=x=x= SOME AQUI SEU SALÁRIO x=x=x=x= \n");
    printf("Para sair digite 0 ou um valor negativo. \n\n");
    while (true)
    {
        printf("Digite o valor do salário: ");
        scanf("%f", &salario);

        cont += 1;

        if (salario <=0)
        {
            break;
        }
        soma += salario;
    }
    printf("\nSoma dos salários: R$ %.2f \n", soma);
    printf("A quantidade de salários somados foram: %d \n", (cont - 1));
}
