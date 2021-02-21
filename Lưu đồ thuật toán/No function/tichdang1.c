#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    // Khai báo
    int n;
    long sum = 1;

    // Nhập số n
    printf ("Nhap so n: ");
    scanf ("%d", &n);

    // Tính tích 1x2x3x...xN
    for (int i = 1; i <= n; i++)
    {
        sum *= i;
    }

    // In ra kết quả
    printf ("Ket qua la: %ld", sum);

return 0;
}