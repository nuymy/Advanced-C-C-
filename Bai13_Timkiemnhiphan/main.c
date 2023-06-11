#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 50
#define MIN_VALUE 1
#define MAX_VALUE 10

void createArray(uint8_t arr[]){
    uint8_t i;

    // Khởi tạo seed cho hàm rand()
    srand(time(NULL));

    // Tạo mảng ngẫu nhiên trong phạm vi từ MIN_VALUE đến MAX_VALUE
    for (i = 0; i < SIZE; i++) {
        arr[i] = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    }
}


void selectionSort(uint8_t arr[], uint8_t n) {
    uint8_t i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}



void checkValue(uint8_t arr[], uint8_t middle, uint8_t a, uint8_t found)
{
    
    if (a < arr[middle])
    {
        for (uint8_t i = arr[0]; i < arr[middle] ; i++)
        {
            if (arr[i]==a) 
            {
                found =1;
                break;
            }
        }
    }

    else if (a > arr[middle])
    {
        for (uint8_t i = arr[middle]; i < arr[SIZE -1] ; i++)
        {
            if (arr[i]==a) 
            {
                found =2;
                break;
            }
            
        }
    }

    else if (a == arr[middle])
    {
        found =3;
    }

}

int main() {
    
    uint8_t arr[50];

    uint8_t n = sizeof(arr) / sizeof(arr[0]);

    uint8_t middle = SIZE/2;

    uint8_t a = 8;

    uint8_t found;

    

    createArray(arr);

     // In ra mảng
    printf("Mang ngau nhien:\n");
    for (uint8_t i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    //Sap xep mảng
    selectionSort(arr, n);
    printf("\nMang sau khi sap xep:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    //Nhap gia tri cần kiểm tra
    // printf("\nMoi ban nhap gia tri: ");
    // scanf("%d", &a);

    //Kiem tra gia tri trong mang
    checkValue(arr,middle,a, found);

    if (found == 1)
    {
        printf("Gia tri o ben trai cua mang");

    }
    else if (found == 2)
    {
        printf ("Gia tri o ben phai cua mang");
    }
    else if (found == 3)
    {
        printf("Gia tri o chinh giua cua mang");
    }
    else
    {
        printf("Gia tri khong co trong mang");
    }

    return 0;
}

