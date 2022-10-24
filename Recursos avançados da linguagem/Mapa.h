#ifndef _MAPA_H_
#define _MAPA_H_

#define HEROI '@'
#define FANTASMA 'F'
#define VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'
#define PILULA 'P'

struct mapa{ //Conjunto de variáveis
    char** matriz;
    int linhas;
    int colunas;
};
//Apelidando um tipo
typedef struct mapa MAPA;

struct posicao{
    int x;
    int y;
};
typedef struct posicao POSICAO;

void copiaMapa(MAPA* destino, MAPA* origem);
void liberaMapa(MAPA* m);
void alocaMapa(MAPA* m);
void leMapa(MAPA* m);
int encontraMapa(MAPA* m, POSICAO* p, char c);
int ehValida(MAPA* m, int x, int y);
int ehVazia(MAPA* m, int x, int y);
void andandoMapa(MAPA* m, int xorigem, int yorigem,
    int xdestino, int ydestino);
int podeAndar(MAPA* m, char personagem, int x, int y);
int ehParede(MAPA* m, int x, int y);
int ehPersonagem(MAPA* m, char personagem, int x, int y);

#endif