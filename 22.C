#include <stdio.h>

int main(void)
{
    // Kontrollime kas arv on negatiivne || null || positiivne

    int arv;

    printf("Sisesta üks arv: ");
    if (scanf("%i", &arv) != 1)
        return 1;

    if (arv > 0)
    {
        printf("Arv %i on positiivne", arv);
        return 0;
    }
    else if (arv < 0)
    {
        printf("Arv %i on negatiivne", arv);
        return 0;
    }
    else
    {
        printf("Arv %i on null", arv);
        return 0;
    }
}