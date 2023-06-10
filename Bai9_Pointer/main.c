#include <stdio.h>

int a=10;

char c = 'A';

void tong(){
    printf("hello\n");
}

int main()
{
    printf("Dia chi a: %p\n", &a);

    printf("Dia chi c: %p\n", &c);

    printf ("Dia chi cua tong: %p\n", &tong);

    return 0;
}