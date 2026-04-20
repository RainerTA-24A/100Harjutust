#include <stdio.h>

int syt_rekursiivne(int a, int b)
{
    // 2 suurima ühisteguri arvutamine
    return b == 0 ? a : syt_rekursiivne(b, a % b);
}
int main(void)
{
    // Suurim Ühisteguri (SÜT) leidmine (2 arvu)

    int a = 55;
    int b = 76;

    printf("SÜT on: %d", syt_rekursiivne(a, b));
}