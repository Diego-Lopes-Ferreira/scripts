/*
  Diego Lopes Ferreira
  RA: 2267241
*/
#include <stdio.h>

int main() {
  float a, b, c;
  printf("Digite os tres lados separados por virgula \n");
  printf(">>> ");
  scanf("%f,%f,%f", &a, &b, &c);

  // Conferir os numeros
  // printf("A: %f \n", a);
  // printf("B: %f \n", b);
  // printf("C: %f \n", c);

  if (a < 0 || b < 0 || c < 0) {
    printf("! Um triangulo nao tem valores negativos \n");
    return 0;
  }

  if (a > b + c || b > a + c || c > a + b) {
    printf("! Nao e um triangulo \n");
    return 0;
  }

  if (a == b && b == c) {
    printf("O triangulo e equilatero \n");
  } else if (a == b || b == c || a == c) {
    printf("O triangulo e Isoceles \n");
  } else {
    printf("O triangulo e Escaleno \n");
  }

  return 0;
}
