/*
  Diego Lopes Ferreira
  RA: 2267241



  Desenvolva um programa que utilize um laço aninhado para preencher uma matriz
  3x3 de valores inteiros (int mat[3][3])

  Crie um segundo laço aninhado para
  imprimir os valores na tela.
*/

#include <stdio.h>

int main() {
  int mat[3][3], i, j;

  printf("Digite os valores \n");
  for (i = 0; i < 3; i++) {
    printf("Linha %d: \n", i + 1);
    for (j = 0; j < 3; j++) {
      printf(">>> ");
      scanf("%d", &mat[i][j]);
    }
  }

  for (i = 0; i < 3; i++) {
    printf("| ");
    for (j = 0; j < 3; j++) {
      printf("%02d | ", mat[i][j]);
    }
    printf("\n");
  }

  return 0;
}
