#include <stdlib.h>
#include <stdio.h>

void triplePointer (int *pointerSoHang); // 1. Một prototype được khai báo

int main (int argc, char *argv[])
{
    int sohang = 5; // 2. Một biến số được thêm vào

    triplePointer (&sohang); // 3. Ta gửi địa chỉ của biến số số hằng vào function
    printf ("%d", sohang); // 5. Trả về kết quả

    return 0;
}

void triplePointer (int *pointerSoHang)
{
    *pointerSoHang *= 3;
    /* 4. Lúc này, con trỏ đã có được địa chỉ của biến số,
    và nó có thể trực tiếp thay đổi giá trị của biến số,
    như trong trường hợp này là nhân 3. 
    Điểm hay là không cần dùng return cũng trả về được kết quả. */
}