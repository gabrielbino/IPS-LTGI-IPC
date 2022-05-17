#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num_computador, num_usuario, cont;

    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=\n");
    printf("Maquina: escolhi um numero entre 0 e 20\n");

    srand(time(0));
    num_computador = rand() % 20;

    printf("Tente adivinhar...\n");
    printf("=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=x=\n");

    do
    {
        printf("Escolha do usuario: ");
        scanf("%d", &num_usuario);
        cont += 1;
    }
    while(num_usuario != num_computador);

    printf("Parabens, voce acertou! O numero eh >> %d", num_computador);
    printf("\nNumero de tentativas: %d", cont);
}
