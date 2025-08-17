Created: 202411172148
Tags: 

#### Bài toán 
các lập trình viên đang tạo ra hàng trăm Database objects khi chương trình chạy, trong khi đó kích thước của mỗi object rất lớn (lên đến gần 20MB).

vấn đề việc kiểm soát số lượng đối tượng trong chương trình để tối ưu hóa việc sử dụng tài nguyên hệ thống sử dụng Singleton Pattern. Với một class theo Singleton Pattern, chỉ có tối đa một đối tượng cụ thể của class đó được khởi tạo xuyên suốt chương trình.

## Khái niệm
> [**Singleton**](https://en.wikipedia.org/wiki/Singleton_pattern) is a creational design pattern that lets you ensure that a class has only one instance and provide a global access point to this instance.

**Singleton** đảm bảo chỉ duy nhất **một thể hiện (instance)** được tạo ra và nó sẽ cung cấp cho bạn một method để có thể truy xuất được thể hiện duy nhất đó mọi lúc mọi nơi trong chương trình. 
![[Singleton.png]]

Dùng trong TH mà muốn 1 class chỉ có 1 đối tượng

Toàn bộ thao tác modify thì cho vào 1 class, hàm main chỉ có nhiệm vụ new ra object chung và chạy 
## Implement
Nguyên tắc:
- **private constructor** để hạn chế truy cập từ class bên ngoài.
- Đặt **private static final variable** đảm bảo biến chỉ được khởi tạo trong class.
- Có một method **public static** để **return instance** được khởi tạo ở trên.



-----
## References
1. https://gpcoder.com/4190-huong-dan-java-design-pattern-singleton/
2. https://cppdeveloper.com/design-patterns/design-patterns-1-singleton-pattern/
3. https://freestudy247.com/courses/khoa-hoc-lap-trinh-huong-doi-tuong-oop-voi-c-c/lesson/33-singleton/
4. https://www.geeksforgeeks.org/singleton-pattern-c-design-patterns/
5. 
