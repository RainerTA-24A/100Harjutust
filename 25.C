#include <stdio.h>

int main(void)
{
    int aasta;

    printf("Sisesta aasta: ");
    if (scanf("%i", &aasta) != 1)
        return 1;

    // Loogika: (jagub 4-ga JA ei jagu 100-ga) VÕI (jagub 400-ga)
    if ((aasta % 4 == 0 && aasta % 100 != 0) || (aasta % 400 == 0))
    {
        printf("%i on liigaasta!\n", aasta);
    }
    else
    {
        printf("%i on tavaline aasta.\n", aasta);
    }

    return 0;
}