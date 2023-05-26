#include <stdio.h>

#define TONG(...) __VA_ARGS__ // Dùng code này khi không biết có bao nhiêu parameter truyềN vào macro

int main ()
{
    TONG(10, 20, 30);
    return 0;
}