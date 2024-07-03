
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10;
    int *p1 = NULL; //Indicando que est� apontando para algo com int
    int *p2;//Ponteiro com aloca��o de lixo

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p\n", &p1, p1);
    printf("&p2 = %p, p2 = %p\n", &p2, p2);


    p1 = &a; //Dizendo que p1 est� apontando para o endere�o de mem�ria de a
    p2 = p1; //Dizendo que p2 est� apontando para o endere�o de p1, que por consequencia, est� apontando para o endere�o de a
    *p2 = 4; //Por p2 estar apontando para o endere�o de memoria de a, acaba dizendo que no endere�o de a, ao inv�s de 10, agora sete 4 a ela

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %d\n", &p2, p2, *p2);

return 0;
}
