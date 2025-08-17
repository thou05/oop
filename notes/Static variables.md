Created: 202409240737
Tags: 

Biến tĩnh 
- Là biến chung của lớp, không của riêng đối tượng nào
- Tồn tại ngay cả khi chưa khai báo đối tượng nào

Khai báo: thêm `static` ở trước
Truy cập thông qua tên lớp hoặc tên đối tượng của lớp

Khởi gián bên ngoài lớp: `Kiểu lớp::biến = giatri;`

```C++
#include<bits/stdc++.h>
using namespace std;

class Dummy{
	public:
		static int n;
		Dummy(){
			n++;
		}
		~Dummy(){
			n--;
		}
};
int Dummy::n = 0; //khoi gan

int main(){
	Dummy a, b[5];
	Dummy *c = new Dummy;
	cout << a.n << endl;
	delete c; 
	cout << Dummy::n << endl;

}

```



-----
## References
1. [[oop]]
