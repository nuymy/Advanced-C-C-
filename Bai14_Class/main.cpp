#include <iostream>
#include <string>
using namespace std; 

class SinhVien{
    public:
        int tuoi; //bien se duoc goi la property
        int lop;
        void hienThi(){ // Ham se duoc goi là Method
            cout << "Hello world";
        };

};

int main ()
{
    SinhVien sv;
    sv.lop=10;
    sv.tuoi = 15;

    cout << sv.lop << "\n";
    cout << sv.tuoi << "\n";
    sv.hienThi();

    return 0;

}