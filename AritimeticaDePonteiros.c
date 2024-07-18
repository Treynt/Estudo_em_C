//Aritmética de Ponteiros

//Ao declarar "int v [5]"; o símbolo 'v' é uma constante que representa  endereço inicial do vetor. Logo, sem indexação, v aponta para o primeiro elemento do vetor
//&v = v = &v[0] ao usar quaisquer dessas notações, irá retornar o endereço de memoria do primeiro elemento
//Assim, é possível acessar o endereço de memória de qualquer elemento do vetor, usando a notação v + i, onde i é um número qualquer
//Ex.: v + 1 é a mesma coisa que &v[1]; v + 2 é a mesma coisa que &v[2]... E por ai vai
//Por dar a ideia de que v é ligado ao index 0, v + 1 faz com que vá para o espaço de memória seguinte daquele tipo, indo para o próximo elemento do vetor
// Em outras palavras: "v + i", o i é a quantidade de deslocamento (caixas) a partir do endereço de v, que é o endereço de v[0]

#include<stdio.h>

int main () {
  int v[5] = {10, 5, 4, 16, 1};

  printf("&v = %p´, v = %p\n\n", &v, v);

  for (int i = 0; i < 5; i++) {
      printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
      printf("(v + %d) = %p, *(v + %d) = %d\n\n", i, (v + i), i, *(v + i));
  }
  return 0;
}