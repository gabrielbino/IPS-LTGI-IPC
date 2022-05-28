#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 60;
    int result = 0;

    do
    {
        if (cont % 2 == 0)
        {
            printf("contador: %d\n", cont);
            result += cont;
            printf("Resultado: %d\n", result);
        }
        cont -= 2;
        printf("Contador: %d\n", cont);
    } while (cont > 0);
}
