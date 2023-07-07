#include <iostream>
#include <string>

using namespace std;

class SinhVien{
    public:
        void setThongTin();
        void hienThi();

    private:
        int tuoi;
        int lop;
        string ten;


};

void SinhVien::setThongTin(){
    cout << " Nhap vao ten: ";
    cin >> ten;

    cout << " Nhap vao tuoi: ";
    cin >> tuoi;

    cout << " Nhap vao lop: ";
    cin >> lop;
}

void SinhVien::hienThi(){
    cout << "Ten: " <<ten<< "\n";
    cout << "Tuoi: " <<tuoi<< "\n";
    cout << "Lop: " <<lop<< "\n";
}

int main()
{
    SinhVien sv1, sv2;
    sv1.setThongTin();
    sv1.hienThi();


    return 0;
}