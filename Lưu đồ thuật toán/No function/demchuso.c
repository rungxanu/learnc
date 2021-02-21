#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv)
{
    // Khai báo
    int n, m;
    int sochuso = 0;
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

    // Đếm số lượng chữ số
    while (m != 0)
    {
        sochuso++;
        m /= 10; // Vì m là số nguyên nên mới có thể làm như này
    }

    printf ("So chu so cua n la: %d", sochuso);
}