#ifndef LISTA_H
#define LISTA_H

// TAD LISTA - lista encadeada de Tipochave
// Define Tipolista, Tipochave 
// e as operações

typedef int tipochave;

typedef struct celula {
    tipochave chave;
    struct celula* prox; // a lista vai começar a ser encadeada aqui
} Celula;

typedef struct {
    Celula* primeiro;
    int tamanho;
} tipolista;

void fazlistavazia(tipolista* lista);
int insere_lista(tipolista* lista, tipochave chave);
int busca_e_remove_da_lista(tipolista* lista, tipochave chave);
int tamanho_lista(tipolista* lista);
int remove_primeiro_da_lista(tipolista* lista, tipochave *chave);

#endif // LISTA_H
