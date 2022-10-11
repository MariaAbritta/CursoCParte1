#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Imprime cabeçalho do jogo
    printf("---------------------------------------\n");
    printf("Bem vindo ao nosso jogo de adivinhação!");
    printf("\n---------------------------------------\n");

    int segundos = time(0); //segundos atuais
    srand(segundos); //seed = semente
    int numGrande = rand();

    int numSecreto = (numGrande % 100), chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;

    int nivel;
    printf("Qual nível de dificuldade você que jogar?\n");
    printf("(1)Fácil - (2)Médio - (3)Difícil\n");
    scanf("%d", &nivel);

    int numeroDeTentativas;
    switch(nivel){
        case 1:
            numeroDeTentativas = 20;
            break;
        case 2:
            numeroDeTentativas = 15;
            break;
        default:
            numeroDeTentativas = 6;
            break;
    }

    for(int i = 1; i <= numeroDeTentativas; i++){
        printf("Tentativa %d\n", tentativas);
        printf("Qual o seu chute?\n");
        scanf("%d", &chute);

        if(chute < 0){
            printf ("Você não pode chutar números negativos!\n");
            continue;
        }

        acertou = (chute == numSecreto);
        int maior = (chute > numSecreto);

        if(acertou){
            break;
        }

        else if(maior){
            printf("Não foi dessa vez, você errou o número secreto!\n");
            printf("Seu chute foi maior que o número secreto.\n");
        }

        else{
            printf("Não foi dessa vez, você errou o número secreto!\n");
            printf("Seu chute foi menor que o número secreto.\n");
        }
        
        tentativas++;
        double pontosPerdidos = abs(chute - numSecreto) / (double)2;
        //abs -> como se fosse um módulo -> Devolve o valor absoluto do número
        pontos = pontos - pontosPerdidos;
    }

    if(acertou){
        printf("Você ganhou!\n");
        printf("Você acertou em %d tentativas.\n", tentativas);
        printf("Total de pontos: %1.f\n", pontos);
        printf("Fim do jogo!\n");

    }else{
        printf("você perdeu, jogue novamente!\n");
    }
    
    
}
    
    