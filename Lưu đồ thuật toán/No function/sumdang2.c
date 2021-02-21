#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    // Khai báo
    int n;
    long sum = 0;

    // Nhập số n
    printf ("Nhap so n: ");
    scanf ("%d", &n);

    // Tính tổng từ 1^2 + 2^2 + ... + n^2
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i*i;
    }

    // In ra kết quả
    printf ("Ket qua la: %ld", sum);

return 0;
}