#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    int n, m, i, max;
    max = 0;

    do // Điều kiện nhập n
    {
        printf ("Nhap so n: ");
        scanf ("%d", &n);
    } while (n<=0 && printf ("\nN phai la so lon hon 0, vui long nhap lai!\n"));
    
    m = n; // Để thực hiện vòng lặp

    while (m != 0)
    {
        i = m%10;
        if (max < i)
            max = i;
        m /= 10;
    }

    printf ("Chu so lon nhat cua n la: %d", max);
    
    return 0;
}