#include <stdio.h>

int main(){
    int soma = 0;

    for(int i = 0; i <= 100; i++){
        soma = soma + i;
    }

    printf("A soma é %d", soma);
}