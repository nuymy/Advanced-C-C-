#include <iostream>

class ToanHoc {
    public:
        void tong (int a, int b);
        void tong(int a, int b, int c);
        int tong (int a, double b);
};

void ToanHoc::tong(int a, int b)
{
    printf("Tong hai so a va b la: %d", a+b);
}

void ToanHoc::tong(int a, int b, int c)
{
    printf("Tong 3 so a, b va c la: %d", a+b+c);
}

int ToanHoc::tong(int a, double b){
    return a+ (int)b;
}

template <typename var, typename var1> // template co the dinh
                                        //nghia va thuc hien phep cong
                                        //cua 2 so a va b mac du la khac type
                                        //var se duoc dinh nghia theo type cua parameter duọc nap vao

var tong( var a, var1 b){
    return (var)(a+b);
}

int main()
{
    // ToanHoc th;
    // th.tong(9,7);
    // th.tong (1,2,3);
    // printf ("Tong: %d\n", th.tong(4, 12.4));

    printf("Tong: %d\n", tong(10,12.4));
    return 0;


}