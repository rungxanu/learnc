// Giải phương trình ax + b = 0

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
    double a, b, x;

    do
    {
        printf ("\nNhap so a: ");
        scanf ("%lf", &a);
    } while (a == 0 && printf ("\na phai la so khac 0, vui long nhap lai!\n"));
    printf ("Nhap so b: ");
    scanf ("%lf", &b);

    x = -b/a;

    printf ("Ket qua: Tap nghiem x la %lf", x);

    return 0;
}