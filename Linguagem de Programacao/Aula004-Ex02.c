/*
  Diego Lopes Ferreira
  RA: 2267241
*/

#include <stdio.h>
#include <string.h>

int main() {
  char bomDia[50];
  int i, nDeConsoantes;

  printf("Digite algo\n>>> ");
  gets(bomDia);

  nDeConsoantes = strlen(bomDia);

  /*
    Letras maiusculas 65 - 90
    Letras minusculas 97 - 122
    Conversao maiusculas -> minusculas
    char + 32
  */
  for (i = 0; i < strlen(bomDia); i++) {
    if (bomDia[i] < 90 && bomDia[i] > 65) {
      bomDia[i] = bomDia[i] + 32;
    }
    if (bomDia[i] == 'a') nDeConsoantes--;
    if (bomDia[i] == 'e') nDeConsoantes--;
    if (bomDia[i] == 'i') nDeConsoantes--;
    if (bomDia[i] == 'o') nDeConsoantes--;
    if (bomDia[i] == 'u') nDeConsoantes--;
    if (bomDia[i] == ' ') nDeConsoantes--;
  }
  printf("%s contem %d consoantes\n", bomDia, nDeConsoantes);
  return 0;
}
