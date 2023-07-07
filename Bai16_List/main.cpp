#include <iostream>
#include <list>
#include <map>

#include <string>

using namespace std;

int main()
{
    map <string, string> SinhVien;
    
    SinhVien["Name"] = "Hoang"; // Luu y thu tu đượd sắp xếp trong map không phải
    SinhVien["Age"] = "29"; // ai được nhậP trước hoặc sau mà theo bảng chữ cái
    SinhVien["ID"] = "1101";//vd Age -> ID -> Name

    for (auto i:SinhVien)
    {
        cout << "\nKey: "<<i.first<<", value: "<< i.second; // Gia tri bạn có thể nhập vào bất cứ type gì chỉ cần khai báo kiểu trên phần map
    }
    return 0;
}