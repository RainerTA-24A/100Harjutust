#include <stdio.h>

int main(void)
{
    // Sisestame 5 arvu ja trükime tagurpidises järjekorras. Teen massiiviga, mitte 5 erineva muutujaga.

    int arv[5];

    // printf("Mis on esimene arv: ");
    // if (scanf("%i", &arv[0]) != 1)
    //     return 1;
    // printf("Mis on teine arv: ");
    // if (scanf("%i", &arv[1]) != 1)
    //     return 1;
    // printf("Mis on kolmas arv: ");
    // if (scanf("%i", &arv[2]) != 1)
    //     return 1;
    // printf("Mis on neljas arv: ");
    // if (scanf("%i", &arv[3]) != 1)
    //     return 1;
    // printf("Mis on viies arv: ");
    // if (scanf("%i", &arv[4]) != 1)
    //     return 1;

    for (int n = 0, i = 1; n < 5; n++, i++)
    {
        printf("Mis on %i arv: ", i);
        if (scanf("%i", &arv[n]) != 1)
            return 1;
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("%i ", arv[i]);
    }
    return 0;
}