#include <stdio.h>

int main (void)
{
    int height;
    
    do
    {
        printf("Height: ");
        scanf("%d", &height);   
        
    } while ( height < 1 || height > 8);
    

for (int i = 0; i < height; i++)  // esse for controla as linhas 
    {
        
        for (int j = 0; j < height - i - 1; j++) // esse for controla os espaços a esquerda do primeiro triangulo
        {
            printf(" "); 
        }

        for (int k = 0; k < i + 1; k++) // esse for controla os # do primeiro triangulo
        {
            printf("#");
        }
        
        printf("  "); 

        for (int l = 0; l < i + 1; l++) // esse for controla os # do segundo triangulo
        {
            printf("#");
        }
        printf("\n");
        
        
    }

    
   
}


