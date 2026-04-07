#include <stdio.h>

int main(void)
{
    // Leia arvu faktoorial (n!)  1*2*3*4*5=120
    int sum = 1;
    for (int n = 1; n <= 5; n++)
    {
        sum *= n;
        printf("%i", n);

        if (n < 5)
            printf("*");
        else
        {
            printf(" = %i\n", sum);
        }
    }
}