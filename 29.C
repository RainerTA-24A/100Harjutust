#include <stdio.h>

int main(void)
{
    // Kolmnurga kontroll! Kahe külje summa peab olema suurem kui kolmas külg

    float k1, k2, k3;

    printf("Mis on esimese kulje pikkus: ");
    scanf("%f", &k1);

    printf("Mis on teise kulje pikkus: ");
    scanf("%f", &k2);

    printf("Mis on kolmanda kulje pikkus: ");
    scanf("%f", &k3);

    if (k1 + k2 <= k3 || k1 + k3 <= k2 || k2 + k3 <= k1)
    {
        printf("Kolmnurk pole olemas!");
        return 0;
    }
    else
    {
        printf("Kolmnurk on olemas!");
    }
}