#include <stdio.h>

int main(void)
{

    // Trüki ASCII väärtus

    char a;
    printf("kirjuta one letter: ");
    if (scanf("%c", &a) != 1)
        return 1;

    printf("Ascii väärtus on: %i", a);

    return 0;
}