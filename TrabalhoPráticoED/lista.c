#include "lista.h"
#include <stdlib.h>

void fazlistavazia(tipolista* lista) {
    lista->tamanho = 0;
    lista->primeiro = NULL;
}

int insere_lista(tipolista* lista, tipochave chave) {
    Celula* p;
    p = (Celula*) malloc(sizeof(Celula));
    if (p == NULL) {
        return 0; // falha ao alocar memória
    }
    p->chave = chave;
    p->prox = lista->primeiro;

    lista->primeiro = p;
    lista->tamanho++;
    return 1;
}

int busca_e_remove_da_lista(tipolista* lista, tipochave chave) {
    Celula* p = lista->primeiro;
    Celula* ant = NULL;

    while (p != NULL && p->chave != chave) {
        ant = p;
        p = p->prox;
    }

    if (p == NULL) {
        return 0; // chave não encontrada
    }

    if (ant == NULL) {
        lista->primeiro = p->prox; // chave está na primeira célula
    } else {
        ant->prox = p->prox; // chave está em uma célula após a primeira
    }

    free(p);
    lista->tamanho--;
    return 1;
}

int tamanho_lista(tipolista* lista) {
    return lista->tamanho;
}

int remove_primeiro_da_lista(tipolista* lista, tipochave *chave) {
    if (lista->primeiro == NULL) {
        return 0; // lista está vazia
    }

    Celula* p = lista->primeiro;
    *chave = p->chave;
    lista->primeiro = p->prox;
    free(p);
    lista->tamanho--;
    return 1;
}
