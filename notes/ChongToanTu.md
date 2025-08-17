Created: 202409150102
Tags: #oop 

[[phương thức toán tử]]
## Một số loại toán tử
- Toán tử 1 ngôi: trong phương thức sẽ không có đối
	- `-` đảo dấu
	- `[]` lấy giá trị mảng
	- `++` tăng 1, `--` giảm 1
	- phân biệt các dạng tiền tố, hậu tố dùng đối giả (int)
- Toán tử **2 ngôi**: trong phương thức cần dùng **1 đối** tường minh `+ - * / =`

## Quy định về định nghĩa toán tử
- Không thể định nghĩa 1 toán tử mới
- Các toán tử phải được định nghĩa tường minh 
- Các toán tử định nghĩa phải bảo toàn số ngôi nguyên thủy
- Các toán tử định nghĩa nên bảo toàn ý nghĩa nguyên thủy

#### Một số lưu ý về định nghĩa toán tử
- Hàm toán tử có thể là
	- Hàm thành phần(phương thức) của lớp
	- Hàm bạn của lớp
- Đa phần các toán tử có thể định nghĩa theo cả 2 cách trên
- Một số toán tử phải được định nghĩa:
	- Hàm bạn: `<<, >>`
	- Phương thức: `++, =, []`

## Những toán tử có thể định nghĩa chồng

![[Pasted image 20240905151437.png]]

## Toán tử gán
- Cần định nghĩa chồng toán tử gán khi ?
	- Trong mỗi lớp đề có 1 toán tử gán mặc định
	- Nếu trong thành phần dữ liệu của lớp
		- Không có con trỏ hoặc biến tham chiếu -> toán tử gán mặc định
		- Có con trỏ hoặc biến tham chiếu -> phải định nghĩa toán tử gán
- Toán tử gán có mấy ngôi ?
	- Toán tử 2 ngôi `a = b`
- Khi định nghĩa chồn toán tử gán cần phải:
	- Định nghĩa là hàm thành phần của lớp
	- Có 1 tham số trong hàm toán tử


-----
## References
1.
