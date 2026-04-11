#include <stdio.h>

// contexto: validar uma sequencia
// maiusculo A  65, minusculo 97 (32)

int main()
{
    // primeiro ler 4 valores sendo: maiusculo, um digito, uma vogal, consoante miuscula
    // ler todos esses valores
    // primeiro validar se é uma letra maisucula -> x >="A" && x <= "Z"
    // segundo validar se é um digito -> x = 1 && x <= 999999
    // terceiro validar se é vogal -> fazer aquela logica la
    // quarto verificar e se é consoante (bagaceira pra fazer o trem)

    int dig;
    char maius, ehVogal, conMinus;
    scanf("%c%d%c%c", &maius, &dig, &ehVogal, &conMinus);

    int valida1 = (maius >= 'A' && maius <= 'Z');
    int valida2 = ((dig >= 0 && dig <= 999999));
    int valida3 = ((ehVogal == 'a' || ehVogal == 'A' || ehVogal == 'e' || ehVogal == 'E' || ehVogal == 'i' || ehVogal == 'I' || ehVogal == 'o' || ehVogal == 'O' || ehVogal == 'u' || ehVogal == 'U'));
    int valida4 = (conMinus >= 'a' && conMinus <= 'z') && !(conMinus == 'a' || conMinus == 'e' || conMinus == 'i' || conMinus == 'o' || conMinus == 'u');

    if ( !valida4|| !valida1 || !valida2 || !valida3)
    {
        printf("Invalido");
    }
    else
    {
        char conMaius, ehVogalMaius;
        if (ehVogal >= 'a' && ehVogal <= 'z')
        {
            ehVogalMaius = ehVogal - 32;
        }
        else
        {
            ehVogalMaius = ehVogal;
        }

        if (conMinus >= 'a' && conMinus <= 'z')
        {
            conMaius = conMinus - 32;
        }
        else
        {
            conMaius = conMinus;
        }
        printf("%c%d%c%c", maius, dig, ehVogalMaius, conMaius);
    }

    return 0;
}
