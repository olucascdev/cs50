#include <stdio.h>
#include <math.h>

int main(void)
{
    float troco;
    do
    {
        printf("Troco Devido: ");
        scanf("%f", &troco);
    }
    while (troco < 0);

    int centavos = round(troco * 100);
    int moedas = 0;

    if(centavos >=25)
    {
        moedas += centavos / 25;
        centavos = centavos % 25;
    }
    printf("moedas: %i\n", moedas);
}