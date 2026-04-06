#include <stdio.h>

int main(void)
{
    // Kasutaja sisetab 3 arvu, leia kõige suurem neist
    int arv1, arv2, arv3;

    printf("Mis on teie esimene arv: ");
    scanf("%i", &arv1);

    printf("Mis on teie teine arv: ");
    scanf("%i", &arv2),

        printf("Mis on teie kolmas arv: ");
    scanf("%i", &arv3);

    if (arv1 > arv2 && arv1 > arv3)
    {
        printf("Arv %i on suurem kui arv %i ja arv %i", arv1, arv2, arv3);
        return 0;
    }
    else if (arv2 > arv1 && arv2 > arv3)
    {
        printf("Arv %i on suurem kui arv %i ja arv %i", arv2, arv1, arv3);
        return 0;
    }
    else
    {
        printf("Arv %i on suurem kui arv %i ja arv %i", arv3, arv1, arv2);
    }
}