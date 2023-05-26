#include <stdio.h>
#include <stdint.h>

const uint8_t temp = 15;

char name[] = "Nguyen A";

char *name2 = "Nguyen B";

int main()
{
    name[0] = 'W';
    // name2[0] = 'W'; // Chỉ có thể học name2 mà không thể thay đổi ký tự của name2 vì đây là biến con trỏ được lưu vào phân cùng nhớ text nên chỉ có thể đọc
    printf("test: %s\n", name);
    printf("test: %s\n", name2); 

}