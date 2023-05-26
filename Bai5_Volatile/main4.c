#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void test1(){
    uint8_t array[5];

    printf("Dia chi: %p\n", array);
}

void test2(){
    uint8_t *array = (uint8_t*)malloc(sizeof(uint8_t)*5);
    printf("Dia chi: %p\n", array);
    // free(array); // Gọi hàm free array để xoá địa chỉ của test 2, khi đó có thể tái sử dụng địa chỉ của test2 khi gọi hầm 2 lần nữa
}

int main()
{
    test1();
    test1();

    test2();
    test2();
    // dia chi ô nhớ test1 thay đổi nhưng test2 không đổi
    // do test 1 được lưu vào stack, sau khi kết thúc hàm thì bộ nhớ sẽ bị xoá, máy tính có thể sử dụng lại địa chỉ nhớ này
    //còn test 2 có malloc nên được lưu vào heap, không thể tự xoá địa chỉ ô nhớ được nên khi gọi lại sẽ được lưu vào một địa chỉ khác
    return 0;
}