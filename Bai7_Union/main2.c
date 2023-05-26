#include <stdint.h>

typedef union 
{
    /* data */
    uint8_t var1[5]; // gia tri var1 là 0 1 2 3 4
    uint16_t var2[2]; // gia tri var2 là 0 0 2 0 4
                        // ở var2 chỉ cần 1 byte để lưu giá trị không nhưng var2 lại lấy 2 ô nhớ
                        // nên 1 giá trị còn lại là 0, tiếp theo gán giá trị 2 vào thì còn thừa 1 
                        //ô nhớ nên ô đó =0, còn lại số 4 đưa xuống ra kết quả 0 0 2 0 4 do var2 ghi đè lên var1
}typeData;

int main()
{
    typeData data;

    for (int i=0; i<5; i++)
    {
        data.var1[i]=i;
    }

    // for (int i=0; i<2; i++)
    // {
    //     data.var2[i] = 2*i;
    // }

    for (int i=0; i<2; i++)
    {
        data.var2[i] = 256*i; // giá trị 1 byte là 256, khi gặp giá trị 257 sẽ
                                //tràn ô nhớ thứ 1 và di chuyển sang ô nhớ thứ 2. 
                                //Nên kết quả sẽ là 0 0 1 1 4
                                //nếu 257*i kết quả sẽ là 0 0 0 1 4
                                // Nếu 258*i sẽ là 0 0 1 1 4 
    }

    for (int i=0; i<5; i++)
    {
        printf("test1: %d\n", data.var1[i]);
    }
}
