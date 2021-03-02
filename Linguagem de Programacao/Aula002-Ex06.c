/*
  Diego Lopes Ferreira
  RA: 2267241

  Crie e inicialize um vetor que possui 10 elementos com os valores inteiros
  (0, 1, 2, 3, 4, 5, 6, 7, 8 e 9)
  Armazene esses valores em ordem inversa
  (9, 8, 7, 6, 5, 4, 3, 2, 1)
  em um novo vetor (que também deve possuir 10 elementos)
  Imprima o conteúdo do segundo vetor na tela.
*/
int main() {
  const int size = 10;
  int i;
  int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int numsInvertido[size];

  for (i = 0; i < size; i++) {
    numsInvertido[i] = nums[size - i - 1];
  }

  for (i = 0; i < size; i++) {
    printf("%d ", numsInvertido[i]);
    if (i != size - 1) {
      printf(", ");
    }
  }
  return 0;
}