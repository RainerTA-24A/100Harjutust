#include <stdio.h>

int main(void)
{
    // Trüki tähestik A-Z
    // VÕI --> for (char c = 'A'; c <= 'Z'; c++)
    for (char alphabet = 65; alphabet < 91; alphabet++)
    {
        printf("%i on ASCIIs %c\n", alphabet, alphabet);
    }
}