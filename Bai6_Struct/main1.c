#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t ngay;
    uint64_t tuan;
    uint16_t nam;
    uint32_t thang;

}typeDate;

int main()
{
    printf("Size: %lu byte\n", sizeof(typeDate));

    return 0;
}