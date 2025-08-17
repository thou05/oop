Created: 202411172117
Tags: 

Là kỹ thuật trong OOP, cung cấp các mẫu thiết kế giaie pháp để giải quyết vấn đề chung trong lập trình, giúp giải quyết vấn đề 1 cách tối ưu nhất

Design Patterns dành cho đối tượng bạn đọc có kiến thức nền tảng tốt về lập trình và có hướng tìm hiểu sâu về thiết kế phần mềm để đi lên làm Technical Leader, Solution Architect.

## Phân loại
Theo quan điểm của bốn người, design pattern chủ yếu được dựa theo những quy tắc sau đây về thiết kế hướng đối tượng.
- Lập trình cho interface chứ không phải để implement interface đó.
- Ưu tiên object composition hơn là thừa kế.
#### [Creational Pattern](https://gpcoder.com/category/design-pattern/creational-pattern/)
![[creational.png]]
cung cấp một giải pháp để tạo ra các object và che giấu được logic của việc tạo ra nó , thay vì tạo ra object một cách trực tiếp bằng cách sử dụng method new => giúp cho chương trình trở nên mềm dẻo hơn trong việc quyết định object nào cần được tạo ra trong những tình huống được đưa ra.
- [[Singleton]]
- [[Factory Method]]
- Abstract Factor
- Builder
- Prototype

#### [Structural Pattern](https://gpcoder.com/category/design-pattern/structuaral-pattern/)
![[structural.png]]
liên quan tới class và các thành phần của object. Nó dùng để thiết lập, định nghĩa quan hệ giữa các đối tượng.

 [[Adapter]], Bridge, Composite, Decorator, [[Facade]], Flyweight và Proxy

#### [Behavioral Pattern](https://gpcoder.com/category/design-pattern/behavior-pattern/)
![[behavioral.png]]
dùng trong thực hiện các hành vi của đối tượng, sự giao tiếp giữa các object với nhau.

Interpreter, [[Template Method]], Chain of Responsibility, Command, Iterator, Mediator, Memento, [[Observer]], [[State]], Strategy và Visitor


### Design patterns hay dùng
1. [Singleton Pattern](https://www.cppdeveloper.com/design-patterns/design-patterns-1-singleton-pattern/)
2. [Factory Pattern](https://www.cppdeveloper.com/design-patterns/design-patterns-3-factory-pattern/)
3. [Adapter Pattern](https://www.cppdeveloper.com/design-patterns/design-patterns-4-adapter-pattern/)
4. [Facade Pattern](https://www.cppdeveloper.com/design-patterns/design-patterns-5-facade-pattern/)
5. [Template Method Pattern](https://www.cppdeveloper.com/design-patterns/design-patterns-6-template-method-pattern/)
6. [Observer Pattern](https://cppdeveloper.com/design-patterns/design-patterns-7-observer-pattern/)
7. [State Pattern](https://cppdeveloper.com/design-patterns/design-patterns-8-state-pattern/)


-----
## References
1. https://viblo.asia/p/tong-hop-cac-bai-huong-dan-ve-design-pattern-23-mau-co-ban-cua-gof-3P0lPQPG5ox
2. https://cppdeveloper.com/design-patterns/design-patterns-1-design-patterns-la-gi/
3. cuốn sách với tiêu đề Design Patterns – Elements of Reusable Object-Oriented Software
4. cuốn  [Design Patterns for Dummies](https://github.com/tuanpm3/Documents/blob/master/C_C%2B%2B_NANG_CAO/Tieng%20Anh/DesignPattern/Design%20Patterns%20For%20Dummies.pdf)
