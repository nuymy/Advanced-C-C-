#include <iostream>

class Sinhvien{
    public:
        virtual char *string(){ //them virtual sẽ xác định hàm nào được gọi dựa trên loại con trỏ mà nó trỏ tới
            return (char *)"Hello world\n";
        }

        void display(){
            printf("Test: %s\n", string());
        }

        virtual void test(){
            printf("Day la class sinh vien\n");
        }
};

class HocSinh : public Sinhvien{
    public:
        char *string(){
            return (char*) "This is test\n";
        }
        void test(){
            printf("Day la class hoc sinh\n");
        }
};

int main()
{
    Sinhvien *ptr;
    HocSinh hs;

    ptr = &hs;
    ptr -> test(); // test truoc do da lưu class SinhVien nên mặc dù
    return 0;   //gọi class HocSinh nhưng lại xuất ra giá trị của class SinhVien
}               //để ghi đè (overwrite)lên giá trị test thì thêm virtual phần khai báo test chỗ class SinhVien
                //Khi nó test chỗ class SinhVien cho phép cập nhật lại giá trị test ở class HocSinh