/*
Codifique uma função para:
Alocar uma matriz dinâmica
Imprimir os elementos de uma matriz e seus endereços de memória
Adicionar um escalar a uma matriz(in place)
Desalocar uma matriz, atribuindo o valor NULL ao ponteiro
*/

#include<stdio.h>
#include <stdlib.h> 
/*
  int **alocar_matriz_dinamica(int nrows, int ncols) {
        int **m = (int **) calloc(nrows, sizeof(int*));

        for(int i = 0; i < nrows; i++) {
            m[i] = (int *) calloc(ncols, sizeof(int));
        }
        return m;
    }

    void imprime_elementos_matriz() {
        printf("&m = %p, m = %p\n\n", &m, m);

        for (int i = 0; i < nrows; i++) {
            printf("&m[%d] = %p, m[%d] = %p\n", i, &m[i], i, m[i]);

            for (int j = 0; j < ncols; j++) {
                printf("&m[%d][%d] = %p, m[%d][%d] = %d", i, j, &m[i][j], i, j, m[i][j]);
            }
        }
    }

    void desalocar_matriz() {
        for (int i = 0; i < nrows; i++) {
            free(m[i];)
        }
        free(m);
        m = NULL;
    }

int main() {



    return 0
}
*/

int ** **create_int_matrix(int nrows, int ncols) {
    int **m = (int **) calloc(nrows, sizeof(int *));

    // para cada linha da matriz
    for (int i = 0; i < nrows; i++) {
        m[i] = (int*) calloc(ncols, sizeof(int));
    }
    return m;
}

void print_int_matrix(const int **m, int nrows, int ncols) {
    printf("&m = %p, m = %p\n\n", &m, m);

    for (int i = 0; i < nrows; i++) {
        printf("&m[%d] = %p, m[%d] = %p\n", i, &m[i], i, m[i]);

        for(int j = 0; j < ncols; j++) {
            printf("&m[%d][%d] = %p, m[%d][%d] = %p\n",
            i, j, &m[i][j],
            i, j, m[i][j]);
        }
        puts("");
    }
}

void add_scalar_into_int_matrix(int **m, int nrows, int ncols,
                                int scalar) {
    for (int i = 0; i < nrows; i++) {
        for (int j = 0; j < ncols; j++) {
            m[i][j] += scalar;
        }
    }
}

void destroy_int_matrix(int ***mat, int nrows, int ncols) {
    int **aux = *mat; 

    for(int i = 0; i < nrows; i++) {
        free(aux[i]);
    }
    free(aux);
    *mat = NULL;
}

int main(int argc, char *argv[]) {//passa parâmetros do usuário para o programa, com o nome, linhas, colunas e o valor do escala
    if (argc != 4) {
        printf("ERRPR\n%s nrows ncols scalar\n", argv[0]);
        exit(-1); //sai do sistema
    }

    int nrows = atoi(argv[1]); //converte um tipo string para inteiro, pois argv recebe string como padrão
    int ncols = atoi(argv[2]);
    int scalar = atoi(argv[3]);

    //alocação da matrix
    int **m = create_int_matrix(nrows, ncols);

    //atribuição de alguns valores para a matriz
    int count = 0;

    for(int i = 0; i < nrows; i++) {
        for(int j = 0; j < ncols; j++) {
            m[i][j] = count++;
        }
    }

    //imprime matriz
    print_int_matrix((const int **) m, nrows, ncols);

    //adiciona scalar
    add_scalar_into_int_matrix(m, nrows, ncols, scalar);
    print_int_matrix((const int **) m, nrows, ncols);

    destroy_int_matrix(&m, nrows, ncols);
    printf("\n is NULL? %d\n", m ==NULL);


    return 0;
}