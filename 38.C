#include <stdio.h>

int main(void)
{
    // Leia täisarvu numbrite summa
    // Tulevikus tegema õiges järjekorras
    int number;
    int sum = 0;
    int digit = 0;

    printf("Mis on teie täisarv: ");
    scanf("%i", &number);

    while (number >= 1)
    {
        digit = number % 10;
        sum += digit;
        number /= 10;
        printf("%i", digit);
        if (number >= 1)
        {
            printf(" + ");
        }
    }
    printf(" = %i \n", sum);
}