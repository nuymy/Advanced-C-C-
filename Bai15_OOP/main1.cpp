// #include <iostream>

// namespace ConOngB{
//     int A =10;
    
//     }

// namespace ConOngC{
//     int A=5;
// }

// using namespace ConOngB;

// int main()
// {
//     ConOngB::A =20;
//     printf("A: %d\n", ConOngB::A);

//     printf ("A %d\n", ConOngC::A);

//     return 0;
// }

#include <iostream>

class Sinhvien{
    public:
        virtual char *string(){ //them virtual sẽ xác định hàm nào được gọi dựa trên loại con trỏ mà nó trỏ tới
            return (char *)"Hello world\n";
        }

        void display(){
            printf("Test: %s\n", string());
        }
};

class HocSinh : public Sinhvien{
    public:
        char *string(){
            return (char*) "This is test\n";
        }
};

int main()
{
    Sinhvien sv;
    sv.display();
    HocSinh hs;
    //hs.string(); // mac du ham hs tu class HocSinh nhung no khong in This is test ma in hello world của SinhVien khi không có hàm virtual
    hs.display();//vì SinhVien goi hàm display mà display lai gọi thằng string mà string"Hello World" lại nàm chung ô nhớ với SinhVien
    printf("Test: %s\n", hs.string());
    return 0;   
}
