#include <stdio.h>
#include <math.h> // Vajalik sqrt() jaoks

int main(void)
{
    // 1. Deklareerime muutujad (float, sest küljed võivad olla komaga)
    float a, b, result;

    // 2. Küsime esimest külge
    printf("Sisesta esimese kaateti pikkus: ");
    if (scanf("%f", &a) != 1)
    {
        printf("Viga: Sisesta number!\n");
        return 1;
    }

    // 3. Küsime teist külge
    printf("Sisesta teise kaateti pikkus: ");
    if (scanf("%f", &b) != 1)
    {
        printf("Viga: Sisesta number!\n");
        return 1;
    }

    // 4. Arvutame hüpotenuusi: sqrt(a^2 + b^2)
    result = sqrt(a * a + b * b);

    // 5. Väljastame tulemuse
    printf("Huputenuus on: %.2f\n", result);

    return 0;
}