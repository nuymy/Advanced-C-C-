#include <stdio.h>
#include <stdint.h>

void count()
{
    uint8_t temp=0;
    printf("temp: %d\n", temp);
    temp;
}

void count2()
{
    static uint8_t temp =0; // Hàm static chỉ chạy 1 lần nên khi gọi lại hàm sẽ bỏ qua bước static này
    printf("temp: %d\n", temp); // vơi vi điều khiển để thu hồi biên static chỉ có thể tắt nguồn hoặc reset
    temp++;
}

int main()
{
    count(); // Ket qua là 0 0 0 vì khi gọi hàm lại thì giá trị hạm bị reset lại về 0
    count();
    count();

    count2();
    count2();
    count2();
}