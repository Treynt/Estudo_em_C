
#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10;
    int *p1 = NULL; //Indicando que está apontando para algo com int
    int *p2;//Ponteiro com alocação de lixo

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p\n", &p1, p1);
    printf("&p2 = %p, p2 = %p\n", &p2, p2);


    p1 = &a; //Dizendo que p1 está apontando para o endereço de memória de a
    p2 = p1; //Dizendo que p2 está apontando para o endereço de p1, que por consequencia, está apontando para o endereço de a
    *p2 = 4; //Por p2 estar apontando para o endereço de memoria de a, acaba dizendo que no endereço de a, ao invés de 10, agora sete 4 a ela

    printf("&a = %p, a = %d\n", &a, a);
    printf("&p1 = %p, p1 = %p, *p1 = %d\n", &p1, p1, *p1);
    printf("&p2 = %p, p2 = %p, *p2 = %d\n", &p2, p2, *p2);

return 0;
}
