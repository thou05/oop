Tags: #dsa #oop 
## Hàm trong C++
#### Đối tham chiếu 
- Khai báo hàm: `DataType Func_Name(DataType &Arg_Name, ...)`
- Sử dụng hàm: các `đối thực sự` tương ứng với `đối tham chiếu` phải là các biến cùng kiểu với kiểu của đối
- Sự hoạt động của hàm như hàm có đối con trỏ
#### Đối mặc định
- Khai báo hàm: `DataType Func_Name(DataType Arg_Nam1, DataType Arg_Nam2 = value2, ...);`
- Sử dụng hàm: Có thể không truyền đối thực sự cho đối mặc định
- Nếu truyền thì hàm nhận giá trị của đối thực sự, nếu không truyền hàm nhận giá trị mặc định
	`Func_Name(Arg1, Arg2);`
	`Func_Name(Arg1);`
#### Nạp chồng hàm (overload function)
- Nạp chồng hàm là khả năng cho phép **định nghĩa lại một hàm đã có**. Tức là trong một chương trình cho phép nhiều hàm trùng tên nhau.
- Lưu ý: Các hàm phải có ít nhất một trong các đặc điểm sau
	- Khác nhau về **số lượng** đối
	- Khác nhau về **kiểu** của đối
	- Khác nhau **kiểu trả về** của hàm
#### Hàm mẫu (template)
- Hàm mẫu là hàm được xây dựng như là một mẫu để thực hiện một chức năng nào đó mà **kiểu của các đối vào chưa được xác định**.
- Khai báo: 
	```
	template<class DataType,…>
	DataType Func_Name(DataType Arg_Name,…){ 
		các câu lệnh;
	};
	```
