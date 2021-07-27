# convert
```
pandoc (get-item ./docs/*.md).FullName -o book.html
pandoc (get-item ./docs/*.md).FullName -o book.md
```

# mục đích học

mục đích học c/c++ của mình là để đọc hiểu code trong project larod

# lộ trình học
mình học C trước, sau đó học qua C++. Mình đã (và nghĩ) nên học theo lộ trình này:
1. https://codelearn.io/learning/c-cho-nguoi-moi-bat-dau => học basic C, làm bài tập đơn giản để quen syntax trước
2. https://nguyenvanhieu.vn/khoa-hoc-lap-trinh-c/ => củng cố kiến thức trong C. có nhiều thông tin bổ ích trong khóa này, nên đọc kỹ lại để hiểu sau khi đã quen syntax

sau đó mình học C++, mình đã học lộ trình này, nhưng mình nghĩ nên bắt đầu trước với bài diff giữa C/C++:
1. https://nguyenvanhieu.vn/su-khac-nhau-giua-c-va-cpp/ => xem sự khác nhau để hiểu hơn 
2. https://codelearn.io/learning/cpp-cho-nguoi-moi-bat-dau => làm bài tập basic C++ để quen syntax
3. https://codelearn.io/learning/cpp-nang-cao => học các kiến thức nâng cao
(có thể tham khảo bài nào khó hiểu trong khóa này (ko nên xem hết, chỉ xem clip nào cần thôi): https://www.youtube.com/playlist?list=PLh91SaQgRYnp-NC3WnFDMWQV40a6m61Hr)
4. https://codelearn.io/learning/lap-trinh-huong-doi-tuong-trong-cpp => học OOP và làm bài tập trong C++
(https://nguyenvanhieu.vn/lap-trinh-huong-doi-tuong-cpp/ => khóa này chỉ có kiến thức, nên sẽ khó mà nắm bắt đc. Nên làm xong ở khóa của codelearn trước, sau đọc lại link này để củng cố)
5. đọc để hiểu về namespace, template trong C++
6. https://codelearn.io/learning/thu-vien-chuan-cpp => học các lib về vector, list, set, map, stack, queue
7. https://www.howkteam.vn/course/khoa-hoc-lap-trinh-c-can-ban/vong-lap-for-each-trong-c11-for-each-loops-2700 => có tgian thì nên đọc thêm khóa này để củng cố kiến thức (mình mới đọc vài bài mà các khóa trước k nói, vd như for-each này)


Ngoài ra có thể tham khảo thêm ở https://daynhauhoc.com/t/tong-hop-khoa-hoc-lap-trinh-c-danh-cho-nguoi-moi-bat-dau/29429 (khi search về libary mình thấy course này, => có vẻ đầy đủ thông tin hơn các khóa mình đã học ở trên)
# Note quan trọng:

## 1. constructor trong class
https://www.tutorialspoint.com/cplusplus/cpp_constructor_destructor.htm

có 1 cách contructor mà mình thấy trong larod, nhưng k thấy trong các bài mình đc học. vì vậy mình note ở đây để nhớ

```
// Using Initialization Lists to Initialize Fields
Line::Line( double len): length(len) {
   cout << "Object is being created, length = " << len << endl;
}

// tương đương với
Line::Line( double len) {
   cout << "Object is being created, length = " << len << endl;
   length = len;
}

// có thể khai báo multiple fields X,Y,Z,..
C::C( double a, double b, double c): X(a), Y(b), Z(c) {
   ....
}

```

## 2. dùng const trong lúc duyệt mảng, hoặc trong tham số của hàm
https://stackoverflow.com/questions/18797253/why-using-const-for-arguments-passed-by-value  
https://www.howkteam.vn/course/khoa-hoc-lap-trinh-c-can-ban/vong-lap-for-each-trong-c11-for-each-loops-2700

=> theo mình đang hiểu (có thể chưa chính xác) thì việc thêm const ở trước để đảm bảo k thay đổi giá trị của biến khi duyệt hoặc khi ở trong hàm.  
=> tránh sai sót.

## set giá trị mặc định cho tham số trong hàm
https://www.howkteam.vn/course/khoa-hoc-lap-trinh-c-can-ban/ham-co-doi-so-mac-dinh-trong-c-default-arguments-3902  
`Chú ý: Tất cả các tham số có đối số mặc định phải được khai báo liên tục, và đặt cuối cùng trong danh sách tham số.`



# All note
[readme html](book.html)
