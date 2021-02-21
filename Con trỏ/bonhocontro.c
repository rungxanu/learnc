#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int x = 10;
    int *pointer = &x;
    printf ("Dia chi cua pointer la: %d\n", &pointer);
    printf ("Gia tri cua pointer la: %d\n", pointer);
    printf ("Dia chi cua bien x la: %d\n", &x);
    printf ("Gia tri cua bien x la: %d", *pointer);

    return 0;
}