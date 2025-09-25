#include <stdio.h>
#include <string.h>

int main (){


    // 1. Declaração de Variáveis
    
    int mover_peca; // Variável de Escolha

    // Variáveis de modo para torre
    int escolha_torre;
    char lado_torre[50];
    int casas_torre;
    // Variáveis de modo para bispo
    int escolha_bispo;
    char lado_bispo[50];
    int casas_bispo;
    // Variáveis de modo para rainha
    int escolha_rainha;
    char lado_rainha[50];
    int casas_rainha;
    // Variáveis de modo para Cavalo
    int cavalo_vertical;
    int cavalo_horizontal;
    char lado_cavalo_vertical[50];
    char lado_cavalo_horizontal[50];
    

    do
    {
        
        // 1.1. Boas Vindas e Exibição do Menu para escolha da peça a ser movida
        printf("\n\n*** Seja Bem-Vindo ao Xadrez interativo da MateCheck! ***\n\n");

         
        printf("\n\n*** MENU DE PEÇAS DE XADREZ ***\n\n");

        printf("Por favor, escolha uma peça para mover:\n\n");

        printf("1. Torre (Movimento horizontal/vertical)\n");
        printf("2. Bispo (Movimento diagonal)\n");
        printf("3. Rainha (Movimento em todas as direcoes)\n");
        printf("4. Cavalo (Movimento em L)\n");
        printf("5. Sair\n\n");

        // Solicita a opção que representa a peça a ser movida
        printf("Digite o número que representa sua escolha: ");
        scanf("%d", &mover_peca);

        // 2. Uso de Switch Condicional para cada Opção
        switch (mover_peca)
        {
        case 1: // Torre
            
            // 2.1. Exibição do Menu exibindo todos os possíveis lados da torre
            printf("Por favor, escolha um lado para mover a torre:\n\n");

            printf("1. Cima\n");
            printf("2. Baixo\n");
            printf("3. Esquerda\n");
            printf("4. Direita\n\n");

            printf("\nDigite o número que representa o lado para sua torre se mover: ");
            scanf("%d", &escolha_torre);

            // Lógica para transformar a opção digitada no lado literal (Ex.: Cima)

            if (escolha_torre == 1) // Se escolha_torre for 1, então lado_torre será "cima"
            {
                strcpy(lado_torre, "Cima");

            } else if (escolha_torre == 2)
            {
                strcpy(lado_torre, "Baixo");

            } else if (escolha_torre == 3)
            {
                strcpy(lado_torre, "Esquerda");
            } else if (escolha_torre == 4)
            {
                strcpy(lado_torre, "Direita");
            } else
            {
                strcpy(lado_torre, "Posição inválida!");
            }       
            
            // Solicita ao usuário quantas casas a peça será movida
            printf("\nAgora, digite a quantidade de casas que a torre irá se mover: ");
            scanf("%d", &casas_torre);
            
            // 2.3. Loop For para exibir o lado e as casas de acordo com o número de casas digitadas
            for (int i = 1; i <= casas_torre; i++)
            {
                printf("Movendo %d casas para %s\n", i, lado_torre);
            }
            break;

        case 2: // Bispo
            
            printf("Por favor, escolha um lado para mover o Bispo:\n\n");

            printf("1. Diagonal Superior Esquerda\n");
            printf("2. Diagonal Superior Direita\n");
            printf("3. Diagonal Inferior Esquerda\n");
            printf("4. Diagonal Inferior Direita\n\n");

            printf("\nDigite o número que representa o lado para sua torre se mover: ");
            scanf("%d", &escolha_bispo);

            if (escolha_bispo == 1)
            {
                strcpy(lado_bispo, "Diagonal Superior Esquerda");

            } else if (escolha_bispo == 2)
            {
                strcpy(lado_bispo, "Diagonal Superior Direita");

            } else if (escolha_bispo == 3)
            {
                strcpy(lado_bispo, "Diagonal Inferior Esquerda");
            } else if (escolha_bispo == 4)
            {
                strcpy(lado_bispo, "Diagonal Inferior Direita");
            } else
            {
                strcpy(lado_bispo, "Posição inválida!");
            }       
            
            printf("\nAgora, digite a quantidade de casas que seu bispo irá se mover: ");
            scanf("%d", &casas_bispo);          

            
            // Inicializa a variável de controle i com 1
            int i = 1;


            // Enquanto i for menor que o número de casas digitadas pelo usuário
            // Será impresso o mesmo número de mensagens 
            while (i <= casas_bispo) 
            {
                printf("Movendo %d casas para %s\n", i, lado_bispo);
                i++;
            }            

            break;
        case 3: // Rainha

            int i_rainha = 1;
            
            printf("Por favor, escolha um lado para mover a rainha:\n\n");

            printf("1. Cima\n");
            printf("2. Baixo\n");
            printf("3. Esquerda\n");
            printf("4. Direita\n");
            printf("5. Diagonal Superior Esquerda\n");
            printf("6. Diagonal Superior Direita\n");
            printf("7. Diagonal Inferior Esquerda\n");
            printf("8. Diagonal Inferior Direita\n\n");


            printf("\nDigite o número que representa para qual lado você irá movimentar sua Rainha: ");
            scanf("%d", &escolha_rainha);

            if (escolha_rainha == 1)
            {
                strcpy(lado_rainha, "Cima");

            } else if (escolha_rainha == 2)
            {
                strcpy(lado_rainha, "Baixo");

            } else if (escolha_rainha == 3)
            {
                strcpy(lado_rainha, "Esquerda");
            } else if (escolha_rainha == 4)
            {
                strcpy(lado_rainha, "Direita");
            } else if (escolha_rainha == 5)
            {
                strcpy(lado_rainha, "Diagonal Superior Esquerda");

            } else if (escolha_rainha == 6)
            {
                strcpy(lado_rainha, "Diagonal Superior Direita");

            } else if (escolha_rainha == 7)
            {
                strcpy(lado_rainha, "Diagonal Inferior Esquerda");
            } else if (escolha_rainha == 8)
            {
                strcpy(lado_rainha, "Diagonal Inferior Direita");
            } else
            {
                strcpy(lado_rainha, "Posição inválida!");
            }

            printf("\nDigite a quantidade de casas que a Rainha irá se mover: ");
            scanf("%d", &casas_rainha);

            

            do // Loop Do-While garantindo a primeira exibição
            {
                printf("Movendo %d casas para %s\n", i_rainha, lado_rainha);
                i_rainha++;
            } while (i_rainha <= casas_rainha); // Repetindo até que a variável de controle for menor ou igual as casas
            

            break;
        case 4: // Cavalo
            
            printf("Por favor, escolha o lado vertical para mover o Cavalo:\n\n");

            printf("1. Cima\n");
            printf("2. Baixo\n");

            printf("\nDigite o número que representa o lado para sua cavalo se mover: ");
            scanf("%d", &cavalo_vertical);


            printf("\nAgora, escolha o lado Horizontal para mover o Cavalo:\n\n");

            printf("1. Esquerda\n");
            printf("2. Direita\n\n");

            printf("\nDigite o número que representa o lado para sua cavalo se mover: ");
            scanf("%d", &cavalo_horizontal);

            // Lógica para transformar a opção digitada no lado literal (Ex.: Cima)

            if (cavalo_vertical == 1) // 
            {
                strcpy(lado_cavalo_vertical, "Cima");

            } else if (cavalo_vertical == 2)
            {
                strcpy(lado_cavalo_vertical, "Baixo");

            } else {
                strcpy(lado_cavalo_vertical, "Posição inválida!");
            }

            if (cavalo_horizontal == 1)
            {
                strcpy(lado_cavalo_horizontal, "Esquerda");
            } else if (cavalo_horizontal == 2)
            {
                strcpy(lado_cavalo_horizontal, "Direita");
            } else
            {
                strcpy(lado_cavalo_horizontal, "Posição inválida!");
            }       
            
            int movimento_completo = 1;

            if (strcmp(lado_cavalo_vertical, "Cima") == 0)
            {
                while (movimento_completo--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                       printf("%s\n", lado_cavalo_vertical);
                    }
                    
                    printf("%s\n", lado_cavalo_horizontal);
                }
                
            } else if (strcmp(lado_cavalo_vertical, "Baixo") == 0)
            {
                while (movimento_completo--)
                {
                    for (int i = 0; i < 2; i++)
                    {
                       printf("%s\n", lado_cavalo_vertical);
                    }
                    
                    printf("%s\n", lado_cavalo_horizontal);
                }
                
            } else
            {
                printf("Lado Errado\n");
            }
            
            
            
            
            break;

        case 5: // Sair
            printf("\nSaindo do Jogo de Xadrez, volte sempre!\n");
            break;
        } 
        

    } while (mover_peca != 5);
    
    




    return 0;
}