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
    while (troco <= 0);

    troco = round(troco * 100);
    int moedas = 0;

    while(troco >= 25)
    {
        moedas++;
        troco = troco - 25;
    }

    while(troco >= 10)
    {
        moedas++;
        troco = troco - 10;
    }
    
    while(troco >= 5)
    {
        moedas++;
        troco = troco - 5;
    }

    while(troco >= 1)
    {
        moedas++;
        troco = troco - 1;
    }

    printf("moedas: %i\n", moedas);
}