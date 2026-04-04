#include <stdio.h>

int main(void)
{
    // Arvuta ristküliku ümbermõõt
    // Valem: P = 2 * (a + b)

    // defineerime küljed ja ümbermõõdu
    float a, b, result;
    // Küsime esimest külge
    printf("Mis on esimese kulje pikkus: ");
    if (scanf("%f", &a) != 1)
    {
        printf("Sisesta number\n");
        return 1;
    }
    // Küsime teist külge
    printf("Mis on teise kulje pikkus: ");
    if (scanf("%f", &b) != 1)
    {
        printf("Sisesta number\n");
        return 1;
    }

    // Arvutame ümbermõõdu
    result = 2 * (a + b);
    printf("Ristkuliku umbermoot on: %.2f", result);
    return 0;
}