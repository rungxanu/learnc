#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    // Khai báo
    int n, m;
    int sum = 0;

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
    m = n;

    // Tính tổng các chữ số của số n
    while (m != 0)
    {
        sum = sum + m%10;
        m = m/10;
    }

    printf ("Tong cac chu so cua n la: %d", sum);
}