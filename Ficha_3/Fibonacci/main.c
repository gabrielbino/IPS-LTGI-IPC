#include <stdio.h>
#include <stdlib.h>

int main()
{
    int termo1, termo3;
    int termo2 = 1;

    printf("x=x=x=x=x Sequencia de Fibonacci =x=x=x=x=x\n");
    printf("=x=x=x=x= 10 primeiros numeros x=x=x=x=x=x=\n");

    printf("%d -- %d -- ", termo1, termo2);
    for (int i; i < 8; i++)
    {
        termo3 = termo1 + termo2;
        printf("%d -- ", termo3);
        termo1 = termo2;
        termo2 = termo3;
    }
    printf("FIM!");
}
