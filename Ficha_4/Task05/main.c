#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 1;

    for (number; number < 100; number++)
    {
        if (number % 2 != 0)
        {
            printf("%d, ", number);
        }
    }
}
