# OOP

## class

- public, private, protected
- constructor => contructor fai dùng public => contructor là 1 phương thức đặc biệt, đc gọi khi khởi tạo (kiểu như init trong python?)
=> constructor ko cần định nghĩa kiểu trả về và có tên trùng vs tên class
- destructor => ~Student() {} => func thực hiện sau khi đóng ctr, thoát class,...


## static
- pthuc tĩnh chỉ gọi đc các phương thức tĩnh hoặc biến tĩnh khác (trong cùng 1 lớp)
- pthuc tĩnh có thể gọi mà k cần khởi tạo object

- nạp chồng phương thức là dùng hàm cùng tên nhưng khác kiểu hoặc tham số


## tính đóng gói
=> giúp code rõ ràng hơn, tránh set sai,..

## tính kế thừa
- có thể thay đổi phạm vi khi kế thừa => vd set sang protected , private => các thuộc tính và phương thức (attribues, methods) của parent class sẽ đc chuyển sang phạm vi khác

- contructor của class con luôn gọi đến contructor của class cha.  
nếu k chỉ rõ (set :Parent(...)) thì class con luôn gọi đến contructor mặc định (contructor k có tham số)  
=> nếu class cha có contructor có tham số mà k có contructor mặc định (ko có tham số) => class con bắt buộc fai gọi đến contructor nào đó của class cha.
```
Student(string name, string gender, int gpa) : Person(name, gender) { this->gpa = gpa;}
Student(int gpa) : Person("Default","male") { this->gpa = gpa;} // default và male là giá trij bất kỳ
```
- có thể ghi đè method. khi ghi đè có thể gọi lại method của class cha băngf cách:
```
Person::display()
```


- tránh lỗi include nhiều lần:
```
#pragma once
```
hoặc
```
#ifndef PERSON_CPP
#define PERCON_CPP
class Person {
};
#endif
```

# tính đa hình

- Khi khai báo hàm ảo với từ khóa virtual nghĩa là hàm này sẽ được gọi theo loại đối tượng được trỏ (hoặc tham chiếu), chứ không phải theo loại của con trỏ (hoặc tham chiếu)
https://nguyenvanhieu.vn/tinh-da-hinh-trong-lap-trinh-huong-doi-tuong/

- https://nguyenvanhieu.vn/tinh-da-hinh-trong-lap-trinh-huong-doi-tuong/ => virtual đọc đây dễ hiểu hơn => theo mình hiểu mục đích của việc up/downcasting là để chỉ cần tạo con trỏ ở base class, sau đó khi gọi nó sẽ tự biết gọi đến class con.

