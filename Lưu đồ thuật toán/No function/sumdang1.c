#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv)
{
    // Khai báo
    int i, n;
    long sum = 0;
    // Nhập số n
    printf ("Nhap so n ");
    scanf ("%d", &n);
    // Tính tổng từ 1 tới n
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf ("Ket qua: %ld", sum);

return 0;
}