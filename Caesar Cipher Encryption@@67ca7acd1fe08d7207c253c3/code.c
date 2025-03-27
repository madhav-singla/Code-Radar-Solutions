#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>




void caesarCipher(char message[], int shift, char encrypted[])
{
    for (int i = 0; i < count; i++)
    {
        char ch = message[i];
        if (isupper(ch))
        {
            encrypted[i] = ((ch - 'A' + shift) % 26) + 'A';
        }
        if (islower(ch))
        {
            encrypted[i] = ((ch - 'a' + shift) % 26) + 'a';
        }
        else
        {
            encrypted[i] = ch;
        }
    }
    encrypted[i] = '\0'
}