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

    // Tính tổng 1 + 1/3 + ... + 1/(2n + 1)
    for (int i = 0; i <= n; i++)
    {
        sum = sum + 1.0/(2*i + 1);
    }

    // In ra kết quả
    printf ("Ket qua la: %lf", sum);

return 0;
}