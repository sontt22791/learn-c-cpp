
---------------------
# tham trị/ tham chiếu
https://www.youtube.com/watch?v=hc6cyVrLIFc&list=PLh91SaQgRYnp-NC3WnFDMWQV40a6m61Hr&index=31

https://nguyenvanhieu.vn/con-tro-va-ham-trong-c/

https://nguyenvanhieu.vn/tham-chieu-va-tham-tri-trong-c/

- `trong c ko có tham chiếu, tuy nhiên có 1 cách tương tự để truyền tham chiếu là dùng con trỏ => khi sử dụng fai truyền địa chỉ của biến (thay vì truyển biến)`

```
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
```

- trong c++ có cải tiến là truyền tham chiếu => chỉ cần sửa tham số của hàm thành &a, &b => lúc sử dụng chỉ cần truyền tên biến là đc.

```

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
```


- khi dùng tham trị, c++ sẽ tạo ra 1 bản sao của biến, và sửa đổi trên bản sao đó => ko ảnh hưởng đến biến gốc

điểm khác nhau giữa truyền con trỏ và truyền tham chiếu:
- khi dùng con trỏ (trong c) => hệ thống sẽ thao tác trên con trỏ của biến => vì vậy khi sử dụng fai truyền &a => trong function để gọi giá trị fai dùng *a
- khi dùng tham chiếu (trong c++, đây là cải tiến của c++, ko có trong c) => hệ thống sẽ reference đến biến đó luôn mà k tạo ra bản sao nữa => vì vậy khi sử dụng chỉ cần truyền biến a => trong func để gọi giá trị chỉ cần gọi a bth 


