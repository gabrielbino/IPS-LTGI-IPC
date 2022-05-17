#include <stdio.h>
#include <stdlib.h>

float persist;
int i = 1;

int main()
{
    float nota;

    for (i; i < 4; ++i)
    {
        printf("Digite a nota %d: ", i);
        scanf ("%f", &nota);
        persist += nota;
    }

    for (i; i < 8; ++i)
    {
        printf("Valor da soma: %.2f\n", persist);
    }
}
