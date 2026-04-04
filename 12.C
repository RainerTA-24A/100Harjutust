#include <stdio.h>

int main(void)
{

    int a, b;
    a = 10;
    b = 5;
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Vahetatud arvud: %i, %i", a, b);
    return 0;
}