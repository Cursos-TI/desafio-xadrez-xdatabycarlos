#include <stdio.h>

/*
Xadrez Interativo com Loops, recursividade e condicionais.

O código foi dividido em funções modulares para um melhor aproveitamento e menos repetição de código.

O Jogo simula o movimento das peças: Torre, Rainha, Bispo e Cavalo.

Foi implementado lógica para deixar o jogo dinâmico e interativo.

Modularização:

1. Função que define as 4 posições primitivas (Cima, Baixo, Direita e Esquerda).
2. Função e Obtenção e Validação de Direções Vertical (Cima e Baixo) e Horizontal (Esquerda e Direita).
3. Função de Obtenção e Validação da quantidade de Casas (< 8).
4. Função que Define a Peça ser movida.
5. Funções de Escolha de Movimento (Vertical, Horizontal ou Diagonal)
6. Funções que movem em si as peças.
*/

//1.  Define e direção com base no lado como parametro
const char* definirDirecao(int lado){
        
    switch (lado)
    {
    case 1:
        return "Cima";
    case 2:
        return "Baixo";
    case 3:
        return "Esquerda";
    case 4:
        return "Direita";
    }
}

// 2. Obtem e Valida as entradas Verticais
int validarVertical(){
    int vertical;
    do
    {
        printf("\n\nDigite a direção vertical (1 = Cima, 2 = Baixo): ");
        scanf("%d", &vertical);

        // Assegura que a entrada será especificamente 1 ou 2
        if (vertical !=1 && vertical !=2)
        {
            printf("\nDireção Inválida! Escolha (1) para Cima ou (2) para Baixo!\n"); 
        }
        
    } while (vertical != 1 && vertical != 2);
    return vertical;    
}

// 3. Obtem e Valida as entradas Horizontais
int validarHorizontal(){
    int horizontal;
    do
    {
        printf("\n\nDigite a direção horizontal (3 = Esquerda, 4 = Direita): ");
        scanf("%d", &horizontal);

        if (horizontal != 3 &&  horizontal != 4)
        {
            printf("\nDireção Inválida! Escolha (3) para Esquerda ou (4) para Direita!\n"); 
        }
        
    } while (horizontal != 3 && horizontal != 4);
    return horizontal;    
}

// 4. Obtem e valida a quantidade de casas que as peças iram percorrer
int validarCasas(){
    int casas;

    do
    {
        printf("\n\nDigite quantas casas a peça irá se mover (1 a 8): ");
        scanf("%d", &casas);

        // Assegura que só serão digitadas até 8 casas (que é o limite do tabuleiro de xadrez)
        if (casas < 1 || casas > 8)
        {
            printf("\nQuantidade Inválida! Escolha um número de 1 a 8 Casas!\n"); 
        }

    } while (casas < 1 || casas > 8);  
    return casas;
}

// 5. Exibe um menu interativo de peças para que o usuário escolha
int definirPeca(){
    int peca;

    do
    {
        printf("\nPor favor, escolha uma peça para mover:\n\n");

        printf("1. Torre (Movimento horizontal/vertical)\n");
        printf("2. Bispo (Movimento diagonal)\n");
        printf("3. Rainha (Movimento em todas as direcoes)\n");
        printf("4. Cavalo (Movimento em L)\n");
    

        // Solicita a opção que representa a peça a ser movida
        printf("Digite o número que representa sua escolha: ");
        scanf("%d", &peca);

        // Garante que as entradas obeceçam aos padrões
        if (peca < 1 || peca > 4)
        {
            printf("\nOpção Inválida! Escolha : \n");
            printf("(1) para Torre, (2) para Bispo, (3) para Rainha ou (4) para Cavalo!\n"); 
        }

    } while (peca < 1 || peca > 4);
    return peca;
}

/*
Como no xadrez temos 3 possíveis movimentos: Vertical (cima ou baixo), Horizontal (Esquerda ou Direita) e Diagonal
Temos 3 funções 1 para cada aspecto: 1 para os movimentos retos (vertical e horizontal), 
outra para os movimentos diagonais e uma ultima para lidar com a rainha.
*/
int escolherMovimentoReto(){
    int movimento;
    do
        {
            printf("\n\nDigite qual direção a peça irá se mover (1 = vertical ou 2 = horizontal): ");
            scanf("%d", &movimento);

            if (movimento != 1 && movimento != 2)
            {
                printf("\nDireção Inválida! Escolha (1) para Vertical ou (2) para Horizontal!\n"); 
            }
        } while (movimento != 1 && movimento != 2);
        return movimento;
}


int escolherMovimentoDiagonal(){
    int movimento;
    return 3;
}

int escolherMovimentoRainha(){
    int movimento;
    
    do
        {
            printf("\n\nDigite qual direção a Rainha irá se mover (1 = vertical, 2 = horizontal ou 3 = Diagonal): ");
            scanf("%d", &movimento);

            if (movimento < 1 || movimento > 3)
            {
                printf("\nDireção Inválida! Escolha (1) para Vertical, (2) para Horizontal ou (3) para Diagonal!\n"); 
            }
        } while (movimento < 1 || movimento > 3);
        return movimento;
}

// Inicio das Funções de movimento
void moverBispo(int casas, int vertical, int horizontal){
    
    for (int linha = 1; linha <= casas; linha++)
    {
        for (int coluna = 1; coluna <= casas; coluna++)
        {
           if (linha == coluna)
           {
                printf("%s e %s\n", definirDirecao(vertical), definirDirecao(horizontal));
           }      
        }
    }
}

void moverTorre(int casas, int lado){
    
    if (casas > 0)
        {
            const char* direcao = definirDirecao(lado);
            printf("%s\n", direcao);
            moverTorre(casas -1, lado); 
        }  
}

void moverRainhaReto(int casas, int lado){
    
    if (casas > 0)
        {
            const char* direcao = definirDirecao(lado);
            printf("%s\n", direcao);
            moverRainhaReto(casas -1, lado); 
        }
}

void moverRainhaDiagonal(int casas, int vertical, int horizontal){
    
    for (int linha = 1; linha <= casas; linha++)
    {
        for (int coluna = 1; coluna <= casas; coluna++)
        {
           if (linha == coluna)
           {
                printf("%s e %s\n", definirDirecao(vertical), definirDirecao(horizontal));
           }      
        }
    }
}

void moverCavalo(int tipo_movimento, int lado_v, int lado_h){
    

    if (tipo_movimento == 1 )
    {
        for (int i = 0; i < 2; i++)
        {
            printf("%s\n", definirDirecao(lado_v));
        }              
            printf("%s\n", definirDirecao(lado_h));
    } else
    {
        for (int i = 0; i < 2; i++)
        {
            printf("%s\n", definirDirecao(lado_h));
        }              
            printf("%s\n", definirDirecao(lado_v));
    } 
   
}

int main(){

    int opcao;
    int peca;
    
    

    do
    {
        printf("\n\n*** Seja Bem-Vindo ao Xadrez interativo da MateCheck! ***\n\n");

        printf("*** MENU PRINCIPAL ***\n\n");
        printf("1. Escolher Peça\n");
        printf("2. Sair\n");

        printf("\nDigite o número que representa sua escolha: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            peca = definirPeca();

            switch (peca)
            {
            case 1:
                
                printf("\n\n*** MOVER TORRE ***\n");

                printf("Você vai escolher: Nº de Casas, O tipo de movimento (Vertical ou Horizontal) e o Lado!\n");

                int casas_torre = validarCasas();
                int movimento_torre = escolherMovimentoReto();
                int lado_torre;

                if (movimento_torre == 1)
                {
                    lado_torre = validarVertical();
                } else
                {
                    lado_torre = validarHorizontal();
                }

                printf("\nMovendo a Torre...\n");
                moverTorre(casas_torre, lado_torre);            
                
                break;
            case 2:
                printf("\n\n*** MOVER BISPO ***\n");

                printf("Você vai escolher: Nº de Casas, Direção Vertical e a Direção Horizontal!\n");

                int casas_bispo = validarCasas();
                int lado_v = validarVertical();
                int lado_h = validarHorizontal();

                printf("\nMovendo o Bispo...\n");
                moverBispo(casas_bispo, lado_v, lado_h);
                break;
            case 3:
                printf("\n\n*** MOVER RAINHA ***\n");

                printf("Você vai escolher: \n");
                printf("Tipo de Movimento (Vertical, Horizontal ou Diagonal) \n");
                printf("Nº de Casas, Direção Vertical e a Direção Horizontal!");
                
                int movimento_rainha = escolherMovimentoRainha();
                int casas_rainha = validarCasas();
                

                if (movimento_rainha == 1 || movimento_rainha == 2)
                {
                    
                    int lado_rainha;

                    if (movimento_rainha == 1)
                    {
                        lado_rainha = validarVertical();
                    } else
                    {
                        lado_rainha = validarHorizontal();
                    }

                    printf("\nMovendo a Rainha...\n");
                    moverRainhaReto(casas_rainha, lado_rainha);             
                                            
                } else
                {
                    int lado_vRainha = validarVertical();
                    int lado_hRainha = validarHorizontal();

                    printf("\nMovendo a Rainha...\n");
                    moverRainhaDiagonal(casas_rainha, lado_vRainha, lado_hRainha);
                }               
                
                break;
            case 4:

                printf("\n\n*** MOVER CAVALO ***\n");

                printf("Você vai escolher: \n");
                printf("Tipo de Movimento (Vertical ou Horizontal) \n");
                printf("Nº de Casas, Direção Vertical e a Direção Horizontal!");

                int movimento_cavalo = escolherMovimentoReto();
                int lado_cavaloV = validarVertical();
                int lado_cavaloH = validarHorizontal();

                printf("\nMovendo o Cavalo...\n");
                moverCavalo(movimento_cavalo, lado_cavaloV, lado_cavaloH); // Criar variaveis e fazer funções
                break;
            
            }

            break;
        case 2:
            printf("\nSaindo do Jogo de Xadrez, volte sempre!\n");
            break;        
        }
    } while (opcao != 2);   

    return 0;
}
                
       

    

