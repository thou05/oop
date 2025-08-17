Created: 202409182139
Tags: #oop

#### KN
- Là 1 **method đặc biệt để thực hiện các lệnh khi đối tượng được sinh ra** 
- không có kiểu dữ liệu trả về và tự động tạo nếu chưa đc tạo 

#### Khai báo
Cài đặt constructor: các câu lệnh thực hiện khởi gán giá trị, cấp phát bộ nhớ cho các thuộc tính của lớp

- Cấu tử không đối: `className();`
- Cấu tử có đối: `className(argList);`


- Tác dụng của hàm tạo?
	khởi tạo đối tượng khi nó được tạo ra
	thường được sử dụng để gán giá trị ban đầu cho các thuộc tính của đối tượng và thực hiện cviec khởi tạo cần thiết

- Đối tượng được khởi tạo bằng cách nào?
	sử dụng toán tử new hoặc khởi tạo trực tiếp
	hàm tạo được gọi ngay lập tức khi đối tượng được tạo

- Nếu lớp ko xây dựng hàm tạo?
	trình biên dịch tự động tạo ra hàm tạo mặc định
	chỉ thực hiện gán gtri mặc định cho các thuộc tính, ko có tham số hay thao tác nào


- Cách xây dựng hàm tạo
	- Tương tự như phương thức thông thường của lớp
	- Khác phương thức thông thường:
		Tên của hàm tạo: phải trùng với tên lớp
		Kiểu của hàm tạo: không có
		Đối của hàm tạo: có thể có hoặc không
			- **Trong một lớp có thể có nhiều hàm tạo**
			- Tùy theo cách khai báo khi tạo đối tượng mà hàm tạo tương ứng sẽ được gọi
-----
## References
1. [[oop]]
