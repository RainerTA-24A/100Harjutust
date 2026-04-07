#include <stdio.h>

int main(void)
{
    // Loe, mitu numbrit on täisarvus

    int number;
    int sum = 1;

    printf("Mis on teie number: ");
    scanf("%i", &number);
    while (number > 10)
    {
        number /= 10;
        sum++;
    }
    printf("teie täisarvus on %i numbrit!\n", sum);
}