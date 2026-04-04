#include <stdio.h>

int main(void)
{
    int a;
    int b;
    printf("Esimese arv: ");
    scanf("%i", &a);
    printf("Teine arv: ");
    scanf("%i", &b);
    printf("%i + %i = %i", a, b, a + b);
    return 0;
}