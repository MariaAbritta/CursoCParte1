//Casting -> Fazer conversão de todos os tipos para
//qualquer outro em determinada parte do código.

//É a comversão de tipos de variáveis por meio da 
//especificação, entre parênteses, antes de utilizarmos
//uma variável ou número.

#include <stdio.h>

int main(){
    int a = 3;
    int b = 2;
    double pontos = a / (double)b;
    printf("%f\n", pontos);
}