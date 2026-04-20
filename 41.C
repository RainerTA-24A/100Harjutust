#include <stdio.h>

int main(void)
{
    // Fibonacci jada ehk 0, 1, 1, 2, 3, 5 || liidad kaks eelmist arvu
    int n;
    int esimene = 0;
    int teine = 1;
    int jargmine;

    printf("Mis on fibonacci arv: ");
    scanf("%i", &n);

    if (n == 0)
    {
        printf("Fibonacci arv on 0\n");
        return 0;
    }
    if (n == 1)
    {
        printf("Fibonacci arv on 1\n");
        return 0;
    }

    for (int i = 2; i <= n; i++)
    {

        jargmine = esimene + teine;
        esimene = teine;
        teine = jargmine;
    }
    printf("Teie fibonacci number on %i", jargmine);
}