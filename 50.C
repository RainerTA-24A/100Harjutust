#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    // Arva ära numbri mäng

    int arvamus = 0;
    srand(time(NULL));
    int N = 100;
    int value = rand();
    value = (value % N) + 1;

    printf("%i\n", value);
    while (arvamus != value)
    {
        printf("Mis number sa pakud: ");
        scanf("%i", &arvamus);
        if (arvamus == value)
        {
            printf("Tubli! valisid õige numbri!\n");
            return 0;
        }
        else
        {
            printf("Pakkusid valesti! Proovi uuesti: \n");
        }
    }
}