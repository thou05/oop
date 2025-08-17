Tags: #dsa #oop 
## Khái niệm lớp, đối tượng
- Class : user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
  - blueprint: a complete plan that explains how to do or develop something
  - lớp là các template tập hợp các attribute và method để phục vụ xây dựng object
 
- object: là 1 thể hiện cụ thể của lớp như các biến
- attribute: thuộc tính là các thành phần mô tả object, như ng thì có tên, tuổi...
- method:
  - are functions that belongs to the class.
  - phương thức là các hàm mô tả hành động như tam giác thì có tính chu vi, diện tích...

----
## Constructor, destructor
### constructor
- special method that is automatically called when an object of a class is created.
- thực hiện khởi gán giá trị, cấp phát bộ nhớ cho các thuộc tính của lớp.
- có thể nạp chồng nhiều contructor
- example
```
MyClass() {
      cout << "Hello World!";
}
```
- Constructor Parameters
```
Car(string brand, string model, int year) {
      this.brand = brand;
      this.model = model;
      this.year = year;
}
```

### destructor
- hàm đặc biệt để thực thi các lệnh trước khi đối tượng bị hủy bỏ khỏi bộ nhớ
- một lớp chỉ xây dựng 1 hủy tử
- thực hiện các lệnh xóa bỏ các thuộc tính con trỏ.

-------
## Access Specifiers
- Access specifiers define how the members (attributes and methods) of a class can be accessed.
- 3 types: 
  - public - members are accessible from outside the class
  - private - members cannot be accessed (or viewed) from outside the class
  - protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes.

--------
## Con trỏ this
- trỏ đến đối tượng hiện tại (current object) và nó được truyền như một đối ẩn tới các hàm thành phần của lớp
- chứa địa chỉ bộ nhớ của đối tượng hiện tại


## 6. Template class
- sử dụng kiểu mẫu để khai báo các biến và phương thức
```
template <typename T>
class Vector{
    private:
        int size;
        int space;
        T *elements;
    public:
        iterator<T> iter;
        //constructor
        Vector(int size){
            this->size = size;
            space = size();
            elements = new T(size);
        }
}
int main(){
    Vector<int> v(5);
}
```


