#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    // Khai báo
    int n;
    double sum = 0.0;

    // Nhập số n
    printf ("Nhap so n: ");
    scanf ("%d", &n);

    // Tính tổng 1/2 + 2/3 + ... + n/(n + 1)
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i/(i + 1.0);
    }

    // In ra kết quả
    printf ("Ket qua la: %lf", sum);

return 0;
}