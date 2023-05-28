#include <stdio.h>
#include <ctype.h>
#include <string.h>



void Kiem_Tra_Ten(char ten[])
{
    vi_tri_ten:;
    int flag =0;
    
    printf("Nhap ten cua ban: ");
    scanf("%s", ten);
    int len = strlen(ten);
    for (int i = 0;i<len ; i++) {
        if (!isalpha(ten[i]) ) { // kiểm tra giá trị nhập vào có từ a-z không
            flag = 1; // đánh dấu không hợp lệ
            break;
        }
    }

    if (flag==1) {
        printf("Ten cua ban chi duoc nhap tu cac ki tu a-z. Vui long nhap lai!\n");
        goto vi_tri_ten;
    }

}


int Kiem_Tra_Tuoi() {
    int tuoi;
    vi_tri_tuoi:;
    printf("Moi ban nhap tuoi: ");
    scanf("%d", &tuoi);
    

    if ((tuoi<=0) || (tuoi>=100))
    {
        printf("Tuoi phai lon hon 0 va be hon 100\n");
        goto vi_tri_tuoi;
    }
    return tuoi;
    
}


int Kiem_Tra_Lop() {
    int lop;
    vi_tri_lop:;
    printf("Moi ban nhap lop: ");
    scanf("%d", &lop);
    

    if ((lop<1) || (lop>12))
    {
        printf("Lop phai lon hon hoac bang 1 va be hon hoac bang 12\n");
        goto vi_tri_lop;
    }
    return lop;
    
}

float Kiem_Tra_Diem() {
    float diem;
    vi_tri_diem:;
    printf("Moi ban nhap diem: ");
    scanf("%f", &diem);
    

    if ((diem<0.0) || (diem>10.0))
    {
        printf("Diem phai nam tu 0 den 10\n");
        goto vi_tri_diem;
    }
    return diem;
    
}



int main(){

    char ten[100]; 
    Kiem_Tra_Ten(ten);

    int tuoi;
    tuoi = Kiem_Tra_Tuoi();

    int lop;
    lop = Kiem_Tra_Lop();

    float diem;
    diem = Kiem_Tra_Diem();

    printf("Ten cua ban la: %s\n", ten);

    printf("Tuoi cua ban la: %d\n", tuoi);

    printf("Lop cua ban la: %d\n", lop);

    printf("Diem cua ban la: %.1f\n", diem);

    
    
    return 0;
}