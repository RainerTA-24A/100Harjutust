#include <stdio.h>

int main(void)
{
    // Leiame kas kasutaja on täisealine(18+)

    int vanus;

    printf("Mis on teie vanus: ");
    if (scanf("%i", &vanus) != 1)
        return 1;
    if (vanus >= 18)
    {
        printf("Te olete täisealine! teretulemast!\n");
        return 0;
    }
    else if (vanus < 18 && vanus > 0)
    {
        printf("Te pole täisealine!");
    }
    else
    {
        printf("Sisestage korrektne vanus!\n");
        return 1;
    }
}