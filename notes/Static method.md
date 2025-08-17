Created: 202409240747
Tags: 

Phương thức tĩnh
- Truy cập biến tĩnh nếu nó private

```cpp
class A{
	private:
		static int count;
	public:
		A(){
			count++;
		}
		~A(){
			count--;
		}
		static void print(){
			cout << "count = " << count;
		}
};
int A::count = 0; //khoi gan bien tinh

void main(){
	cout <<"Result: " << endl;
	A::print(); //0
	A a1; //ham tao
	a1.print(); //1
	A *pa = new A;
	a1.print(); //2
	delete pa; 
	a1.print(); //1
	A a2 = a1; //goi ham tao sao chep
	a2.print(); //1
}
```
`A a2 = a1 <=> A a2(a1)`

-----
## References
1.
