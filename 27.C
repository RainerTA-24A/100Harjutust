#include <stdio.h>

int main(void)
{
    // Leida kas kasutaja sisestas konsonanti või vokaali
    // Konsonant ( B, D, F, G, H, J, K, L, M, N, P, R, S, T, V jm)
    // Vokaal (a, e, i, o, u, õ, ä, ö, ü)

    char taht;

    printf("Kas on konsonant või vokaal: ");
    scanf("%c", &taht);

    switch (taht)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'õ':
    case 'ä':
    case 'ö':
    case 'ü':
        printf("teie taht %c on vokaalne!\n", taht);
        break;
    case 'b':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'r':
    case 's':
    case 't':
    case 'v':
        printf("Teie taht %c on konsonant!\n", taht);
        break;
    }
}