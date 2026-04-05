#include <stdio.h>

int main(void)
{
    // Trükime täisarvu viimase numbri. (sisestad 458 aga väljastad 8)

    int number, viimane;

    printf("Sisesta number ja siis saame täisarvu viimase numbri: ");
    if (scanf("%i", &number) != 1)
        return 1;

    viimane = number % 10;

    printf("%i", viimane);
    return 0;
}