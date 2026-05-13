#include <math.h>
#include <stdio.h>

// contexto: dado uma função do terceiro grau e um intervalo fechado, dizer se
// há pico ou vale

int main() {
  float a, b, c, d, FdeX = 0, FdeXAnterior = 0, FdeXProximo = 0;
  int e, f, i = 0, temPico = 0, temVale = 0;

  scanf("%f %f %f %f", &a, &b, &c, &d);
  scanf("%d %d", &e, &f);

  for (i = e + 1; i < f; i++) {
    FdeXAnterior =
        (a * (int)pow(i - 1, 3)) + (b * (int)pow(i - 1, 2)) + (c *(i - 1)) + d;

    FdeX = (a * (int)pow(i, 3)) + (b * (int)pow(i, 2)) + (c * i) + d;

    FdeXProximo =
        (a * (int)pow(i + 1, 3)) + (b * (int)pow(i + 1, 2)) + (c *(i + 1)) + d;

    if (FdeX > FdeXAnterior && FdeX > FdeXProximo) {
      printf("Pico em x=%d\n", i);

      temPico = 1;
    }

    if (FdeX < FdeXAnterior && FdeX < FdeXProximo) {
      printf("Vale em x=%d\n", i);
      temVale = 1;
    }
  }

  if (!temPico) {
    printf("Nao ha pico\n");
  }

  if(!temVale) {
    printf("Nao ha vale\n");
  }

  return 0;
}