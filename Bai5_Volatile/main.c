// #include <stdio.h>
// #include <stdint.h>
// #include <time.h>

// volatile uint8_t a;
// volatile int test =10;

// int readDataFromUART();

// int main()
// {
//     while(1)
//     {
//         test = readDataFromUART();
//         // A();
//         // B();
//         // C();
//         printf(test);
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    volatile int x = 10;
    int y = 20;

    printf("x = %d, y = %d\n", x, y);

    x = 15; // giá trị của biến x có thể thay đổi bất kỳ lúc nào
    y = 25;

    printf("x = %d, y = %d\n", x, y);

    return 0;
}