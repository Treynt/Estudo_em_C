#include <stdio.h>

//int main(void) {
//  int v[5] = {0, 1, 2, 3, 4};

//  for (int i = 0; i < 5; i++) {
//    printf("&v[%d] = %p, v[%d] = %d\n,", i, &v[i], i, v[i]);
//  }
//  printf("&v[6], = %p, v[6] = %d\n", &v[6], v[6]);//Lixo de memória. C não barra, mas extrapola a memória do array
//  return 0;
//}

int main(){
  int i;
  int v[5];
   for (i = 0; i < 5; i++)
     scanf("%d", &v[i]);

  printf("%d", v[0]);
}