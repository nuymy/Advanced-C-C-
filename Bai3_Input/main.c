#include <stdio.h>
#include <stdarg.h> // định dạng câu lệnh va_list

int tong(int so_input, ...)
{
    int sum=0;
    va_list va;
    va_start (va, so_input);

    for (int i=0; i< so_input; i++)
    {
        sum = sum + va_arg(va, int);
    }
    va_end(va); // Thu hồi vùng nhớ của va_start
    return sum;
}

int main()
{
    printf ("tong: %d\n", tong(4,2,4,6,8) );
    return 0;
}