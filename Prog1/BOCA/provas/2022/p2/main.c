#include <stdio.h>

int main() {

  int a, b, i = 0, j = 0, k = 0, l = 0, cifroes = 0, tracejados = 0, crescendo = 1;

  scanf("%d %d", &a, &b);

  cifroes = a;

  while(cifroes >= 1) {

    tracejados = (b - cifroes) / 2;

    for (k = 1; k <= tracejados; k++) {

      printf("_");
    }

    for (l = 1; l <= cifroes; l++) {

      printf("$");
    }

    for (k = 1; k <= tracejados; k++) {

      printf("_");
    }

    printf("\n");

    if (cifroes == b) {
        crescendo = 0;
    }

    if (crescendo) {

      cifroes += 2;
    } else {
      cifroes -= 2;
    }
  }

  return 0;
}