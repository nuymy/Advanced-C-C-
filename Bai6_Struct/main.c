#include <stdio.h>

typedef struct 
{
    int ngay;
    int thang;
    int nam;
}typeDate;

void hienThi(typeDate date)
{
    printf("Ngay: %d, Thang: %d, Nam: %d\n", date.ngay, date.thang, date.nam);
}

int main()
{
    // typeDate date = {.ngay = 27, .nam=2013};
    typeDate date = {2,5,2023};
    hienThi(date);

    return 0;
}