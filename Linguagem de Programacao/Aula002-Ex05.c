
/*
  Diego Lopes Ferreira
  RA: 2267241
  GitHub: https://github.com/Diego-Lopes-Ferreira

  [v] Crie um vetor com 10 elementos do tipo "double"
  [v] Os valores devem ser digitados pelo usuário
  (use um laço para fazer a leitura)
  [v] O programa deve imprimir na tela quais os valores repetidos (que
  aparecem mais de uma vez no vetor)
*/

int main() {
  int i, j;
  const int size = 10;
  double nums[size];

  for (i = 0; i < size; i++) {
    printf("Digite o n %d: ", i + 1);
    scanf("%lf", &nums[i]);
  }
  // nums[0] = 1;
  // nums[1] = 2;
  // nums[2] = 3;
  // nums[3] = 4;
  // nums[4] = 5;
  // nums[5] = 6;
  // nums[6] = 7;
  // nums[7] = 4;
  // nums[8] = 9;
  // nums[9] = 6;

  printf("Numeros repetidos sao:  \n");
  for (i = 0; i < size; i++) {
    for (j = i; j < size; j++) {
      // printf("i = %d, j = %d \n", i, j);
      // printf("nums[%d]=%.2lf vs nums[%d]=%.2lf \n", i, nums[i], j, nums[j]);
      if (nums[i] == nums[j] && i != j) {
        printf("%.2lf \n", nums[i]);
      }
    }
  }

  return 0;
}
