#include <stdio.h>

int main(void)
{
    // Leiame suurima arvu kahest sisestatud

    int a, b;
    printf("Vali üks arv: ");
    if (scanf("%i", &a) != 1)
        return 1;

    printf("Vali teine arv: ");
    if (scanf("%i", &b) != 1)
        return 1;

    if (a > b)
    {
        printf("%i on suurem kui %i", a, b);
        return 0;
    }
    else if (a < b)
    {
        printf("%i on väiksem kui %i", a, b);
        return 0;
    }
    else
    {
        printf("Arvud %i ja %i on võrsed", a, b);
    }
}