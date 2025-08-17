Created: 202409182148
Tags: #oop

- Là các **hàm đặc biệt để thực thi các lệnh trước khi đối tượng bị hủy bỏ khỏi bộ nhớ** 
- là method đặc biệt không có kiểu dữ liệu trả về
- thường được dùng để xóa các bộ nhớ do con trỏ tạo ra -> tránh lãng phí bộ nhớ

#### Khai báo
`~className()`

Cài đặt destructor: trong thân hủy tử ta thực hiện các lệnh xóa các thuộc tính con trỏ

- Tác dụng
	- Tự động thực hiện khi một đối tượng bị hủy
	- Làm các thao tác “dọn dẹp” sau khi đối tượng bị hủy
- Hủy bằng cách nào
	- Tĩnh : Khi kết thúc phạm vi của biến đối tượng
	- Động : Dùng toán tử delete

- Nếu k xây dựng hàm hủy
	- Khi không xây dựng hàm tạo thì hàm hủy mặc định sẽ được sử dụng
	- Mọi lớp đều có hàm hủy mặc định (default destructor)

- Cách xây dựng
	- Tên của hàm hủy: trùng tên với lớp và được đặt sau dấu ~
	- Không có kiểu, đối
	- **Mỗi lớp có duy nhất 1 hàm hủy**


-----
## References
1. [[oop]]
2. https://www.youtube.com/watch?v=T40Pyl2xiJM
3. 