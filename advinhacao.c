#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("\n\n");                                                         
    printf("          P  /_\\  P                                    \n");
    printf("         /_\\_|_|_/_\\                                  \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao           \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao!       \n");
    printf("    |" "  |  |_|  |"  " |                               \n");
    printf("    |_____| ' _ ' |_____|                               \n");
    printf("          \\__|_|__/                                    \n");
    printf("\n\n");

    
    int segundos = time(0);
    srand(segundos);

    int numeroGrande = rand();
    int ganhou = 0;
    int numeroSecreto = numeroGrande % 100;
    int chute;
    int tentativas = 1;

    int nivel;
    printf("Escolha o nivel de dificuldade\n");
    printf("(1)FACIL (2)MEDIO (3)DIFICIL\n\n");
    printf("Escolha: ");
    scanf_s("%d", &nivel);

    int numerotentativas = 0;

    switch (nivel) {

        case 1:
            numerotentativas = 20;
            break;

        case 2:
            numerotentativas = 10;
            break;
        
        case 3: 
            numerotentativas = 5;
            break;

    }

    double pontos = 1000;    

    for (int i = 1; i <= numerotentativas; i++){
        printf("Tentativa %d\n", tentativas);
        printf("Qual eh o seu chute? " );

        scanf_s("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if(chute < 0){
            printf("Nao coloque numeros negativos\n");
            continue;
        }
        
        int maior = chute > numeroSecreto;
        int acertou = (chute == numeroSecreto);

        if(acertou) {
            ganhou = 1;
            break;            
        }  

        else if(maior) {
            printf("Tente um numero menor!\n");
        }

        else {
            printf("Tente um numero maior!\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numeroSecreto) / (double)2;
        pontos = pontos - pontosperdidos;

    }

    printf("Fim de jogo\n");

    if(ganhou == 1){
        printf("\n\n");
        printf("              OOOOOOOOOOO                 \n");      
        printf("          OOOOOOOOOOOOOOOOOOO             \n"); 
        printf("       OOOOOO  OOOOOOOOO  OOOOOO          \n");
        printf("     OOOOOO      OOOOO      OOOOOO        \n");
        printf("   OOOOOOOO  #   OOOOO  #   OOOOOOOO      \n");
        printf("  OOOOOOOOOO    OOOOOOO    OOOOOOOOOO     \n");
        printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    \n");
        printf(" OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO    \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("  OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO     \n");
        printf("   OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO      \n");
        printf("     OOOOO   OOOOOOOOOOOOOOO   OOOO       \n");
        printf("       OOOOOO   OOOOOOOOO   OOOOOO        \n");
        printf("          OOOOOO         OOOOOO           \n");
        printf("              OOOOOOOOOOOO                \n");

        printf("\n\n");        
        
        printf("Voce acertou em %d tentativas\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    }
    else
    {
        printf("\n\n");
        printf("          \\|/ ____ \\|/          \n");    
        printf("           @~/ ,. \\~@            \n");
        printf("          /_( \\__/ )_\\          \n");
        printf("             \\__U_/              \n");      
        printf("\n\n");

    }
    
    

}