#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    // Khai báo
    int n;
    long p = 1;
    long sum = 0;

    // Nhập số n
    printf ("Nhap so n: ");
    scanf ("%d", &n);

    // Tính tổng 1 + 1.2 + 1.2.3 + ... + 1.2.3...N
    for (int i = 1; i <= n; i++)
    {
        p *= i;
        sum += p;
    }

    // In ra kết quả
    printf ("Ket qua la: %ld", sum);

return 0;
}