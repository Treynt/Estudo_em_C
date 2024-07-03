#include <stdio.h>
#include <stdlib.h>
int main(){
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    //Aqui é uma relação de ponteiro de ponteiros. '**p2' atua como um ponteiro para ponteiro de inteiro(*p1), que são tipos de dados diferentes.
    //Aqui, o p2 aponta para o endereço de p1, ponteiro simples, para depois verificar qual o endereço que p1 aponta, para verificar o conteúdo alocado
    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);
  
    //No p2, o *p2 aponta para o endereço de memoria de p1, lodo %p
    //Mas no **p2, ele guia para o endereço de meloria de p1, para depois ir para o conteúdo do endereço de memória que p1 aponta, logo %d

    **p2 = 99;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);

    return 0;
}