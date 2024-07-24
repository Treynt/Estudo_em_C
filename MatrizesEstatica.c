//A matriz é alocado na memoria de forma sequencial, o 00 no primeiro, 01 na segunda, e assim por diante, até o mn.

//Alocação Estática
//int m[2][3] = {{0, 1, 2}, {3, 4, 5}};

#include<stdio.h>

int main() {
    int n_rows = 2;
    int n_cols = 3;

    int m[2][3] = {{0, 1, 2}, {3, 4, 5}};

    printf("&m = %p, m = %p\n\n", &m, m);

    for(int i = 0; i < n_rows; i++) {
        for (int j = 0; j < n_cols; j++) {
            printf("&m[%d][%d] =%p, m [%d][%d] = %d\n", i, j, &m[i][j], i, j, m[i][j]);
        }
        puts("");
    }

    return 0;
}