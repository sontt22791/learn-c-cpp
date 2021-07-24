------------------------------------------------------------------------

tham trị/ tham chiếu
====================

https://www.youtube.com/watch?v=hc6cyVrLIFc&list=PLh91SaQgRYnp-NC3WnFDMWQV40a6m61Hr&index=31

https://nguyenvanhieu.vn/con-tro-va-ham-trong-c/

https://nguyenvanhieu.vn/tham-chieu-va-tham-tri-trong-c/

-   `trong c ko có tham chiếu, tuy nhiên có 1 cách tương tự để truyền tham chiếu là dùng con trỏ => khi sử dụng fai truyền địa chỉ của biến (thay vì truyển biến)`

<!-- -->

    #include <stdio.h>
     
     
    // Tham số đầu vào là 2 biến con trỏ kiểu int
    void swap(int *a, int *b){
        // dùng * để lấy giá trị của biến mà con trỏ đang trỏ tới
        printf("Ham con, truoc khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
        // dùng * để lấy giá trị của biến mà con trỏ a đang trỏ tới và gán cho biến `tmp`
        int tmp = *a; 
        // sửa giá trị của biến mà con trỏ a đang trỏ tới,
        // bằng giá trị của biến mà con trỏ b đang trỏ tới
        *a = *b; 
        // sửa giá trị của biến mà con trỏ a đang trỏ tới,
        // bằng giá trị của của biến con trỏ a đang trỏ tới, đang được lưu trong `tmp`
        *b = tmp;
        // dùng * để lấy giá trị của biến mà con trỏ đang trỏ tới
        printf("Ham con, sau khi goi ham hoan vi, a = %d, b = %d\n", *a , *b);
    }
     
    int main(){
        int a = 5, b = 7;
        printf("Ham main, truoc khi goi ham hoan vi, a = %d, b = %d\n", a , b);
        
        // Do tham số hàm là 2 con trỏ, ta cần truyền vào địa chỉ
        // Dùng & để lấy địa chỉ của biến.
        swap(&a, &b);
        printf("Ham main, sau khi goi ham hoan vi, a = %d, b = %d\n", a , b);
    }

-   trong c++ có cải tiến là truyền tham chiếu =\> chỉ cần sửa tham số
    của hàm thành &a, &b =\> lúc sử dụng chỉ cần truyền tên biến là đc.

<!-- -->


    #include <stdio.h>
     
    void Swap(int &a, int &b){
        int tmp = a;
        a = b;
        b = tmp;
    }
     
    void increment(int &n){
        n++;
    }
     
    int main(){
        int first, second;
     
        printf("\nNhap first = "); scanf("%d", &first);
        printf("\nNhap second = "); scanf("%d", &second);
     
        printf("\nfirst = %d, second = %d", first, second);
        increment(first);
        increment(second);
        Swap(first, second);
        printf("\nfirst = %d, second = %d", first, second);
     
     
    }

-   khi dùng tham trị, c++ sẽ tạo ra 1 bản sao của biến, và sửa đổi trên
    bản sao đó =\> ko ảnh hưởng đến biến gốc

điểm khác nhau giữa truyền con trỏ và truyền tham chiếu: - khi dùng con
trỏ (trong c) =\> hệ thống sẽ thao tác trên con trỏ của biến =\> vì vậy
khi sử dụng fai truyền &a =\> trong function để gọi giá trị fai dùng \*a
- khi dùng tham chiếu (trong c++, đây là cải tiến của c++, ko có trong
c) =\> hệ thống sẽ reference đến biến đó luôn mà k tạo ra bản sao nữa
=\> vì vậy khi sử dụng chỉ cần truyền biến a =\> trong func để gọi giá
trị chỉ cần gọi a bth

pointers
========

Difference between ++*p, *p++ and \*++p in C: - (must read)
https://stackoverflow.com/questions/8208021/how-to-increment-a-pointer-address-and-pointers-value
-
https://www.tutorialspoint.com/difference-between-plusplus-p-pplusplus-and-plusplusp-in-c

giải thích trường hợp \*p++

    int main(int argc, char const *argv[])
    {
        // return 0;
        int a = 5;
        int *p = &a;
        cout << "*p++ " << *p++ << endl; // <=> *(p++)

=\> code trên print ra 5 =\> tại sao

test thử trường hợp:

    #include<iostream>


    using namespace std;

    int main(int argc, char const *argv[])
    {
        // return 0;
        int i = 5;
        cout << i++ << endl; // print 5
        cout << i++ << endl; // print 6
        cout << i << endl; // print 7
    }

theo code trên sẽ thấy i++ sẽ return giá trị cũ, sau đó mới tăng lên 1
đơn vị

=\> vì vậy *p++ sẽ return giá trị của p (do là *p) và sẽ tăng con trỏ
đến ô nhớ tiếp theo.

=\> vì vậy khi tăng giá trị lên 1 =\> nên dùng (*p)++ hoặc *p += 1 để
đảm bảo

=\> chú ý cả thứ tự ưu tiên của \*, ++ ở trước , ++ ở sau , () (đọc 2
link ở trên)

array
=====

Có thể thấy giá trị của arr chính là địa chỉ của phần tử đầu tiên trong
mảng (arr trỏ tới địa chỉ của arr\[0\]), nên có thể coi arr giống như 1
con trỏ.

Lưu ý:
`arr không phải là một con trỏ mà arr được dùng giống như một con trỏ.`

https://codelearn.io/learning/cpp-advanced/671941 =\> đọc bài này để
hiểu các loại cấp phát bộ nhớ trong c++ (3 loại: tĩnh=\> global, động,
tự động)

-   ko nên dùng kiểu code cấp phát bộ nhớ k biết trước như dưới đây (vì
    nó chỉ hỗ trợ 1 số trình biên dịch có VLA)

<!-- -->

    int n;
    cin >> n;
    int arr[n];

-   để tránh nhầm lẫn khi sử dụng \* lúc khai báo và lúc lấy giá trị,
    nên để `int* p` khi khai báo và `*p` khi lấy giá trị (\* đặt cạnh
    kiểu dữ liệu khi khai báo, \* đặt cạnh biến khi lấy giá trị)

-   `int* &arr` =\> tham chiếu đến địa chỉ của biến arr (biến arr là 1
    con trỏ)
-   chú ý khi truyền array vào hàm =\> nó truyền giá trị của biến array
    đó (giá trị của array = địa chỉ của phần tử đầu tiên) =\> vì vậy khi
    update array ở trong hàm thì array ở ngoài main cũng đc update theo.
    tuy nhiên để cấp phát bộ nhớ mới trong hàm (tương đương với thay đổi
    array) =\> ta cần truyền vào func tham chiếu / con trỏ của biến.

-   xem lại vấn đề memory leaks khi cấp phát đi phát lại bộ nhớ
    https://codelearn.io/learning/cpp-advanced/682708
    https://codelearn.io/learning/cpp-advanced/658534
    https://www.howkteam.vn/course/khoa-hoc-lap-trinh-c-can-ban/cap-phat-dong-trong-c-dynamic-memory-allocation-2734

struct
======

size of struct: https://codelearn.io/learning/cpp-advanced/691542

đọc thì k hiểu lắm, nhưng cách tính thì có các bước sau: - bắt đầu từ 0
- index của phần tử tiếp theo fai chia hết cho (sizeof(kiểu dữ liệu đó))
- sau đó cộng 1 =\> size struct

    struct MyStruct
    {
        char a; // 0
        int b; // 4 - 7 (do phải chia hết cho 4)
        short c; // 8-9
        short d; // 10-11
        double e; // 16-23 (do fai chia hết cho 8)
    };


    struct MyStruct
    {
        char a; // 0
        short b; // 2-3 (fai chia het cho 2)
        short c; // 4-5
        char d; // 6
        short e; // 8-9 (fai chia het cho 2)
        inf f; // 12- 15 (fai chia het cho 4)
    };


    struct MyStruct
    {
        char a; // 0
        char d; // 1
        short b; // 2-3
        short c; // 4-5
        short e; // 6-7
        int f; // 8-11 (do fai chia hết cho 4)
    };

namespacee
==========

https://viblo.asia/p/namespace-trong-c-XL6lAv0R5ek

-   namespace dùng trong trường hợp cần phân biệt các function, variable
    có tên giống nhau (có thể giữa các file)

-   vậy trong trường hợp có 2 namespace trùng tên, trùng tên function
    thì sao?

<!-- -->

    đơn giản là nó sẽ merge 2 namespace đó (coi nó như chung trong 1 namespace)
    đối vs func cùng tên thì c++ sẽ coi như nạp chồng hàm  => vì vậy nếu hàm có tên hàm + kiểu return + tham số giống nhau thì nó sẽ báo lỗi redefine

-   có thể dùng nested namespace

<!-- -->

    namespace file1{
        namespace file2{
        }
    }

template
========

https://codelearn.io/sharing/template-trong-cpp-la-gi-phan-1
https://nguyenvanhieu.vn/template-trong-c/

-   Template (khuôn mẫu) là một từ khóa trong C++, và là một kiểu dữ
    liệu trừu tượng tổng quát hóa cho các kiểu dữ liệu int, float,
    double, bool...
-   Template giúp người lập trình định nghĩa tổng quát cho hàm và lớp
    thay vì phải nạp chồng (overloading) cho từng hàm hay phương thức
    với những kiểu dữ liệu khác nhau.

OOP
===

class
-----

-   public, private, protected
-   constructor =\> contructor fai dùng public =\> contructor là 1
    phương thức đặc biệt, đc gọi khi khởi tạo (kiểu như init trong
    python?) =\> constructor ko cần định nghĩa kiểu trả về và có tên
    trùng vs tên class
-   destructor =\> \~Student() {} =\> func thực hiện sau khi đóng ctr,
    thoát class,...

static
------

-   pthuc tĩnh chỉ gọi đc các phương thức tĩnh hoặc biến tĩnh khác
    (trong cùng 1 lớp)
-   pthuc tĩnh có thể gọi mà k cần khởi tạo object

-   nạp chồng phương thức là dùng hàm cùng tên nhưng khác kiểu hoặc tham
    số

tính đóng gói
-------------

=\> giúp code rõ ràng hơn, tránh set sai,..

tính kế thừa
------------

-   có thể thay đổi phạm vi khi kế thừa =\> vd set sang protected ,
    private =\> các thuộc tính và phương thức (attribues, methods) của
    parent class sẽ đc chuyển sang phạm vi khác

-   contructor của class con luôn gọi đến contructor của class cha.\
    nếu k chỉ rõ (set :Parent(...)) thì class con luôn gọi đến
    contructor mặc định (contructor k có tham số)\
    =\> nếu class cha có contructor có tham số mà k có contructor mặc
    định (ko có tham số) =\> class con bắt buộc fai gọi đến contructor
    nào đó của class cha.

<!-- -->

    Student(string name, string gender, int gpa) : Person(name, gender) { this->gpa = gpa;}
    Student(int gpa) : Person("Default","male") { this->gpa = gpa;} // default và male là giá trij bất kỳ

-   có thể ghi đè method. khi ghi đè có thể gọi lại method của class cha
    băngf cách:

<!-- -->

    Person::display()

-   tránh lỗi include nhiều lần:

<!-- -->

    #pragma once

hoặc

    #ifndef PERSON_CPP
    #define PERCON_CPP
    class Person {
    };
    #endif

tính đa hình
============

-   Khi khai báo hàm ảo với từ khóa virtual nghĩa là hàm này sẽ được gọi
    theo loại đối tượng được trỏ (hoặc tham chiếu), chứ không phải theo
    loại của con trỏ (hoặc tham chiếu)
    https://nguyenvanhieu.vn/tinh-da-hinh-trong-lap-trinh-huong-doi-tuong/

-   https://nguyenvanhieu.vn/tinh-da-hinh-trong-lap-trinh-huong-doi-tuong/
    =\> virtual đọc đây dễ hiểu hơn =\> theo mình hiểu mục đích của việc
    up/downcasting là để chỉ cần tạo con trỏ ở base class, sau đó khi
    gọi nó sẽ tự biết gọi đến class con.

-   Lưu ý: end() không phải là iterator trỏ tới phần tử cuối cùng mà trỏ
    tới sau phần tử cuối cùng.
-   begin() và end(), hai phương thức này sẽ trả về con trỏ của phần tử
    thứ nhất và con trỏ ở sau phần tử cuối cùng.

compare
=======

[summary vector, list, set, map, stack, queue](08-comparelib.xlsx)

bitwise
=======

(https://codelearn.io/learning/cpp-advanced/673946)

-   kích thước kiểu char là 1 byte mà 1 byte = 8 bit
-   bitwise giúp chạy nhanh hơn (vd trường hợp xác định chẵn lẻ) =\>
    nhưng cần fai biết lý thuyết về nhị phân =\> tìm hiểu sau
-   cách chuyển đổi các hệ:
    https://codelearn.io/sharing/cach-chuyen-doi-cac-he-so-dem

helpful links
=============

-   https://codelearn.io/sharing/13-ham-thong-dung-trong-vector

-   https://codelearn.io/sharing/cai-vscode-lap-trinh-cpp-de-nhat

-   https://viettuts.vn/lap-trinh-cpp/modifier-trong-cpp (chưa hiểu.tuy
    nhiên mình lưu lại vì mình thấy trong các func của larod hay để tham
    số là const type xxx =\> mình search thì mn có bảo là để đảm bảo
    biến k bị thay đổi trong hàm
    https://stackoverflow.com/questions/18797253/why-using-const-for-arguments-passed-by-value)

-   https://vimentor.com/vi/lesson/doi-so-tham-so-mac-dinh-trong-c =\>
    có thể set giá trị mặc định cho tham số trong hàm\
-   https://www.howkteam.vn/course/khoa-hoc-lap-trinh-c-can-ban/ham-co-doi-so-mac-dinh-trong-c-default-arguments-3902
    =\> có thể set giá trị mặc định cho tham số trong hàm
    `Chú ý: Tất cả các tham số có đối số mặc định phải được khai báo liên tục, và đặt cuối cùng trong danh sách tham số.`

-   https://vimentor.com/vi/lesson/tra-ve-tham-chieu-trong-c =\> trả về
    tham chiếu
