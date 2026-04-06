#include <stdio.h>

int main(void)
{
    // Trüki paarisarvud 1-20
    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 0)
            printf("%i\n", i);
    }
}