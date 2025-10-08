#include <stdio.h>

    int main () {
        
        // Declarando as variaveis das Peças
        int torre = 1, bispo = 1, rainha = 1, cavalo =1;

        // Variaveis dos switch
        int jogador, pecas;

            // Menu Inicial
            printf ("=====Bem-Vindo ao Jogo de Xadrez=====\n\n");
            printf ("1- Começar Jogo\n");
            printf ("2- Regras\n");
            printf ("3- Sair do Jogo\n");
            printf ("Escolha uma das Opção: ");
            scanf ("%d", &jogador);

            // Lógica do Menu
            switch (jogador) {
            case 1:
                printf ("\nComeçando o Jogo...\n");
                break;
            case 2:
                printf ("\nRegras:\n");
                printf ("Torre: Anda 5 casas, horizontalmente ou verticalmente.\n");
                printf ("Bispo: Anda 5 casas na diagonal.\n");
                printf ("Rainha: Anda 8 casas nas diagonais, horizontalmente ou verticalmente.\n");
                printf ("Cavalo: anda 2 casas e 1 pra esquerda, na horizontal ou vertical.\n");
                break;
            case 3:
                printf ("Saindo do Jogo...\n");
                break;
            default:
                printf ("Opção Inválida\n");
                break;
            }
            
            // Escolha das Peças
            printf ("\n=====Peças=====\n\n");
            printf ("1- Torre\n");
            printf ("2- Bispo\n");
            printf ("3- Rainha\n");
            printf ("4- Cavalo\n");
            printf ("Escolha uma peça pra começar: ");
            scanf ("%d", &pecas);

            // Lógica do Jogo
            switch (pecas) {
            case 1:
                printf ("\n");
                printf ("Torre\n");
                while (torre <= 5) {
                    printf ("Direita\n");
                    torre++;
                }
                break;
            case 2:
                printf ("\n");
                printf ("Bispo\n");
                do {
                    printf ("Cima, Direita\n");
                    bispo++;
                } while (bispo <= 5);
                break;
            case 3:
                printf ("\n");
                printf ("Rainha\n");
                for (int rainha = 1; rainha <= 8; rainha++) {
                    printf ("Esquerda\n");
                }
                break;
            case 4:
                printf ("\n");
                printf ("Cavalo\n");
                while (cavalo <= 1)
                {
                    for (cavalo = 1; cavalo <= 2; cavalo++)
                    {
                        printf ("Baixo\n");
                    }
                    
                    printf ("Esquerda\n");
                    cavalo++;
                }
                break;
            default:
                printf ("Opção Inválida\n");
                break;
            }
        return 0;
    }