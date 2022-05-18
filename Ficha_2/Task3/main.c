#include<stdio.h>
int main(void)
{
    float soma_idades_turma = 0.0;
    float idade;
    int tamanho_da_turma = 0;
    int resp;

    do
    {
        printf("\n Digite a idade de um novo aluno(a) ");
        scanf("%f",&idade);

        soma_idades_turma =  soma_idades_turma + idade;
        tamanho_da_turma = tamanho_da_turma  + 1;

        printf("DIGITE 1 PARA CONTINUAR ou qualquer valor para continuar: ");
        scanf("%d", &resp);

    }
    while (resp == 1);

    printf("\nA media de idade da turma eh: %.2f ", (soma_idades_turma/tamanho_da_turma));
}

// O erro estava na linha 22, o sinal de != fazia com que qualquer valor, exceto 1, fosse aceito para o laço DO-WHILE continuar.
