/*Diferentemente da alocação de matriz estática, que é alocada em blocos, de forma conjunta
com base nos parametros indicados, na dinâmica não ocorre da mesma fora...
Na dinâmica, é preciso realizar a indicação por linhas, ou seja, para cada linha é preciso
fazer um calloc/malloc e, além disso, quando irá setar a variável da matriz, ela não será um ponteiro simples,
mas sim, um ponteiro de ponteiro (int **m = NULL) para o tipo de dados que serão postos nas celulas da matriz 
Todas as variáveis são armazenadas na memória stack, tanto na estática quanto na dinâmica
EX.:
int **m = NULL; //nrows = 2;// ncols = 3;

m = (int**) calloc(nrows, sizeof(int*));Aqui ele cria uma lista de ponteiros, que por sua vez, irão apontar para os elementos da matriz
for (int i = 0; i < nrows; i++) {
    m[i] = (int*) calloc(ncols, sizeof(int));
}
Não existe garantia que as linhas estejam de forma contíguas na memoria, ou seja,
que estejam seguidas, em razão de não ser toda alocada de uma vez, podendo ter outras coisas
no espaço de memória entre elas
*/

#include <stdio.h>
#include <stdlib.h>  // malloc, calloc, free, NULL


int main() {
    int nrows = 2;
    int ncols = 3;

    /********* ALOCAÇÃO DINÂMICA DE MATRIZES *********/
    int **m = (int **) calloc(nrows, sizeof(int*));

    // para cada linha da matriz
    for (int i = 0; i < nrows; i++) {
        m[i] = (int*) calloc(ncols, sizeof(int));
    }
    /*************************************************/

    int count = 0;

    printf("&m = %p, m = %p\n\n", &m, m);

    for (int i = 0; i < nrows; i++) {
        printf("&m[%d] = %p, m[%d] = %p\n", i, &m[i], i, m[i]);

        for (int j = 0; j < ncols; j++) {
            // m[i][j] = count;
            // count++;
            m[i][j] = count++;

            printf("&m[%d][%d] = %p, m[%d][%d] = %d\n",
                    i, j, &m[i][j],
                    i, j, m[i][j]);
        }
        puts("");
    }

r
    /********* DESALOCAÇÃO DE MATRIZES DINÂMICA *********/
    for (int i = 0; i < nrows; i++) {
        free(m[i]);
    }
    free(m);
    m = NULL;

    return 0;
}
/*
Se usarmos o free() apenas no m, ele irá desalocar apenas o array de ponteiros,
mas as linhas criadas ainda permaneceriam alocadas na memória, criando um armazenamento desnecessário,
precisando assim aplicar o free() nos demais também criados pelos outros callocs

Outra informação importante é que, inicialmente, precisamos desalocar as linhas para só
depois irmos para os ponteiros, visto que se fizermos primeiramente com m
iremos perder as referencias de apontamento para as linhas, dificultando o processo
*/