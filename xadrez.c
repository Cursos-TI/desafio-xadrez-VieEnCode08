#include <stdio.h>

    // Void da Torre
    void moverTorre (int t) {
        if (t > 0) {
            printf ("Direita\n");
            moverTorre (t - 1); // Decrementa 1 digito das 5 casas da Torre
        }
    }

    // Void da Rainha
    void moverRainha (int r) {
        if (r > 0) {
            printf ("Esquerda\n");
            moverRainha (r - 1); // Decrementa 1 digito das 8 casas da Rainha 
        }
    }

        int main () {
            
            // Declarando as variaveis das Peças
            int bispo = 1, cavalo = 1;

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
                
                // Case da Torre
                case 1:
                    printf ("\n");
                    printf ("Torre\n");
                    int torre = 5; // Faz com que Torre ande 5 casas
                    moverTorre (torre); // Puxa o void da Torre
                    break;
                
                // Case do Bispo
                case 2:
                    printf ("\n");
                    printf ("Bispo\n");
                        for (int bispo = 1; bispo <= 5; bispo++) { // Faz com que bispo ande 5 casas 
                            for (int bispo = 1; bispo <= 1; bispo++) { // Faz com que a cada loop "Direita" do bispo imprima 1 "cima"
                                printf ("Cima\n");
                            }
                            printf ("Direita\n");
                        }
                    break;
                
                // Case da Rainha
                case 3:
                    printf ("\n");
                    printf ("Rainha\n");
                    int rainha = 8; // Atribui a Rainha que ande 8 casas
                    moverRainha (rainha); // Puxa o void da Rainha 
                    break;
                
                // Case do cavalo
                case 4:
                    printf ("\n");
                    printf ("Cavalo\n");
                        for (int cavalo = 1, cavalo1 = 1; cavalo <= 2, cavalo1 <= 2 ; cavalo++, cavalo1++) { // Faz com que cavalo tenha um loop de 2 casas
                           printf ("Cima\n");
                           while (cavalo <= 2) {
                            if (cavalo == 2 ) { // Faz com que cavalo identifique as dua casa percorridas e mude uma casa pra esquerda
                                printf ("Esquerda\n");
                            }
                            break;
                           }
                        }
                    break;

                default:
                    printf ("Opção Inválida\n");
                    break;
                }
            return 0;
        }