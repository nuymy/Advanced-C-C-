#include <stdio.h>
#include <stdint.h>

uint8_t temp = 15; // nằm ở phân vùng nhớ data
//uint8_t temp = 0; // nằm ở phân vùng nhớ bss

static uint8_t test = 21; // nằm ở phân vùng nhớ đata
//static uint8_t test ; // nằm ở phân cùng nhớ bss
void hienthi()
{
    static uint8_t i=23; // Nằm ở phân vùng nhớ data
}
void main()
{
    return 0;
}