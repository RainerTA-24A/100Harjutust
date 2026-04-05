#include <stdio.h>

int teiseldamine(int sekundid);
int teiseldamine1(int sekundid);

int main(void)
{
    // Teisenda sekundid minutiteks ja sekunditeks.

    // deklareerime muutujad
    int sekundid, tulemus, tulemus1;

    // küsime kasutajalt mitu sekundit teiseldada tahab
    printf("Mitu sekundit teiseldada tahad: ");
    if (scanf("%i", &sekundid) != 1)
    {
        return 1;
    }

    tulemus = teiseldamine(sekundid);
    tulemus1 = teiseldamine1(sekundid);

    printf("Pärast teiseldamist on vastus %i minutit ja %i sekundit", tulemus, tulemus1);
    return 0;
}
// minutite teiseldamine
int teiseldamine(int sekundid)
{
    // leiame minutid
    int minutid = sekundid / 60;

    return minutid;
}

int teiseldamine1(int sekundid)
{

    // leiame jaagi(sekundid)
    int jaak = sekundid % 60;

    return jaak;
}