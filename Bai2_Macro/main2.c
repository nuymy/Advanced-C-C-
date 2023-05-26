#include <stdio.h>

#define VARIABLE(name) int int_##name; \   
char char_##name;                      \
double double_##name;
// Sử dụng dấu ## để nối chuỗi
//Luu ý thêm dấu \ để viết một macro nhiều hàm
int main()
{
    VARIABLE(bien); 
    //Tien hành khởi tạo các hàm int_bien, char_bien, double_bien

    int_bien =20;
    char_bien = 'A';
    double_bien = 10.6;
    printf ("int: %d\n", int_bien);
    printf("char: %c\n)", char_bien);
    printf("double %f\n", double_bien);


    return 0;
}