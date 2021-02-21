// Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv)
{
    double a, b, c, max;
    
    printf ("Nhap so a: ");
    scanf ("%lf", &a);
    printf ("Nhap so b: ");
    scanf ("%lf", &b);
    printf ("Nhap so c: ");
    scanf ("%lf", &c);

    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    
    printf ("So lon nhat la: %lf", max);

    return 0;
}