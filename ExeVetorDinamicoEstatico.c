/*
Programa com vetores estáticos:
-Crie uma função que recebe o ponteiro de um vetor e seu tamanho e imprima os elementos do vetor
-Crie uma função que recebe o ponteiro de um vetor via cochetes [] e seu tamanho e imprima os elementos do vetor
-Imprima os endereços de memória e valores do vetor na main e dentro de cada função

Programa com vetores dinâmicos
- Crie uma função que recebe o ponteiro de um vetor e seu tamanho e imprima os elementos do vetor
-Crie uma função que recebe o ponteiro de um vetor via colchetes[] e seu tamanho e imprima os elementos do vetor
-Imprima os endereços de memória e valores do vetor na main e dentro de cada função
*/
#include <stdio.h>
#include <stdlib.h>

void soma_vetor_com_escalar(int v[], int n, int escalar) {//n é o tamanho
    for(int i = 0; i < n; i++) {
        v[i] += escalar;
    }
}
//o int v[] e o int *v são a mesma coisa, indicando que passe o elemento base do vetor, oo v[0]
void print_vetor(int *v, int n) {
    for (int i = 0; i < n; i++) {
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    }
    puts("");
}
void desaloca_vetor(int **v) {
    int *aux = *v;//pegar o mesmo conteúdo apontado por v
    free(aux);
    v = NULL; //Boa prática colocar como null depois de liberar. E vai encerrar o vinduculo com o aux
}

int main() {
    puts("###VETOR ESTATICO");
    int vs[5] = {0, 10, 20, 30, 40};

    print_vetor(vs, 5);
    soma_vetor_com_escalar(vs, 5, 9);
    print_vetor(vs, 5);

    puts("###VETOR DINAMICO COM ALLOC");
    int *vh = (int *) calloc(5, sizeof(int));
    for (int i = 0; i < 5; i++) {
        vh[i] = i * 100;
    }

    print_vetor(vs, 5);
    soma_vetor_com_escalar(vs, 5, 9);
    print_vetor(vs, 5);

    //desalocando vetor dinamico
    desaloca_vetor(&vh);
    return 0;
}