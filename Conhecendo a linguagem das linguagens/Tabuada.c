#include <stdio.h>

int main(){
    int numero;

    printf("Qual tabuada você quer ver? ");
    scanf("%d", &numero);

    for(int i = 0; i <= 10; i++){
        int mult = numero * i;
        printf("%d x %d = %d\n", numero, i, mult);
    }
}