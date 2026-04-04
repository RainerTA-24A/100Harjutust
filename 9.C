#include <stdio.h>

// Funktsioon keskmise arvutamiseks.
float function(float esimene, float teine, float kolmas)
{
    return (esimene + teine + kolmas) / 3;
}

int main(void)
{
    float a, b, c;
    // Leia 3 arvu keskmine

    // Küsime kasutajalt 3 arvu
    printf("Mis on esimene arv: ");
    if (scanf("%f", &a) != 1)
        return 1;

    printf("Mis on teine arv: ");
    if (scanf("%f", &b) != 1)
        return 1;

    printf("Mis on kolmas arv: ");
    if (scanf("%f", &c) != 1)
        return 1;

    float keskmine = function(a, b, c);

    printf("Kolme arvu keskmine on: %.2f", keskmine);
    return 0;
}