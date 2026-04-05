#include <stdio.h>

int teiseldamine(int meeter);
int teiseldamine1(int meeteri);

int main(void)
{
    // Teisendame meetrid kilomeetriteks ja meetriteks
    //  1 kilomeetris on 1000 meetrit.

    int meetrid, tulemus, tulemus1;

    printf("Mitu meetrit teisendada tahad: ");
    if (scanf("%i", &meetrid) != 1)
        return 1;

    tulemus = teiseldamine(meetrid);
    tulemus1 = teiseldamine1(meetrid);

    printf("Pärast teiseldamist vastus on %i kilomeetrit ja %i meetrit", tulemus, tulemus1);

    return 0;
}

int teiseldamine(int meeter)
{
    int kilomeeter = meeter / 1000;
    return kilomeeter;
}

int teiseldamine1(int meeteri)
{
    int jaak = meeteri % 1000;
    return jaak;
}