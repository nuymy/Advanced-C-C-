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
# Bài 8: Goto
- Câu lệnh goto được sử dụng để thay đổi luồng thực thi thông thường của chương trình bằng cách nhảy tới một phần khác của chương trình
- setjmp(sử dụng setjump cho chương trình để khi gặp lỗi nó sẽ dừng chương trình và quay lại bước mà mình muốn)	
- Macro setjmp và hàm longjmp được sử dụng cùng nhau chủ yếu khi xử lý lỗi hay xử lý ngoại lệ. Có thể nói rằng, sử dụng kết hợp macro setjmp và hàm longjmp là một phiên bản go to mạnh mẽ hơn.
- longjmp là khá hữu ích khi bạn muốn thoát ra khỏi một tình huống lỗi tồi tệ nào đó, khi bạn muốn nhanh chóng đưa tôi quay trở lại phần đầu tiên.
- TRY, CATCH, khi chương trình phức tạp, có nhiều câu điều kiện thì có thể dùng TRY, CATCH để thay thế
- Khi một ngoại lệ bị bắt trong khối lệnh của từ khóa try, chương trình sẽ tìm đến khối lệnh catch để xử lý nó.
- Đối với phần xử lý ngoại lệ không dùng đến phần tham số bên trong khối lệnh, chúng ta có thể bỏ qua việc đặt tên biến cho tham số ngoại lệ
# Bài 9: Pointer
- Biến bình thường dùng để lưu giá trị, biến con trỏ dùng để lưu địa chỉ giá trị
- Để lấy giá trị từ địa chỉ con trỏ ta dùng:  *0xC1 =10;
- Để lấy giá trị một đối tượng, ta dùng: &a;
- con trỏ hàm void (*ptr)(int, int): Có thể thông qua con trỏ hàm buộc hàm khác là input parameter
- Con trỏ void là con trỏ đặc biệt, nó có thể lưu giá trị với nhiều kiểu dữ liệu(int, char, ..) cùng một lúc
- Con trỏ NULL: giá trị là 0, địa chỉ là 0x00
- Ứng dụng pointer to pointer: Đây là 1 con trỏ cấp 2 lưu địa chỉ của con trỏ cấp 1 
- Ex: int **ptp = 0xa3 => địa chỉ là 0xa3, giá trị là 0xc1
- Nếu chỉ đơn thuần là đọc biến ra thì nên dùng giá trị, còn nếu cần thay đổi giá trị thì dùng pointer. Trong nhúng hay truy cập vào địa chỉ giá trị thay ghi nên hay sử dụng con trỏ
# Bài 11: Stack
- Stack là một cấu trúc dữ liệu được sử dụng để lưu trữ các phần tử theo cơ chế "last-in, first-out" (LIFO). Điều này có nghĩa là phần tử cuối cùng được thêm vào stack sẽ được lấy ra đầu tiên.
- Các thao tác thường sử dụng trong stack
+ push() to insert an element into the stack
+ pop() to remove an element from the stack
+ top() Returns the top element of the stack.
+ isEmpty() returns true if stack is empty else false.
+ size() returns the size of stack.
- Lưu ý thêm thư viện: #include <stdbool.h>
# Bài 12: Queue
- Queue là một cấu trúc dữ liệu được sử dụng để lưu trữ các phần tử và thực hiện các thao tác trên chúng theo cơ chế "First-In-First-Out" (FIFO), nghĩa là phần tử đầu tiên được đưa vào Queue sẽ được xử lý đầu tiên, và các phần tử mới hơn sẽ được đưa vào sau đó.
- isEmpty(): To check if the queue is empty
- isFull(): To check whether the queue is full or not
- dequeue(): Removes the element from the frontal side of the queue
- enqueue(): It inserts elements to the end of the queue
- Front: Pointer element responsible for fetching the first element from the queue
- Rear: Pointer element responsible for fetching the last element from the queue
- Khi thêm data thì sẽ được thêm vào vị trí ngoài cùng bên trái, các data còn lại sẽ dịch sang phải.
- Còn khi lấy bớt data thì lấy data ngoài cùng, các data còn lại sẽ dịch sang phải để lấp ô trống data vừa bị lấy đi
# Bài 13: Tim kiem nhi phan
![image](https://github.com/nuymy/Advanced-C-C-/assets/106459251/12f8bc5b-8c0f-448e-bd51-2b6588893bc9)
- Tiến hành chia các mảng ra làm các mảng nhỏ hơn rồi so sánh giá trị cần tìm với giá trị chính giữa
- Nếu giá trị > giá trị chính giữa thì giá trị thuộc về mảng bên phải
- Nếu giá trị cần tìm < giá trị chính giữa của mảng thì giá trị thuộc về mảng bên trái
# Bài 14: Class
- Ở trong class, phần biến sẽ được gọi là Property, còn phầm hàm sẽ được gọi là Method
- Class hơn struct là có thể gán giá trị và có thể bao gồm cả hàm trong khi struct chỉ bao gồm tên biến
- Những phần nằm trong public thì bạn có thể truy cập dễ dàng. Chỉ có thể dùng các class để có thể truy cập đến. Ngoài ra class cũng có thể truy cập để các member của public, private và protected
- Object chỉ có thể truy cập public, không thể truy cập vào private và protected
- Trong lập trình C++, có ba phạm vi truy cập khác nhau dùng để quản lý mức độ truy cập vào các thành viên (members) của một lớp (class). Ba phạm vi này là "public", "private" và "protected".
•	Phạm vi truy cập "public": Các thành viên được khai báo trong phạm vi "public" có thể được truy cập từ bên trong lớp đó, từ bên trong các lớp con (derived class) và từ bên ngoài lớp đó.
•	Phạm vi truy cập "private": Các thành viên được khai báo trong phạm vi "private" chỉ có thể được truy cập từ bên trong lớp đó, không thể truy cập từ bên trong các lớp con và từ bên ngoài lớp đó.
•	Phạm vi truy cập "protected": Các thành viên được khai báo trong phạm vi "protected" có thể được truy cập từ bên trong lớp đó và từ bên trong các lớp con, nhưng không thể truy cập từ bên ngoài lớp đó.
# Bài 15:OOP
- Lập trình hướng đối tượng có 4 tính chất
+ Tính kế thừa (inheritance): cho phép một lớp con (subclass) có thể kế thừa các thuộc tính và phương thức từ lớp cha (superclass) của nó. Lớp con có thể mở rộng hoặc ghi đè các phương thức của lớp cha hoặc thêm các thuộc tính và phương thức mới.
![image](https://github.com/nuymy/Advanced-C-C-/assets/106459251/75b0b37d-c50c-4ca4-8648-c8a727ceb24f)
+ Tính đa hình (polymorphism): Tính đa hình cho phép một đối tượng có thể có nhiều hình dạng và hành vi khác nhau. Tính đa hình thường được thực hiện thông qua việc sử dụng các lớp trừu tượng (abstract class) hoặc giao diện (interface).
+ Tính trừu tượng (abstraction): Tính trừu tượng cho phép ẩn đi các chi tiết bên trong của đối tượng và chỉ hiển thị các thông tin cần thiết. Tính trừu tượng thường được thực hiện thông qua lớp trừu tượng.
+ Tính đóng gói (encapsulation): Tính đóng gói cho phép ẩn đi các chi tiết bên trong của đối tượng và chỉ hiển thị các phương thức để tương tác với đối tượng đó. 

- Overload: 2 function tên giống hệt nhau nhưng parameter lại khác thì gọi là overload
- Overwrite: khi tìm trong class con không có thì sẽ tự động chạy lên hàm cha để tìm
- Người dùng chỉ quan tâm kết quả vào và kết quả ra mà không cần quan tâm đến quá trình nên phần kết quả vào hoặc ra ta để trong phần public, còn phần quá trình ta sẽ để vào private
- `vector` là một lớp template trong thư viện chuẩn (STL - Standard Template Library) được sử dụng để lưu trữ và quản lý một mảng linh hoạt các phần tử.  `vector` có thể lưu trữ các phần tử cùng kiểu dữ liệu và tự động quản lý kích thước của mảng. 
- Dưới đây là một số phương thức quan trọng của `vector`:  
1. `push_back()`: Thêm một phần tử vào cuối `vector`. 
2. `pop_back()`: Xóa phần tử cuối cùng của `vector`. 
3. `size()`: Trả về số lượng phần tử trong `vector`. 
4. `at()`: Truy cập phần tử tại một vị trí cụ thể trong `vector`. 
5. `insert()`: Chèn một phần tử vào vị trí cụ thể trong `vector`. 
6. `erase()`: Xóa phần tử tại một vị trí cụ thể trong `vector`. 
7. `clear()`: Xóa tất cả các phần tử trong `vector`. 
8. `sort()`: Sắp xếp các phần tử trong `vector` theo thứ tự tăng dần.
# Bài 16:List
- Sử dụng vector khi giá trị được thêm vào và xoá đi theo tuần tự, vì những địa chỉ nó liền kề nhau nên duyệt phần tử nhanh hơn. Nhưng khi xoá phần tử ở giữa thì phải dịch phần tử qua 1 bên rồi mới xoá. Và khi xoá phần tử sẽ làm thay đổi vị trí các phần tử khác ở trong mảng
- Sử dụng list để chèn và xoá những note ngẫu nhiên ở trong mảng
- Để sử dụng `map`, bạn cần bao gồm thư viện `map` vào chương trình. Dưới đây là một số phương thức quan trọng của `map`:  
1. `insert()`: Thêm một cặp khóa-giá trị vào `map`.
2. `erase()`: Xóa một phần tử có khóa cụ thể trong `map`.
3. `find()`: Tìm kiếm một phần tử có khóa cụ thể trong `map`. 
4. `size()`: Trả về số lượng phần tử trong `map`. 
5. `empty()`: Kiểm tra xem `map` có rỗng hay không
- So sánh vector, map và list
1. `vector`:   
- Ưu điểm:      
- Hỗ trợ truy cập ngẫu nhiên vào các phần tử.     
- Dễ dàng thêm và xóa các phần tử ở cuối mảng.      
- Cung cấp phương thức để thay đổi kích thước mảng linh hoạt.    
- Nhược điểm:      
- Thời gian thêm và xóa phần tử ở vị trí bất kỳ có thể lâu hơn so với `list`.      
- Thời gian tìm kiếm phần tử phức tạp hơn so với `map` và `list`.  
2. `map`:    
- Ưu điểm:      
- Hỗ trợ lưu trữ dữ liệu dưới dạng cặp khóa-giá trị.      
- Các phần tử trong `map` được sắp xếp theo thứ tự tăng dần của khóa.      
- Cung cấp phương thức tìm kiếm nhanh chóng dựa trên khóa.    
- Nhược điểm:      
- Không hỗ trợ truy cập ngẫu nhiên vào các phần tử.      
- Thời gian thêm và xóa phần tử có thể lâu hơn so với `vector` và `list`.      
- Cần sử dụng một khóa duy nhất cho mỗi phần tử.  
3. `list`:    
- Ưu điểm:      
- Hỗ trợ thêm và xóa phần tử ở bất kỳ vị trí nào trong danh sách một cách hiệu quả.      
- Thời gian tìm kiếm phần tử nhanh hơn so với `vector`.     
 - Không cần cung cấp kích thước ban đầu của danh sách.    
- Nhược điểm:     
 - Thời gian truy cập ngẫu nhiên vào các phần tử chậm hơn so với `vector`.      
- Không hỗ trợ sắp xếp tự động các phần tử.





