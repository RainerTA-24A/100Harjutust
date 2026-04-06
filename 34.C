#include <stdio.h>

int main(void)
{
    // Trüki korrutustable arvule 5. (max 10)
    // Ma annan kasutajale valida numbri

    int n;

    printf("Mis on n: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%i * %i = %i\n", i, n, i * n);
    }
}