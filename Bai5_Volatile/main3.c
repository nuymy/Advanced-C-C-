#include <stdio.h>
#include <stdint.h>

void swap(int a, int b)
{
    int temp = a; // Những biến này sẽ được lưu ở stack
    a=b;
    b=temp;
}

int main ()
{
    int soDau = 15;
    int soCuoi=20;
    swap(soDau, soCuoi); // ở đây hàm sẽ không tiến hành thay đổi vì sau khi thoát
                        //ra khỏi hàm swap thì máy tính sẽ tiến hành thu hồi 2 vùng nhớ của soDau và soCuoi

    printf("soDau: %d, soCuoi: %d\n", soDau, soCuoi);
    return 0;
}