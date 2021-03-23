/*
  Diego Lopes Ferreira
  RA: 2267241
*/

void verifica() {
  int num;
  printf(">>> ");
  scanf("%d", &num);

  if ((num % 2) == 0) {
    printf("O numero e par \n");
  } else {
    printf("O numero e impar \n");
  }
}

int main() {
  printf("Digite um numero na tela \n");
  verifica();
  return 0;
}
