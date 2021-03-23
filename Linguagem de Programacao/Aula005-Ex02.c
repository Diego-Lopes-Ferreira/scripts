/*
  Diego Lopes Ferreira
  RA: 2267241
*/
#include <stdio.h>

void encontrarValores() {
  int lth = 5, i;
  float list[lth], bigger, smaller;

  for (i = 0; i < lth; i++) {
    printf(">>> ");
    scanf("%f", &list[i]);
  }

  bigger = list[0];
  smaller = list[0];
  for (i = 0; i < lth; i++) {
    // Encontrar o maior
    if (bigger < list[i]) {
      bigger = list[i];
    }
    // Encontrar o menor
    if (smaller > list[i]) {
      bigger = list[i];
    }
  }

  printf("Maior = %.2f \n", bigger);
  printf("Menor = %.2f \n", smaller);
}

int main() {
  printf("Digite 5 numeros \n");
  encontrarValores();
  return 0;
}
