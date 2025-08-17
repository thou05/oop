Created: 202409182158
Tags: 

A ****copy constructor**** is a type of constructor that initializes an object using another object of the same class. In simple terms, a constructor which creates an object by initializing it with an object of the same class, which has been created previously is known as a ****copy constructor****.

we need to define our own copy constructor only if an object has pointers or any runtime allocation**** of the resource like __a file handle__, a network connection, etc because the default _****constructor does only shallow copy.****_
****Shallow Copy means that only the pointers will be copied not the actual resources**** that the pointers are pointing to

If we remove the copy constructor from the above program, we don’t get the expected output.

## When is the Copy Constructor Called?

- When an object of the class is returned by value.
- When an object of the class is passed (to a function) by value as an argument.
- When an object is constructed based on another object of the same class.
- When the compiler generates a temporary object.

### Loại copy được tạo bởi hàm xây dựng
- Shallow copy
	Hàm xây dựng sao chép mặc định chỉ có thể tạo shallow copy.
	Shallow copy được định nghĩa là quá trình tạo bản sao của một đối tượng bằng cách sao chép dữ liệu của tất cả các biến thành viên
- Deep copy
	Deep copy tự động cấp phát bộ nhớ cho bản sao và sau đó sao chép giá trị thực cho bản sao, cả nguồn và bản sao có vị trí bộ nhớ khác nhau.

	Theo cách này, cả nguồn và bản sao là khác nhau và sẽ không chia sẻ cùng một vị trí bộ nhớ. Deep copy yêu cầu chúng ta viết hàm xây dựng do người dùng định nghĩa.



- Tác dụng
	- Tạo 1 đối tượng mới giống hệt 1 đối tượng đã có
	- Mỗi lớp đều có hàm tạo sao chép mặc định
		- Tạo 1 đối tượng đích
		- Sao chép từng bit cuả đối tượng nguồn sang đối tượng đích

- Khi nào cần định nghĩa hàm tạo sao chép
	- Khi trong các thành phần dữ liệu của lớp có con trỏ hoặc tham chiếu

- Cách xây dựng
	- Có các đặc điểm như 1 hàm tạo
		- Tên trùng với tên lớp
		- Không có kiểu trả về
	- Khác hàm tạo 
		- Có duy nhất 1 đối để tham chiếu đến đối tượng "nguồn"
		- Sao chép đối tượng "nguồn" vào "đích"
	- Cú pháp: 
		```
		Tên_lớp (const Tên_lớp &DT){
			//cau lệnh
		}
		```

- So sánh với toán tử `=`
	- Giống: cần xây dựng khi trong thành phần dữ liệu của lớp có biến con trỏ
	- Khác
		- Toán tử gán là gán hai đối tượng đã tồn tại, gán A cho B: B=A
		- Hàm tạo sao chép tạo ra đối tượng mới B từ đối tượng đã có A: B(A)
-----
## References
1. [[oop]]
2. https://www.geeksforgeeks.org/copy-constructor-in-cpp/
3.  https://stackoverflow.com/questions/2168201/what-is-a-copy-constructor-in-c
4. http://www.parashift.com/c++-faq-lite/ctors.html
5.  https://en.cppreference.com/w/cpp/language/copy_constructor
6. https://freetuts.net/ham-xay-dung-sao-chep-trong-c++-1791.html
7. 
