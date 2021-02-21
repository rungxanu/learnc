// Nhập 2 số thực, kiểm tra xem chúng có cùng dấu không

#include <stdlib.h>
#include <stdio.h>

void check ()
{
    double a, b;
    printf ("Nhap so a: ");
    scanf ("%lf", &a);
    printf ("\nNhap so b: ");
    scanf ("%lf", &b);
    if (a/b > 0.0)
        printf ("\nKet qua: a va b cung dau.");
    else if (a/b < 0.0)
        printf ("\nKet qua: a va b khac dau.");
}

int main (int argc, char *argv[])
{
    check();
    return 0;
}