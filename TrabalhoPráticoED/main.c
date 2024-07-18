#include <stdio.h>
#include "lista.h"

void imprime_lista(tipolista* lista) {
    Celula* p = lista->primeiro;
    while (p != NULL) {
        printf("%d -> ", p->chave);
        p = p->prox;
    }
    printf("NULL\n");
}

int main() {
    tipolista lista;
    tipochave chave;

    // Inicializa a lista
    fazlistavazia(&lista);

    // Insere alguns elementos na lista
    insere_lista(&lista, 10);
    insere_lista(&lista, 20);
    insere_lista(&lista, 30);

    printf("Lista após inserções: ");
    imprime_lista(&lista);

    // Remove um elemento da lista
    if (busca_e_remove_da_lista(&lista, 20)) {
        printf("Elemento 20 removido com sucesso.\n");
    } else {
        printf("Elemento 20 não encontrado.\n");
    }

    printf("Lista após remoção: ");
    imprime_lista(&lista);

    // Remove o primeiro elemento da lista
    if (remove_primeiro_da_lista(&lista, &chave)) {
        printf("Primeiro elemento (%d) removido com sucesso.\n", chave);
    } else {
        printf("Lista vazia, nenhum elemento para remover.\n");
    }

    printf("Lista após remover o primeiro elemento: ");
    imprime_lista(&lista);

    // Imprime o tamanho da lista
    printf("Tamanho da lista: %d\n", tamanho_lista(&lista));

    return 0;
}
