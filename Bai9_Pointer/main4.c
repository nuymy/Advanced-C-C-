//Con tro void co thể lưu nhiều kiểu giá trị cùng một lúc
#include <stdio.h>

int main()
{
    int i=10;
    char c ='A';
    double d=10.4;

    void *ptr = &i;
    printf ("Dia chi: %p, Gia tri: %d\n", ptr, *(int*)ptr); //ép kiểu về con trỏ integer trước. để lấy giá trị của con trỏ, ta thêm 1 dấu * phía trước

    ptr = &c;
    printf ("Dia chi: %p, Gia tri: %c\n", ptr, *(char*)ptr);

    ptr = &d;
    printf ("Dia chi: %p, Gia tri: %f\n", ptr, *(double*)ptr);

    return 0;
}