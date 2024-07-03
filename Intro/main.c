#include <stdio.h>

int main1(){
    int a = 10;
    int b, c;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);
// &a faz a indicação que quer printar o endereço de memória da variável 'a'
// No &a, temos que indicar o tipo de dado, e o endereço de memória é representado por %p
// No 'a', como é inteiro, o tipo é %d, de digito
// \n pular a linha, que nem python

    b = 20;
    c = b + c;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);


    return 0;
}
