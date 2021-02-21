#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    // Khai báo
    int n;

    // Nhập n
    do
    {
    printf ("Nhap so n: ");
    scanf ("%d", &n);

    if (n <= 0) // Điều kiện khi nhập n
        {
            printf ("N phai la so lon hon 0, vui long nhap lai!\n");
        }
    } while (n <= 0);

    // Điều kiện
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf ("%d ", i); // In ra các ước số của n
        }
    }

    return 0;
}