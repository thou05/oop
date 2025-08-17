Created: 202409150056
Tags: #oop 
## 1. Khái niệm
- Mục đích chính của kế thừa là nâng cao khả năng **sử dụng lại**

#### 2.1 Tính chất
- Nhằm xây dựng 1 lớp mới từ các lớp đã có
	- Lớp ban đầu : lớp cơ sở (lớp cha, base class, super class)
	- Lớp kế thừa: lớp dẫn xuất (lớp con, derived class, sub class)
- Một lớp có thể là cơ sở của một hoặc nhiều lớp khác
- Một lớp chỉ được kế thừa từ 1 lớp khác

- Kế thừa tất cả các thuộc tính, phương thức
- Kế thừa có dạng quan hệ "is a", "is a kind of"

#### 2.2 Tác dụng
- Nâng cao khả năng sử dụng lại
- Thiết kế các lớp hợp lý hơn
- Các cách tiếp cận khi thiết kế các lớp kế thừa
	- Top-down: Từ một lớp, chi tiết hóa thành các lớp con
	-  Bottom-up: Xây dựng lớp cơ sở từ các đặc tính chung của một số lớp
## 2. Xây dựng lớp dẫn xuất 

![[Pasted image 20240910002136.png]]

## 3.Các kiểu dẫn xuất

## 4. Truy nhập vào các thành phần từ lớp dẫn xuất

## 5. Hàm tạo và hàm hủy trong lớp dẫn xuất
Composition - gộp
```cpp
class MonHoc{
	private
	...

}
class GiaoVien: public Nguoi{
	private:
		char *bomon;
		MonHoc mh;
}
```

```cpp
GiaoVien(char *hoten1, int namsinh1, char *monhoc1, int sotiet1, char *bomon1): Nguoi(hoten1, namsinh1), mh(monhoc1, sotiet1){
	int n = strlen(bomon1);
	bomon = new char[n+1];
	strcpy(bomon, bomon1);
}
```
=> khong hieu phan nay cho lam

## 6. Đa kế thừa
#### Cách xử lý đa kế thừa
- Biến lớp A trở thành lớp cơ sở ảo
	- Các lớp cơ sở ảo sẽ được kết hợp để tạo một lớp cơ sở duy nhất
	- Lớp D sẽ chỉ có 1 lớp cơ sở A duy nhất
- Để thực hiện được điều trên: Thêm từ khóa **virtual** khi khai báo B và C
	![[Pasted image 20240910002442.png]]


-----
## References
1. https://topdev.vn/blog/ke-thua-trong-c/
2. https://howkteam.vn/course/lap-trinh-java-co-ban-den-huong-doi-tuong/ke-thua-trong-lap-trinh-huong-doi-tuong-3868