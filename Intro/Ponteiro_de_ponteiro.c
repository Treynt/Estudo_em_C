
#include <stdio.h>
#include <stdlib.h>
int main3(){
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;
    //Aqui � uma rela��o de ponteiro de ponteiros. '**p2' atua como um ponteiro para ponteiro de inteiro(*p1), que s�o tipos de dados diferentes.
    //Aqui, o p2 aponta para o endere�o de p1, ponteiro simples, para depois verificar qual o endere�o que p1 aponta, para verificar o conte�do alocado
    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);

    //No p2, o *p2 aponta para o endere�o de memoria de p1, lodo %p
    //Mas no **p2, ele guia para o endere�o de meloria de p1, para depois ir para o conte�do do endere�o de mem�ria que p1 aponta, logo %d

    **p2 = 99;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %p, **p2 = %d\n\n", &p2, p2, *p2, **p2);

    return 0;
}
