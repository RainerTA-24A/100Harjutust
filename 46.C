#include <stdio.h>

int main(void)
{
    // Numbri tagurpidi pööramine 1234 -> 4321 MUUTUJAGA

    int number = 1234;
    int jaak;
    int uus = 0;

    while (number > 0)
    {
        jaak = number % 10;
        uus = uus * 10 + jaak;
        number = number / 10;
    }
    printf("%d", uus);
}