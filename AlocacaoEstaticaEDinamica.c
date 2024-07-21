//Tipos de Alocação de Memória

//ALOCAÇÃO ESTÁRICA

//O espaço para as variáveis é reservado no inicio da execução
//Cada variável tem seu endereço fixado e a area de memoria ocupada por ela se mantem constante durante toda a execução
//São alocadas na Stack da Memória Ram
//Liberação de memória feita automaticamento pelo Sistema Operacional
//Toda variável é alocada na memória stack

//-----------------------------

//ALOCAÇÃO DINAMICA

//O espaço para as variáveis é alocado dinamicamente durante a execução do programa;
//Pode ser criada ou eliminada durante a execução do programa, ocupando espaço na memória apenas enquanto está sendo utilizada
//Sao alocados na Heap (free store) da Memória Ram
//Liberação de memória feita manualmente pelo programador ou feito automaticamente apenas quando o programa for totalemente encerrado
//Ex
//int *a = (int*)malloc(10 * sizeof(int));
//float *b = (float*)calloc(5, sizeof(float));
//free(a);
//free(b);
//Benefícios: A alocação dinâmica é o processo que aloca memória em tempo de execução
//Ela é utilicada quando não se sabe ao certo quanto de memória será necessário para o armazenamento dos elementos
//Assim, o tamanho de memória necessário é determinado conforme necessidade
//Dessa forma evita-se o desperdício de memória
//Além disso, size(Heap)>>size(Stack), ou seja, o tamanho de alocamento da heap é muito maior que a stack

//malloc (memory allocation) aloca um bloco de bytes consecutivos na memória heap e devolve o endereço desse bloco
//Estrutura: tipo* v = (tipo*)malloc(n* sizeof(tipo)); n é a quantidade de elementos que deseja alocar, que multiplica pelo tamanho do tipo dos elementos que serão alocados e (tipo*) é opcional
//E isso retorna o endereço de memória base da região da Heap(bloco) alocado, como no vaso do v indicando v[0]
//Ex.: float *v = (float*)malloc(10*sizeof(float)); o ponteiro *v é armazenado na Stack, mas a região que aponta é no Heap

//calloc aloca um bloco de bytes consecutiovs na memória heap, por alocação dinamica, como o malloc, mas inicializa todos os valores com 0, NULL para ponteiros.
// Estrutura: tipo* v = (tipo*)calloc(n, sizeof(tipo)); n é a quantidade de elementos

#include <stdio.h>
#include <stdlib.h>  // contém o NULL, calloc, malloc, free


int main() {
    // alocacao de um vetor estático (memória Stack)
    int vs[5] = {0, 10, 20, 30, 40};

    puts("### VETOR ESTATICO");
    printf("&vs = %p vs = %p\n", &vs, vs);

    for (int i = 0; i < 5; i++) {
        printf("&vs[%d] = %p, vs[%d] = %d\n", i, &vs[i], i, vs[i]);
    }
    puts("\n");


    puts("### VETOR DINAMICO COM MALLOC");
    // alocacao de um vetor dinâmico usando malloc (memória Heap)
    int *vh_mal = (int *) malloc(5 * sizeof(int));  // todos os elementos possuem
                                                    // "lixo de memória"

    printf("&vh_mal = %p vh_mal = %p\n", &vh_mal, vh_mal);

    for (int i = 0; i < 5; i++) {
        printf("&vh_mal[%d] = %p, vh_mal[%d] = %d\n", i, &vh_mal[i], i, vh_mal[i]);
    }
    puts("\n");


    puts("### VETOR DINAMICO COM CALLOC");
    // alocacao de um vetor dinâmico usando calloc (memória Heap)
    // todo o bloco alocado possui bits 0, isto é,
    // garante que todos os elementos alocados (do vetor) terão valor 0
    int *vh_cal = (int *) calloc(5, sizeof(int));  // todos os elementos possuem
                                                    // "lixo de memória"

    printf("&vh_cal = %p vh_cal = %p\n", &vh_cal, vh_cal);

    for (int i = 0; i < 5; i++) {
        printf("&vh_cal[%d] = %p, vh_cal[%d] = %d\n", i, &vh_cal[i], i, vh_cal[i]);
    }
    puts("\n");


    // NÃO ESTAMOS DESALOCANDO OS VETORES DINÂMICOS

    return 0;
}