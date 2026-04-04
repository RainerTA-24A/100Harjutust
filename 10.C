#include <stdio.h>

int remainder(int first, int second)
{
    return first % second;
}

int main(void)
{
    // jäägi leidmine
    //  % moduliga ainult INT

    int a, b, tulemus;
    printf("Mis on esimene arv: ");
    if (scanf("%i", &a) != 1)
        return 1;

    printf("Mis on teine arv: ");
    if (scanf("%i", &b) != 1)
        return 1;

    tulemus = remainder(a, b);
    printf("Remainder is: %i", tulemus);
    return 0;
}