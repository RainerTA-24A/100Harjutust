#include <stdio.h>

int main(void)
{
    // Arvuta arvude summa 1-st kuni sisestatud arvuni n
    int n;
    int sum = 0;
    printf("Mis arv teid aratab: ");
    scanf("%i", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%i\n", sum);
}