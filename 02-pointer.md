# pointers

Difference between ++*p, *p++ and *++p in C:
- (must read) https://stackoverflow.com/questions/8208021/how-to-increment-a-pointer-address-and-pointers-value
- https://www.tutorialspoint.com/difference-between-plusplus-p-pplusplus-and-plusplusp-in-c

giải thích trường hợp *p++ 
```
int main(int argc, char const *argv[])
{
    // return 0;
    int a = 5;
    int *p = &a;
    cout << "*p++ " << *p++ << endl; // <=> *(p++)
```
=> code trên print ra 5 => tại sao


test thử trường hợp:
```
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
```
theo code trên sẽ thấy i++ sẽ return giá trị cũ, sau đó mới tăng lên 1 đơn vị

=> vì vậy *p++ sẽ return giá trị của p (do là *p) và sẽ tăng con trỏ đến ô nhớ tiếp theo.

=> vì vậy khi tăng giá trị lên 1 => nên dùng (*p)++ hoặc *p += 1 để đảm bảo

=> chú ý cả thứ tự ưu tiên của *, ++ ở trước , ++ ở sau , ()  (đọc 2 link ở trên)

