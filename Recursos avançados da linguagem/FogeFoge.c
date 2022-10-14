#include <stdio.h>

//Variáveis globais
char** mapa;
int linhas;
int colunas;

int main(){

    FILE* f;
    f = fopen("Mapa.txt", "r");
    if(f == 0){
        printf("Erro na leitura do mapa!\n");
        exit(1);
    }

    /////// -> Alocação dinâmica de memória
    mapa = malloc(sizeof(char*) * (colunas+1));
    for(int i = 0; i < linhas; i++){
        mapa[i] = malloc(sizeof(char) * (colunas+1));
    }
    //////

    for(int i = 0; i < 5; i++){
        fscanf(f, "%s", mapa[i]);
    }
    for(int i = 0; i < 5; i++){
        printf("%s\n", mapa[i]);
    }

    fclose(f);

    //Liberando espaço de memória
    for(int i = 0; i < linhas; i++){
        free(mapa[i]);
    }
    free(mapa);
}