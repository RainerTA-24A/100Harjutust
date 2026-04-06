#include <stdio.h>

int main(void)
{
    // Lihtne kalkulaatori tegemine +,-,/,*
    float num1, num2;
    char sumbol;

    printf("Tere tulemast kalkulaatorisse!\nAlustamiseks vali kas '+','-','/','*': ");
    scanf(" %c", &sumbol);

    printf("Mis on teie esimene arv: ");
    scanf("%f", &num1);

    printf("Mis on teie teine arv: ");
    scanf("%f", &num2);

    switch (sumbol)
    {
    case '+':
        printf("%.5f ja %.5f ja summa on %.2f", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.5f ja %.5f lahutus on %.2f", num1, num2, num1 - num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("%.5f ja %.5f jagatis on %.2f", num1, num2, num1 / num2);
            break;
        }
        else
        {
            printf("Nulliga jagada ei saa dolbajoob!\n");
            break;
            return 1;
        }
    case '*':
        printf("%.5f ja %.5f korrutis on %.2f", num1, num2, num1 * num2);
        break;
    default:
        printf("Midagi laks valesti!\n");
    }
}