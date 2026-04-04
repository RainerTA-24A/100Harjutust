#include <stdio.h>

int main(void)
{
    // printf("Rainer, 2008");

    // Natuke keerulisem
    char name[50];
    int age;
    printf("Mis on teie nimi: ");
    scanf("%s", name);
    printf("Mis aastal sundisite: ");
    scanf("%i", &age);
    printf("%s, %i", name, age);
    return 0;
}