/*
  Diego Lopes Ferreira
  RA: 2267241
*/

void tabuada() {
  int i, j, max = 10;
  for (i = 1; i <= max; i++) {
    for (j = 1; j <= max; j++) {
      printf("| %02d*%02d=%02d ", i, j, i * j);
    }
    printf("\n");
  }
}

int main() {
  printf("Tabuadas \n");
  tabuada();
  return 0;
}
