# Advanced-C-C-
# Bài 1: Compiler
Khi code ngôn ngữ bậc cao, có 1 trình compiler riêng để chuyển từ ngôn ngữ máy bậc cao sang ngôn ngữ máy giúp cho máy hiểu được
Trong C thường chúng ta sẽ bao gồm 2 file: file .C gọi là file source, file .H gọi là file Header
Có những chương trình khi test 2 thư viện đơn lẻ thì nó chạy được, còn khi gộp lại thì không chạy được do đồng biến
![image](https://github.com/nuymy/Advanced-C-C-/assets/106459251/3b72e9ad-a586-4dd9-9a17-5b4c51f4fa67)




#Bai 4: Variables

Biến cục bộ: gán giá trị, sau khi kết thúc lời gọi hàm thì thu hồi lại vùng nhớ

Thêm static vào lời gọi biến cục bộ: khởi tạo 1 lần và tồn tại hết vòng đời của chương trình

Extern lấy biến ở file khác, static gọi biến 1 lần rồi sử dụng trọn đời trong 1 file chương trình chứa nó.

ALU: Arithmetic Logic Unit

RAM đẩy về cho register, đẩy tiếp cho ALU, sau khi ALU thực hiện tính toán thì trả ngược lại biến về register rồi đẩy ngược lại về RAM.

Biến có register có tốc độ xử lý nhanh hơn RAM vì chỉ qua 2 bước, còn lưu biến trên RAM thì cần trải qua 4 bước.
