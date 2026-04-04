#include <stdio.h>

int main(void)
{
    // Kahe muutuja väärtuste muutmine kolmanda muutujaga

    float a, b, c;
    a = 10;
    b = 5;
    c = a;
    a = b;
    b = c;

    printf("%f, %f", a, b);
    return 0;
}