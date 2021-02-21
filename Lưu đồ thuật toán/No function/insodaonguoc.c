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

    do
    {
        i = m%10;
            printf ("%d", i);
        m /= 10;
    } while (m != 0);
    
    return 0;
}