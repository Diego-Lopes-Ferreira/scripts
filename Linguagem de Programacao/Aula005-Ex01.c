/*
  Diego Lopes Ferreira
  RA: 2267241
*/
#include <stdio.h>

void universidade() {
  printf("UTFPR - Universidade Tecnologica Federal do Parana \n");
  printf("Campus Cornelio Procopio \n");
}

void disciplina() {
  printf("Disciplina: | IF62B | Linguagem de Programacao | \n");
}

void invalido() {
  printf("Resultado invalido \n");
  handleSelection();
}

void handleSelection() {
  int choice;
  printf(">>> ");
  scanf("%d", &choice);
  if (choice == 1)
    universidade();
  else if (choice == 2)
    disciplina();
  else
    invalido();
}

int main() {
  printf("======Opcoes====== \n");
  printf("Universidade | 1 |\n");
  printf("Disciplina   | 2 |\n");
  printf("================== \n");

  handleSelection();

  return 0;
}
