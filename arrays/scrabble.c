#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(char word[]);

int main(void)
{
   
    char word1[50];
    char word2[50];

    // Solicitar ao usuário duas palavras
    printf("Insira sua palavra (Jogador 1): ");
    scanf("%s", word1);

    printf("Insira sua palavra (Jogador 2): ");
    scanf("%s", word2);

    // Calcular os pontos de cada palavra
    // Aqui eu só puxo a função para fazer a verificação de pontos 
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Imprimir o vencedor
    // Faço a verificação basica dos totais 
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie\n");
    }
}

int compute_score(char word[])
{
    int score = 0;

    //Aqui o strlen conta quantos caracteres até o '\0'
    int len = strlen(word);

    //pecorrer cada indice de i na string 
    for (int i = 0; i < len; i++)
    {
        //word[i] é cada caractere individual da palavra.
        if (isupper(word[i])) //se a word tiver letra maiuscula
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
       // No loop, se a letra for maiúscula(ou minuscula), o programa pega o valor ASCII da letra e subtrai o valor ASCII de 'A'.
       // O resultado dessa conta se torna o índice do array POINTS, que corresponde à letra no alfabeto.
       // Dessa forma, o índice acessa o número de pontos correto para aquela letra e soma esse valor ao total da palavra.
    }
    return score;
}
