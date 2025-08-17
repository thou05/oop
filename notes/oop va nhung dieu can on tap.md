Created: 202411101935
Tags: 

- luyện tập thêm mấy bài có con trỏ, operator << >> 

de3
```cpp
double tinhTrungBinhCong(){
	int sum = 0, count = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] > 0){
			sum += a[i];
			count++;
		}
	}
	return count > 0 ? (double) sum / count : 0;
}

bool laSoChinhPhuong(int x){
	int canBacHai = (int)(sqrt(x)); 
	return canBacHai * canBacHai == x;
}

int demSoChinhPhuong(){
	int count = 0;
	for(int i = 1; i <= n; i++){
		if(laSoChinhPhuong(a[i])){
			count++;
		}
	}
	return count;
}
```

de14
```cpp
// thieu cap phat bo nho dong
void input(){
	cout << "Nhap bac cua da thuc: ";
	cin >> bac;
	a = new float[bac + 1];
	for(int i = 0; i <= bac; i++){
		cout << "Nhap a[" << i << "]: ";
		cin >> a[i];
	}
}
// thieu return
friend ostream &operator <<(ostream &os, DaThuc &d){
	for(int i = d.bac; i >= 0; i--){
		os << d.a[i];
		if(i > 0){
			os << "x^" << i << " + ";
		}
	}
	return os;
}
// chu y cho nay thieu &d va return
friend double tinh(DaThuc &d, float x){
	double kq = 0;
	for(int i = 0; i <= d.bac; i++){
		kq += d.a[i] * pow(x, i);
	}
	return kq;
}
```

de14 bai2


đề 2017 - 15 cau 1
```cpp
//can xem lai phan toi gian
// return a chu khong phai return 1
int ucln(int a, int b){
	if(b == 0){
		return a;
	}else{
	   return ucln(b, a % b); 
	}
}
PS toigian(){
	// int ucln = __gcd(this->tu, this->mau);
	int uoc = ucln(tu, mau);
	tu = tu / uoc;
	mau = mau / uoc;
	if(mau < 0){
		tu = -tu;
		mau = -mau;
	}
	return *this;
}
```



-----
## References
1.
