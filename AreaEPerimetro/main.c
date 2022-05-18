#include <stdio.h>
#include <stdlib.h>

int main()
{
    float area, pi = 3.14, raio, perimetro;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    printf("Area: %.2f", area);
    printf("\nPerimetro: %.2f", perimetro);
}
