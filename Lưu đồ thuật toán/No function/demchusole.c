#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv)
{
    int n, m;
    int count = 0;

    do // Điều kiện nhập n
    {
        printf ("Nhap so n: ");
        scanf ("%d", &n);
    } while (n<=0 && printf ("\nVui long nhap lai, n phai la so lon hon 0!\n"));

    for (m = n; m != 0; m/=10)
    {
        if (m%2 != 0)
            count++;
    }

    printf ("Cac chu so le cua so n la: %d", count);
}