// Giải phương trình ax + b = 0

#include <stdlib.h>
#include <stdio.h>

double giaiptbac1 (double a, double b)
{
    return -b/a;
}

int main (int argc, char *argv[])
{
    double a, b;
    do
    {
        printf ("Nhap so a: ");
        scanf ("%lf", &a);
    } while (a == 0 && printf ("\na phai la so khac 0, vui long nhap lai!\n"));
    printf ("Nhap so b: ");
    scanf ("%lf", &b);

    // Kết quả
    printf ("Ket qua: Tap nghiem x la %lf", giaiptbac1(a, b));

    return 0;
}