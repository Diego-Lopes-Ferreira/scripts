#include <stdio.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

void loadingBar() {
  char a = 176, b = 219;
  int i, j, k, lenth = 100;

  printf("\n");
  k = lenth / 20;

  for (i = 1; i < lenth; i++) {
    printf(" Loading... ");
    for (j = 0; j < (i - 1) / k; j++) {
      printf("%c", b);
    }
    for (j = 0; j < (lenth - i) / k; j++) {
      printf("%c", a);
    }
    printf(" %02d %%", (i * 100) / lenth);
    Sleep(200);
    // Put the cursor in the start of the line
    printf("\r");
  }
  system("cursor show");
}

int main() {
  loadingBar();
  return 0;
}
