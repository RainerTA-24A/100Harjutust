#include <stdio.h>

int main(void)
{
    // kontrolli kas arv on paaritu või paaris.

    int arv;

    printf("Sisesta number ja siis saad teada, kas arv on paaritu või paaris: ");
    if (scanf("%i", &arv) != 1)
        return 1;
    if (arv % 2 == 0)
    {
        printf("Arv on paaris\n");
        return 0;
    }
    else
        printf("Arv on paaritu\n");
}