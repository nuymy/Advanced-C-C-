#include <stdint.h>
#include <string.h>

// typedef union // union gán tất cả giá trị về cùng 1 địa chỉ
// {
//     /* data */
//     uint32_t var1;
//     uint16_t var2;
//     uint64_t var3;
// }typeData;

typedef struct // struct sẽ gán mỗi biến 1 địa chỉ. Địa chỉ sau sẽ liền kế giá tị trước trong cùng 1 struct
{
    /* data */
    uint32_t var1;
    uint16_t var2;
    uint64_t var3;
}typeData;

int main()
{
    typeData data = {.var1 = 2};

    printf("test: %d\n", data.var1);
    printf("test: %d\n", data.var2);
    printf("test: %d\n", data.var3);

    printf("Dia chi union: %p\n", &data); // tất cả biến cùng 1 địa chỉ nên sẽ có cùng 1 giá trị
    printf("Dia chi union.var1: %p\n", &data.var1);
    printf("Dia chi union.var2: %p\n", &data.var2);
    printf("Dia chi union.var3: %p\n", &data.var3);

}
