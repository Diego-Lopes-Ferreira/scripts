/*
  Diego Lopes Ferreira
  RA: 2267241



  Desenvolva um programa que encontre o maior elemento de uma matriz 2x3 (2
  linhas e 3 colunas) de valores inteiros (int mat[2][3]). Insira os valores
  (10, 3, 19, 5, 8, 15) na declaração da matriz. Crie um laço aninhado para
  imprimir todos os valores e, em seguida, imprima apenas o maior valor na tela.
*/

#include <stdio.h>

int main() {
  int mat[2][3], i, j, k, maior;
  int numbers[] = {10, 3, 19, 5, 8, 15};

  k = 0;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      mat[i][j] = numbers[k];
      k++;
    }
  }

  maior = mat[0][0];
  for (i = 0; i < 2; i++) {
    printf("| ");
    for (j = 0; j < 3; j++) {
      if (mat[i][j] > maior) {
        maior = mat[i][j];
      }
      printf("%02d | ", mat[i][j]);
    }
    printf("\n");
  }
  printf("Maior = %02d \n", maior);
  return 0;
}
