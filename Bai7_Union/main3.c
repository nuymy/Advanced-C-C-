#include <stdint.h>

typedef union 
{
    /* data */
    uint8_t var1[5]; 
    uint16_t var2[2]; 
    uint32_t var3[5];
}typeData;

int main()
{
    typeData data;

    for (int i=0; i<5; i++)
    {
        data.var1[i]=i;
    }

    // for (int i=0; i<2; i++)
    // {
    //     data.var2[i] = 2*i;
    // }

    for (int i=0; i<2; i++)
    {
        data.var2[i] = 2*i; 
    }

    for (int i=0; i<2; i++)
    {
        data.var3[i] = 10*i; 
    }

    for (int i=0; i<5; i++)
    {
        printf("test1: %d\n", data.var1[i]);
    }
}
