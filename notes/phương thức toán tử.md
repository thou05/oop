Created: 202409232343
Tags: 

Mỗi toán tử được xây dựng giống các phương thức, nhưng thêm từ khóa `operator`

Số đối tường minh trong phương thức toán tử ít hơn số ngôi 1
(? đ hieu lam)

Toán tử 1 ngôi: phương thức không có đối `-`(đảo dấu), `[ ]`(lấy giá trị mảng), `++`(tăng 1), `--`(giảm 1) 
Phân biệt các dạng tiền tồ, hậu tố dùng đối giả (int)

Toán tử 2 ngôi: phương thước cần dùng 1 đối tường minh, `+ - * / =`


VD
```C++
class SP{
	private:
		double real, img;
	public:
		SP operator-(){ //1 ngoi
			SP u;
			u.real = - this->real;
			u.img = - this->img;
			return u;
		} 
		SP operator-(SP a){ //2 ngoi
			sp u;
			u.real = real - a.real;
			u.img = img - a.img;
			return ul
		}
};
int main(){
	SP u, v, p;
	p = u - v; //2 ngoi
	u = -v; //1 ngoi
	
}
```



-----
## References
1.
