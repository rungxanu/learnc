// Nhập 2 số thực, kiểm tra xem chúng có cùng dấu không

#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
    double a, b;
    // Nhập 2 số
    printf ("Nhap so a: ");
    scanf ("%lf", &a);
    printf ("\nNhap so b: ");
    scanf ("%lf", &b);
    // Kiểm tra
    if (a/b > 0.0)
        printf ("\nKet qua: a va b cung dau.");
    else if (a/b < 0.0)
        printf ("\nKet qua: a va b khac dau.");
    return 0;
}