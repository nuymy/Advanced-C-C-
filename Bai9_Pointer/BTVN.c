#include <stdio.h>

void tong(int a, int b)
{
    printf("Tong a va b: %d\n", a+b);
}

int a=10, b=20;
char c='A';

int main()
{
    
    void *arr[] = {&tong, &a, &c};
    tong(a,b);
    printf("Gia tri c: ");
    printf("%c\n", *(char *)(arr[2]));

    printf("Gia tri a: ");
    printf ("%d\n", *(int *)arr[1]);

    printf("Gia tri tong: ");
    printf("%d\n", *(int *)(arr[0]));

    return 0;
}