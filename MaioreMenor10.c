#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    printf("Digite Primeiro Numero: ");
    scanf("%i", &numero);

    printf("Digite outro numero: ");
    scanf("%i", &numero);

    if (numero >= 10)
    {
        printf("Igual a 10");
    }
    else if (numero < 10)
    {
        printf("Menor que 10");
    }
    else
    {
        printf("Maior que 10");
    }

    return 0;
}
