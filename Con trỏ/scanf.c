#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[])
{
    int x;
    /* Thông thường, để nhập giá trị x từ bàn phím, ta sẽ dùng lệnh:
    scanf ("%d", &x);
    Với kiến thức về con trỏ, ta hiểu function này đang làm việc với con trỏ
    của biến x, và có thể thay đổi trực tiếp giá trị của x. */
    // Từ đó, ta có cách nhập khác như sau:
    int *pointer = &x;
    printf ("Nhap mot so: ");
    scanf ("%d", pointer);
    /* Không dùng dấu &, bởi bản thân con trỏ đã nhận địa chỉ của biến x.
    Nếu dùng dấu & thì scanf sẽ nhận được địa chỉ của pointer, nhưng thứ chúng ta cần
    lại là địa chỉ của biến x, nên không đúng yêu cầu. */

    return 0;
}