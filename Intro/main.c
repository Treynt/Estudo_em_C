#include <stdio.h>

int main1(){
    int a = 10;
    int b, c;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);
// &a faz a indica��o que quer printar o endere�o de mem�ria da vari�vel 'a'
// No &a, temos que indicar o tipo de dado, e o endere�o de mem�ria � representado por %p
// No 'a', como � inteiro, o tipo � %d, de digito
// \n pular a linha, que nem python

    b = 20;
    c = b + c;

    printf("&a = %p, a = %d\n", &a, a);
    printf("&b = %p, b = %d\n", &b, b);
    printf("&c = %p, c = %d\n\n", &c, c);


    return 0;
}
