#include <stdio.h>

int main(void)
{
    // Algarvu kontroll
    // jagub ainult 1 ja iseendaga
    int a = 29;
    int onAlgarv = 1;
    if (a == 0 || a == 1)
    {
        printf("Arv ei ole algarv!\n");
    }
    else
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                onAlgarv = 0;
                break;
            }
        }
        if (onAlgarv == 1)
        {
            printf("Arv on algarv!\n");
        }
        else
        {
            printf("Arv ei ole algarv!\n");
        }
    }
}