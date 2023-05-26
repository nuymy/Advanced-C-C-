# Advanced-C-C-
# Bài 1: Compiler
- Khi code ngôn ngữ bậc cao, có 1 trình compiler riêng để chuyển từ ngôn ngữ máy bậc cao sang ngôn ngữ máy giúp cho máy hiểu được
- Trong C thường chúng ta sẽ bao gồm 2 file: file .C gọi là file source, file .H gọi là file Header
- Có những chương trình khi test 2 thư viện đơn lẻ thì nó chạy được, còn khi gộp lại thì không chạy được do đồng biến
![image](https://github.com/nuymy/Advanced-C-C-/assets/106459251/3b72e9ad-a586-4dd9-9a17-5b4c51f4fa67)

# Bài 2: Macro
- Macro trong C là một cách để định nghĩa các hằng số, hàm ngắn gọn và các đoạn mã tái sử dụng được sử dụng trong chương trình. Macro được định nghĩa bằng cách sử dụng từ khóa #define.
- Thêm 1 dấu # gọi là cái chuỗi, thêm 2 dấu # gọi là nối chuỗi
- Một cách biên dịch có điều kiện khác đó là sử dụng #ifdef và #ifndef, được hiểu như là Nếu đã định nghĩa và Nếu chưa được định nghĩa.
+ Chỉ thị #ifdef.
    #ifdef identifier
	     //Đoạn chương trình 1
	
	#else
	     //Đoạn chương trình 2
	
	#endif
+ Nếu indentifier đã được định nghĩa thì đoạn chương trình 1 sẽ được thực hiện. Ngược lại nếu indentifier chưa được định nghĩa thì đoạn chương trình 2 sẽ được thực hiện.

# Bài 3: Input
- va_list: Đây là một kiểu phù hợp để lưu trữ thông tin cần thiết bởi ba macro là va_start(), va_arg() và va_end().
1. Macro va_start() trong C: void va_start(va_list ap, last_arg);
2. Macro va_arg() trong C: type va_arg(va_list ap, type)
3. Macro va_end() trong C: void va_end(va_list ap)
# Bài 4: Variables
Biến cục bộ: gán giá trị, sau khi kết thúc lời gọi hàm thì thu hồi lại vùng nhớ

Thêm static vào lời gọi biến cục bộ: khởi tạo 1 lần và tồn tại hết vòng đời của chương trình

Extern lấy biến ở file khác, static gọi biến 1 lần rồi sử dụng trọn đời trong 1 file chương trình chứa nó.

ALU: Arithmetic Logic Unit

RAM đẩy về cho register, đẩy tiếp cho ALU, sau khi ALU thực hiện tính toán thì trả ngược lại biến về register rồi đẩy ngược lại về RAM.

Biến có register có tốc độ xử lý nhanh hơn RAM vì chỉ qua 2 bước, còn lưu biến trên RAM thì cần trải qua 4 bước.

# Bài 5: Volatile
- Volatile: thông báo cho compiler đừng tối ưu biến, sau khi hoàn thành thì quay trở lại tiến hành đọc giá trị code một lần nữa.
![image](https://github.com/nuymy/Advanced-C-C-/assets/106459251/acbfcbbd-0f8e-45f2-aec0-856c4eda7139)
-	Trong bộ nhớ RAM được chia làm 5 phân vùng nhớ:
•	Text :
– Quyền truy cập chỉ Read và nó chưa lệnh để thực thi nên tránh sửa đổi instruction.
– Chứa khai báo hằng số trong chương trình (.rodata)(từ khoá const), con trỏ
- Đọc ra được nhưng lại không sửa được
•	Data:
– Quyền truy cập là read-write.
– Chứa biến toàn cục or biến static với giá trị khởi tạo khác không.
– Được giải phóng khi kết thúc chương trình.
•	Bss:
– Quyền truy cập là read-write.
– Chứa biến toàn cục or biến static với giá trị khởi tạo bằng không or không khởi tạo.
– Được giải phóng khi kết thúc chương trình.
•	Stack:
– Quyền truy cập là read-write.
– Được sử dụng cấp phát cho biến local, input parameter của hàm,…
– Sẽ được giải phóng khi ra khỏi block code/hàm
•	Heap:
– Quyền truy cập là read-write.
– Được sử dụng để cấp phát bộ nhớ động như: Malloc, Calloc, …
- Không có cơ chế tự thu hồi vùng nhớ như ở stack
– Sẽ được giải phóng khi gọi hàm free,…
# Bài 6: Struct
- Kiểu dữ liệu struct trong ngôn ngữ lập trình C là một cách để định nghĩa một kiểu dữ liệu mới bằng cách kết hợp các kiểu dữ liệu khác nhau thành một đối tượng lớn hơn.
- Đối với hàm struct
+ Khi thực hiện phép toán tính toán giá trị ô nhớ: lấy ô có giá trị lớn nhất làm một lần quét. Những giá trị ô trống còn lại sẽ được tính là bộ nhớ đệm
+ Ex: uint8_t: 1 byte, uint16_t: 2 byte, uint32_t: 4 byte, uint64_t: trường hợp này mỗi lần quét sẽ quét 8byte tương ứng với 8 ô nhớ
# Bài 7: Union
- Union cũng là 1 kiểu dữ liệu do người dùng tự định nghĩa
- Union thường được sử dụng để tiết kiệm không gian bộ nhớ hoặc để xử lý các dữ liệu có kiểu dữ liệu khác nhau trong cùng một vùng nhớ, chẳng hạn như định nghĩa một union để lưu trữ cùng một giá trị ở nhiều kiểu dữ liệu khác nhau, chẳng hạn như một số nguyên hoặc một số thực.
- Kích thước của một union được tính bằng kích thước của thành phần lớn nhất trong union.
- Ví dụ uint32_t var1[3]
        uint16_t var[2]
        uint64_t var[4]
=> Kích thước của chương trình này = 32 do biến có giá trị lớn nhất là 8byte * 4 mảng




