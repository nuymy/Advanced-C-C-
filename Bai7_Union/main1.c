#include <string.h>
#include <stdint.h>

typedef union main1
{
    /* data */
    uint32_t var1[3]; // 4*3 = 12
    uint16_t var2[7]; // 2*7 = 16
    uint64_t var3[4]; // 8*4 =32
}typeData; // ket qua se =32 do 32 la member lon nhat

int main()
{
    typeData data;
    printf("size: %d byte\n", sizeof(data));

    return 0;
}
