// Viết chương trình tìm số lớn nhất trong 3 số thực a, b, c

#include <stdio.h>
#include <stdlib.h>

void showmax()
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
}

int main (int argc, char *argv)
{
    showmax();
    return 0;
}