#include <stdio.h>

int main(void)
{
    // Leia massiivi kõige väiksem element
    int mass[5] = {5, 11, 35, 2, 4};
    int count = 5;
    int arv = mass[0];

    for (int i = 0; i < count; i++)
    {
        if (arv > mass[i])
        {
            arv = mass[i];
        }
    }
    printf("%i", arv);
}