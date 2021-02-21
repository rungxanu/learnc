#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    // Khai báo
    int n;
    int sum = 0;

    // Nhập n
    do
    {
    printf ("Nhap so n: ");
    scanf ("%d", &n);

    if (n <= 0) // Điều kiện khi nhập n
        {
            printf ("N phai la lon hon 0, vui long nhap lai!\n");
        }
    } while (n <= 0);

    // Điều kiện
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i; // Tính tổng các ước của n
        }
    }
    
    // In ra các tổng ước số của n
    printf ("Tong cac uoc so cua so nguyen duong n la: %d", sum); 
    
    return 0;
}