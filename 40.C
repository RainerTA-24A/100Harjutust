#include <stdio.h>

int main(void)
{
    // Trüki tärnidest rida ehk kui sisetad 5 siis *****
    int star;
    printf("Mitu tähte tahta printida: ");
    scanf("%i", &star);

    for (int i = 0; i < star; i++)
    {
        printf("*");
    }
}