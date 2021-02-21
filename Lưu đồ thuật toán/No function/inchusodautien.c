#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    int n, m, i;

    do // Điều kiện nhập n
    {
        printf ("Nhap so n: ");
        scanf ("%d", &n);
    } while (n<=0 && printf ("\nN phai la so lon hon 0, vui long nhap lai!\n"));
    
    m = n; // Để thực hiện vòng lặp

    while (m != 0)
    {
        i = m;
        if (i-9 <= 0)
            printf ("Chu so dau tien cua n la: %d", i);
        m /= 10;
    }

    return 0;
}