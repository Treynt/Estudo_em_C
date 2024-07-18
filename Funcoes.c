#include<stdio.h>
//Existem doi tipos de funções, as que possuem retorno e outras que não retornam nada, como no caso de um simples printf
//Nesse último caso, aplicaremo o 'void' na sua declaração
//No C, não é possível alocar uma função dentro de outra função e nem realizar sobrecarga de função, duas com mesmo nome, mas com parâmetros e tipos diferentes 

//Existem dois meios de passagem de parametros. Um deles é por valor e o outro por referência.
//Os valores são copiados para a função e são passados para ela, ou seja, int a e int b possuem endereções de memória diferentes de x e y, mas possuem o mesmo valor, e os destroem ao final da execução da função

int soma(int x, int y) {
  int z = x + y;

  puts("###DENTRO DA FUNCAO");//puts só recebe string
  printf("&x = %p, x = %d\n", &x, x);
  printf("&y = %p, y = %d\n", &y, y);
  printf("&z = %p, z = %d\n", &z, z);
    
  return z;
}

int main(){
  
  int a = 10;
  int b = 20;
  int c;

  puts("###ANTES DE CHAMAR A FUNCAO");//puts só recebe string
  printf("&a = %p, a = %d\n", &a, a);
  printf("&b = %p, b = %d\n", &b, b);
  printf("&c = %p, c = %d\n", &c, c);
  
  c = soma(a, b);

  puts("###DEPOIS DE CHAMAR A FUNCAO");//puts só recebe string
  printf("&a = %p, a = %d\n", &a, a);
  printf("&b = %p, b = %d\n", &b, b);
  printf("&c = %p, c = %d\n", &c, c);

  return 0;
  }

//Passagem por referencia: Nesse caso, é passado a referência de uma variável(ponteiro) para a função, possibiliando que ela altere o valor da variável original. Ao invés de aplicar um retorno, altera a variável de c através de um ponteiro, modificando o valor no espaço de memória original

// Função que atualiza um valor por referência baseado em um valor passado por valor, usa tanto por valor quanto por referencia
void atualiza_valores(int valor, int *referencia) {
    *referencia += valor;
}

int main() {
    int a = 5;
    int b = 10;

    printf("Antes da atualização: a = %d, b = %d\n", a, b);

    // Chamada da função atualiza_valores
    atualiza_valores(a, &b);

    printf("Depois da atualização: a = %d, b = %d\n", a, b);

    return 0;
}

//Existem casos em que queremos que o ponteiro tenha apenas a função de leitura, e não permita a alteração do conteúdo apontado. Para isso, usamos a palavra reservada "const"
//void imprime_vector(const int *vector){}, por exemplo