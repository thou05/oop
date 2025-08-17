- là 1 tập các thành phần chỉ có khai báo mà không có phần định nghĩa 
- được hiểu như là 1 khuôn mẫu mà mọi lớp thực thi nó đều phải tuân theo.
- đặc điểm
	- Chỉ chứa khai báo không chứa phần định nghĩa
	- Việc ghi đè 1 thành phần trong interface cũng không cần từ khoá override.
	- Không thể khai báo phạm vi truy cập cho các thành phần bên trong interface
	- không chứa các thuộc tính (các biến)
	- không có constructor cũng không có destructor.
	- Các lớp có thể thực thi nhiều interface cùng lúc
	- Một interface có thể kế thừa nhiều interface khác nhưng không thể kế thừa bất kỳ lớp nào.
- Cú pháp
	```
	Interface <tên interface>

    {

        **// Khai báo các thành phần bên trong interface**

    }
	```

- Một class không thể kế thừa từ nhiều class khác nhưng có thể implements nhiều interface khác nhau một lúc.





----
https://howkteam.vn/course/lap-trinh-oop-voi-c/interface-trong-lap-trinh-huong-doi-tuong-1396
https://viblo.asia/p/da-ke-thua-trong-java-tai-sao-khong-4dbZNJMaZYM

