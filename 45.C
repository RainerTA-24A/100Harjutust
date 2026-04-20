#include <stdio.h>

int main(void)
{
    // Arvu astendamine ilma pow()-ta
    int arv = 2;
    int alg = arv;
    int aste = 16;
    if (aste == 0)
    {
        printf("0-ga astendamisel on tulemus 1!\n");
    }
    else
    {
        for (int n = 1; n < aste; n++)
        {

            arv *= alg;
        }
        printf("Arv astmes %i on: %i \n", aste, arv);
    }
}