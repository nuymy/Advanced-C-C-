#include <stdio.h>
#include "test.c"
#define MAX 10

void test()
{
    printf("This is test\n");
}

int main (int argc, char const *argv[])
{
    /* code */
    test();
    HienThi();
    printf("MAX: %d\n", MAX);


    return 0;
    
}