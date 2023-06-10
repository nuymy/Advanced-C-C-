// Thông qua con trỏ hàm buộc hàm khác làm input parameter

#include <stdio.h>

void tong(int a, int b)
{
    printf("Tong %d va %d bang %d\n", a, b, a+b);
}

void hieu(int a, int b)
{
    printf("Hieu %d va %d bang %d\n", a, b, a-b);
}

void tich(int a, int b)
{
    printf("Tich %d va %d bang %d\n", a, b, a*b);
}

void thuong(int a,  int b)
{
    printf("Thuong %d va %d bang %f\n",a,b, (float)a/b);
}

void pheptinh(int a, int b, void (*ptr)(int, int))
{
    printf("Chuong trinh tinh toan\n");
    ptr(a,b);
}


int main()
{
    pheptinh(8,6,&tong);

    pheptinh(8,6,&hieu);

    pheptinh(8,6,&tich);

    pheptinh(8,6,&thuong);

    return 0;
}