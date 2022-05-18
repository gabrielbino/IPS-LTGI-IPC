#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int ano;
    SYSTEMTIME str_t;
	GetSystemTime(&str_t);

    int anoAtual = str_t.wYear; //variavel com o ano atual

    printf("************************************************************************** \n");
    printf("Este programa solicita sua data de nascimento e exibe sua idade na tela. \n");
    printf("************************************************************************** \n");

    printf("Digite o ano do seu nascimento: ");
    scanf("%d", &ano);

    printf("Sua idade com base na data de nascimento: %d", anoAtual-ano);

    return 0;
}
