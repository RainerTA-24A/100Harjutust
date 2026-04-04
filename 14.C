#include <stdio.h>

#define PI 3.14159

float kera(float r);

int main(void)
{

    // Surface area of a sphere
    // SA = 4*PI*r*r

    float r, area;

    // Raadiuse küsimine

    printf("Mis on raadiuse pikkus: ");
    if (scanf("%f", &r) != 1)
        return 1;

    area = kera(r);

    printf("Kera pindala on: %.2f", area);
    return 0;
}

float kera(float raadius)
{
    return 4 * PI * raadius * raadius;
}