/*
  Diego Lopes Ferreira
  RA: 2267241
*/

#include <stdio.h>
int main() {
  int i;
  const int size = 5;
  float notasAlunos[size];

  for (i = 0; i < size; i++) {
    printf("Nota Aluno %d\n>>> ", i + 1);
    scanf("%f", &notasAlunos[i]);
  }

  printf("\n\n\n");
  printf("As notas sao: \n");

  for (i = 0; i < size; i++) {
    printf("Aluno %d: %05.2f\n", i + 1, notasAlunos[i]);
  }
}
