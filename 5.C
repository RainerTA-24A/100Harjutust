#include <stdio.h>

// Defineerime PI konstandina - see on hea tava!
#define PI 3.14159

int main(void)
{
    float r; // Kasutame float-i, et lubada ka komaga raadiust
    float area;

    printf("Sisesta ringi raadius: ");

    if (scanf("%f", &r) != 1)
    {
        printf("Viga: Sisesta palun number!\n");
        return 1;
    }

    // Arvutame pindala
    area = PI * r * r;

    // %.2f tähendab, et näitame ainult 2 kohta pärast koma
    printf("Ringi pindala on: %.2f\n", area);

    return 0;
}