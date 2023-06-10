#include <stdio.h>

void swap(int a, int b)
{
    int temp;

    printf ("a: %d, Dia chi a: %p\n", a, &a); // Dia chỉ ô nhớ của a và số 1 khác nhau nên lệnh gọi hàm tiến hành swap 2 giá trị a và b, không phải 1 và 2
    printf ("b: %d, Dia chi b: %p\n",b, &b); // Địa chỉ ô nhớ của b và số 2 khác nhau nên lệnh gọi hàm tiến hành swap 2 giá trị a và b, không phải 1 và 2
    temp=a;
    a=b;
    b=temp;

    printf ("a: %d, Dia chi a: %p\n", a, &a); 
    printf ("b: %d, Dia chi b: %p\n",b, &b);

}


void swap2(int *a, int *b)
{
    int temp;
    
    printf ("a: %d, Dia chi a: %p\n", *a, a);
    printf ("a: %d, Dia chi a: %p\n", *b, b);

    temp = *a;
    *a=*b;
    *b=temp;

    printf ("a: %d, Dia chi a: %p\n", *a, a);
    printf ("a: %d, Dia chi a: %p\n", *b, b);

    
}

int main()
{
    int so1 =10, so2=20;

    printf ("So1: %d, Dia chi so1: %p\n", so1, &so1);
    printf ("So2: %d, Dia chi so2: %p\n",so2, &so2);

    // swap(so1, so2);
    // printf("Sau swap la: \n");
    // printf ("So1: %d, Dia chi so1: %p\n", so1, &so1); // Giữ nguyên giá trị
    // printf ("So2: %d, Dia chi so2: %p\n",so2, &so2);

    swap2(&so1, &so2); // Gan dia chi so 1 va so2 vao 2 con tro a va b trong ham swap2
    printf("Sau swap2 la: \n");
    printf ("So1: %d, Dia chi so1: %p\n", so1, &so1); // tien hanh swap gia tri cua so 1 va so 2
    printf ("So2: %d, Dia chi so2: %p\n",so2, &so2);


    return 0;
}