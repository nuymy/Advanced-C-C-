#include <stdio.h>

#define HIEN_THI(ten_ham, ten_hoc_sinh, tuoi, lop)  \
void ten_ham()                                      \
{                                                   \
    printf ("Ten: %s\n", #ten_hoc_sinh);            \
    printf("Tuoi: %d\n", tuoi);                     \ 
    printf("Lop: %d\n", lop);                       \
}

// Dấu #ten_hoc_sinh có ý nghĩa định nghia phần tên học sinh là chuỗi

HIEN_THI(HocSinhA, Nguyen Van A, 14, 8);// Vì ở trên đã dùng #ten_hoc_sinh đê định nghĩa
HIEN_THI (HocSinhB, Nguyen Van B, 17, 9);// chuoi nên ở phần dưới không cần để 'Nguyen Van A' nữa

int main()
{
    HocSinhA();
    HocSinhB();

    return 0;
}