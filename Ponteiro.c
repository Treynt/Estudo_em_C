// Ponteiro é um tipo de dado guarda endereços de memórias (referências) que aloca uma variável 
// O ponteiro é um elemento independente, que possui alocação própria de memória, mas que aponta para outra variável de modo a poder realizar operações com o valor presente nela
// Que o ponteiro aponta para o endereço da variável e, com isso, possibilita tratar as informações
// Quando uma variável/ponteiro é setado mas não é alocado dados a ela, o sistema acaba gerando valores aleatórios para ocupar o espaço destinado
// para não deixar vazio. Esses valores é chamado de 'LIXO', que depois são convertidos para valores que determinamos
// Uma boa prática é ao invés de criar e deixar sem setar nada, é bom dizer que é '=NULL', impedindo gerar esse lixo, que pode vir a dar algum problema

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

// Se fosse p1 = &p2; nãop iria fincuinar pq sao tipos diferentes. p1 por mais que armazene endereços, o tipo de p2 é ponteiro que aponta para inteiro, e não inteiro propriamente, p1 só aponta para inteiro, dando conflito
//Por isso que p1 =a; também dará problemas. Pois a é inteiro e p1 só armazena do tipo endereço de memoria
    return 0;
}