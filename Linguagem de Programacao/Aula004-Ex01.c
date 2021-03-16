/*
  Diego Lopes Ferreira
  RA: 2267241
*/

#include <stdio.h>
#include <string.h>

int main() {
  char bomDia[] = "Bom dia";
  int i, nDeVogais;
  nDeVogais = 0;
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
    if (bomDia[i] == 'a') nDeVogais++;
    if (bomDia[i] == 'e') nDeVogais++;
    if (bomDia[i] == 'i') nDeVogais++;
    if (bomDia[i] == 'o') nDeVogais++;
    if (bomDia[i] == 'u') nDeVogais++;
  }
  printf("%s contem %d vogais\n", bomDia, nDeVogais);
  return 0;
}
