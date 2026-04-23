/*#include <stdio.h>

int main(void)
{
    // Armstrongi arvu kontroll
    // arv, mis võrdub oma numbrite kuupide summaga(nt 153 = 1^3 + 5^3 + 3^3)
    int test = 153;
    int summ = 0;
    int teine;
    int kolmas;

    int num = 153;
    int kuup;
    int second;
    int sum = 0;

    while (test > 0)
    {
        kolmas = test % 10;
        for (int i = 0; i < 1; i++)
        {
            teine = kolmas * kolmas;
            kolmas = teine * kolmas;
        }
        test /= 10;
        summ = summ + kolmas;
    }
    if (num == summ)
    {
        printf("On Armstrongi arvu kontroll!\n");

        while (num > 0)
        {
            kuup = num % 10;
            for (int i = 0; i < 1; i++)
            {
                second = kuup * kuup;
                kuup = second * kuup;
            }
            printf("%i", kuup);
            num /= 10;
            sum = sum + kuup;
            if (num > 0)
            {
                printf(" + ");
            }
        }
        printf(" = ");
        printf("%i\n", sum);
    }
    else if (num != summ)
    {
        printf("Ei ole Armstrongi arvu kontroll!\n");
    }
} */

#include <stdio.h>

int main(void)
{
    int num = 153;
    int temp = num;
    int summa = 0;
    int jaak;

    printf("Arvutus: ");

    while (temp > 0)
    {
        jaak = temp % 10;
        int kuup = jaak * jaak * jaak; // Arvutame kuubi kohe
        summa += kuup;

        printf("%i", kuup);
        temp /= 10;

        if (temp > 0)
            printf(" + "); // Trükime plussi ainult arvude vahele
    }

    printf(" = %i\n", summa);

    if (num == summa)
    {
        printf("%i ON Armstrongi arv!\n", num);
    }
    else
    {
        printf("%i EI OLE Armstrongi arv.\n", num);
    }

    return 0;
}