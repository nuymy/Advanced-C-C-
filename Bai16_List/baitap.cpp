#include <iostream>
#include <string>

using namespace std;

class SinhVien{
    private:
        float TOAN;
        float LY;
        float HOA;
        float DIEM_TRUNG_BINH;
        float TEN;
    public:
        SinhVien(string ten, float toan, float ly, float hoa);
        void setToan(float toan);
        float getToan();
        void setLy(float ly);
        float getLy();
        void setHoa(float hoa);
        float getHoa();
        float getDiemTrungBinh();
        void setTen(string ten);
        string getTen();
};

SinhVien::SinhVien(string ten, float toan, float ly, float hoa)
{
    TEN = ten ;
    TOAN = toan;
    LY = ly;
    HOA = hoa;
}

void SinhVien::setToan(){
    cout << "Moi ban nhap diem toan: ";
    cin >> TOAN;
}

void SinhVien::setLy(){
    cout << "Moi ban nhap diem ly: ";
    cin >> LY;
}

void SinhVien::setHoa(){
    cout << "Moi ban nhap diem hoa: ";
    cin >> HOA;
}

float SinhVien::getDiemTrungBinh(){
    return (TOAN + LY + HOA)/3;
}

int main()
{
    SinhVien sv1, sv2;
    
    return 0;
}