#include <stdio.h>

int main(void)
{
    // Lihtintressi arvutamine
    // Küsi laenusumma, intressimäär ja aeg (aastates). Arvuta lõppsumma.

    float lihtintress;
    int laen = 2000;
    float intress = 5 / 100.0;
    int aasta = 2;
    float summa = 0;

    lihtintress = (laen * intress * aasta);
    summa = laen + lihtintress;
    printf("Lihtintress on: %.2f\n", summa);
}