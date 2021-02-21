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
            printf ("N phai la so lon hon 0, vui long nhap lai!\n");
        }
    } while (n <= 0);

    // Tìm ước số của n
    for (int i = 1; i < n; i++) // Số hoàn thiện nên loại bỏ ước là chính nó -> i<n
    {
        if (n%i == 0)
        {
            sum += i;
        }
    }

    // Kiểm tra xem n có phải số hoàn thiện
    if (n == sum)
    {
        printf ("N la so hoan thien.\n");
    }
    else
    {
        printf ("N khong phai la so hoan thien.\n");
    }

    return 0;
}