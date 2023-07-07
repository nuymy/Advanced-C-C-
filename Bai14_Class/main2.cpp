#include <iostream>
#include <string>

using namespace std;

class DoiTuong{
    protected:
        string ten;
        int tuoi;
        int lop;
    public:
        void nhapThongTin (string ten, int tuoi, int lop);
        void hienThi();
        static int mssv;
};

int DoiTuong::mssv;


void DoiTuong::nhapThongTin (string ten, int tuoi, int lop){
    DoiTuong::ten = ten;
    DoiTuong::tuoi = tuoi;
    DoiTuong::lop = lop;
}

void DoiTuong::hienThi(){
    cout<<"Ten: "<< ten << "\n";
    cout<<"Tuoi: "<< tuoi << "\n";
    cout<<"Lop "<< lop << "\n";
}

class SinhVien : public DoiTuong{
    public:
        int mssv;
        void nhapThongTin (string ten, int tuoi, int lop, int mssv);
        void hienThi();

};

void SinhVien::nhapThongTin (string ten, int tuoi, int lop, int mssv){
    SinhVien::ten = ten;
    SinhVien::tuoi = tuoi;
    SinhVien::lop = lop;
    SinhVien::mssv = mssv;
}

void SinhVien::hienThi(){
    cout<<"Ten: "<< ten << "\n";
    cout<<"Tuoi: "<< tuoi << "\n";
    cout<<"Lop: "<< lop << "\n";
    cout<<"MSSV: "<< mssv << "\n";
}

int main(){
    DoiTuong sv, sv1;

    sv.mssv =10;
    sv1.mssv = 20;

    printf("Dia chi: %p\n", &(sv.mssv));

    printf("Dia chi: %p\n", &(sv1.mssv));

    printf("Gia tri: %d\n",sv.mssv);
    return 0;
}