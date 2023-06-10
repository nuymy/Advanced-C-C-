// Phần con trỏ hàm
#include <stdio.h>

int tong(int a, int b)
{
    printf("a: %d, b: %d, tong: %d", a, b, a+b);
}

float tich(float a, float b)
{
    return a*b;
    
}

int main()
{
    void (*ptr) (int, int);

    ptr = &tong;
    ptr(9,8);

    float (*ptr_tich)(float, float);
    ptr_tich = &tich;
    
    printf("\ntich: %f", ptr_tich(5,6));


    return 0;

}