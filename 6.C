#include <stdio.h>

int main(void)
{

    // Celsius to fahrenheit
    // F = (C * 1.8) + 32
    float f;
    float c;
    printf("Celsiuse teisendamine fahrenheitiks: ");
    if (scanf("%f", &c) != 1)
    {
        printf("Sisesta number!");
        return 1;
    };

    f = c * 1.8 + 32;
    printf("%.1f fahrenheiti", f);
    return 0;
}