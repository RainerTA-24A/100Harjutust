#include <stdio.h>

int main(void)
{
    // Hinde määraja
    //  90+ -> A, 80-89 -> B, 65-79 -> C, 64-0 -> F
    int punktid;

    printf("Mitu punkti said eksamil? ");
    if (scanf("%i", &punktid) != 1)
        return 1;

    switch (punktid / 10)
    {
    case 10:
        printf("Said A!\n");
        break;
    case 9:
        printf("Said A!\n");
        break;
    case 8:
        printf("Said B!\n");
        break;
    case 7:
        printf("Said C!\n");
        break;
    case 6:
        if (punktid >= 65)
            printf("Said C!\n");
        else
            printf("Said F\n");
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Said F!\n");
        break;
    }
}