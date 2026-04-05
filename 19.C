#include <stdio.h>
#include <math.h>

int main(void)
{
    // leiame arvu ruudu ja arvu kuubi (nˇ2 ja nˇ3)
    // Kasutame math library pow selle jaoks pow(x, y)

    float arv, ruut, kuup;

    printf("Mis arvu tahad: ");
    if (scanf("%f", &arv) != 1)
        return 1;

    ruut = pow(arv, 2);
    kuup = pow(arv, 3);

    printf("Arvu ruut on: %.2f \nArvu kuup on: %.2f \n", ruut, kuup);
    return 0;
}