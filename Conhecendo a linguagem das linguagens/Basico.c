#include <stdio.h>

int main(){
    int x, y, total;

    printf("Digite o primeiro número para a multiplicação: ");
    scanf("%d", &x);
    printf("Digite o segundo número para a multiplicação: ");
    scanf("%d", &y);

    total = x * y;

    printf("O resultado da sua multiplicação é: %d\n", total);

}