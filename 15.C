#include <stdio.h>

float fancy(float hind, float protsent)
{
    float minus;
    minus = (protsent / 100) * hind;
    return hind - minus;
}

int main(void)
{

    // leia poe allahindlus: sisesta hind ja protsent, väljasta uus hind.

    float hind, protsent, uus_hind;

    printf("Mis on eseme hind: ");
    if (scanf("%f", &hind) != 1)
        return 1;

    printf("Mis on selle eseme allahindlus protsent: ");
    if (scanf("%f", &protsent) != 1)
        return 1;

    uus_hind = fancy(hind, protsent);

    printf("Uus hind on: %.2f", uus_hind);
    return 0;
}