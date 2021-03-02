/*
  Diego Lopes Ferreira
  RA: 2267241

  * O desafio: Criar um vetor com 5 elementos do tipo inteiro.
  * Cada valor deve ser digitado pelo usuário e armazenado no vetor.
  * O programa deve:
  [v] ler o vetor
  [v] somar os elementos
  [v] apresentar o resultado na tela.
*/

int main() {
  printf("Somador? \n");
  const int size = 5;
  int i, nums[size], soma;

  soma = 0;

  for (i = 0; i < size; i++) {
    printf("Digite o n %d: ", i + 1);
    scanf("%i", &nums[i]);
  }

  printf("\n\n");
  printf("A soma de ");
  for (i = 0; i < size; i++) {
    soma += nums[i];
    printf("%d ", nums[i]);
    if (i < size - 1) {
      printf("+ ");
    }
  }
  printf("= %d \n", soma);

  return 0;
}
