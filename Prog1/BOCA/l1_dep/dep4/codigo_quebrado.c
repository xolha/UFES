#include <stdio.h>

int main()
{
  int i = 0, den = 1, primo = 0, qtd = 0, cont = 0;

  scanf("%d", &qtd);

  for (i = 2; i <= qtd; i++)
  {

    while (den <= i)
    {
      if (i % den == 0 && i != 0)
      {
        primo = i;
        cont++;
      }

      den++;
    }

    if (cont == 2)
    {
      printf("%d ", primo);
    }

    cont = 0;
    den = 1;

  }
  return 0;
}
