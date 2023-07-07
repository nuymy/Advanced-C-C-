#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
    vector <int> array;

    array.push_back(1); // them gia tri vao vi tri sau cung mang vector
    array.push_back(5);
    array.push_back(23);

    array.assign(5,8); //tao ra mot mang gom 5 con so 8
    array.insert(array.begin()+2, 27);// chen vao vị tri tinh tư gia tri đau tien cach vao 2 o chèn gia trị 27 vao

    array.pop_back(); //xoa gia tri cuoi cung trong mang

    for (int item:array)
    {
        printf("test: %d\n", item);
    }

    // for (int i=0; i<array.size(); i++)
    // {
    //     printf("%d\n", array[i]);
    // }
    return 0;
}