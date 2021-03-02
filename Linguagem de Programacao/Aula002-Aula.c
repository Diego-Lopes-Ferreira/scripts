/*
  Diego Lopes Ferreira
  RA: 2267241

  * Aula de Vetores

  - Definição: Conjunto de valores de um mesmo tipo armazenado em uma variável

  * Como usar:
    TIPO NOME[TAMANHO];
    e.g.
    int idades[4];

  * Desafio:
  [v] Crie um vetor de 5 posições chamado "notas_alunos".
  [v] Insira as notas nas 5 posições do vetor.
  [v] Imprima todas as notas na tela.
*/

#include <stdio.h>
int main() {
  int i;
  const int size = 5;
  float notasAlunos[size];

  // * Metodo com suporte a erros do usuario

  for (i = 0; i < size; i++) {
    notasAlunos[i] = 11;
    do {
      printf("Nota Aluno %d\n>>> ", i + 1);
      scanf("%f", &notasAlunos[i]);
      if (notasAlunos[i] > 10) {
        printf("NOTAS VAO DE 0 A 10 \n");
      }
    } while (notasAlunos[i] > 10);
  }
  printf("\n\n\n");
  printf("As notas sao: \n");

  for (i = 0; i < size; i++) {
    printf("Aluno %d: %05.2f | ", i + 1, notasAlunos[i]);
    if (notasAlunos[i] >= 7) {
      printf("Aprovado \n");
    } else {
      printf("Reprovado \n");
    }
  }

  return 0;
}
