# namespacee
https://viblo.asia/p/namespace-trong-c-XL6lAv0R5ek

- namespace dùng trong trường hợp cần phân biệt các function, variable có tên giống nhau (có thể giữa các file)

- vậy trong trường hợp có 2 namespace trùng tên, trùng tên function thì sao?
```
đơn giản là nó sẽ merge 2 namespace đó (coi nó như chung trong 1 namespace)
đối vs func cùng tên thì c++ sẽ coi như nạp chồng hàm  => vì vậy nếu hàm có tên hàm + kiểu return + tham số giống nhau thì nó sẽ báo lỗi redefine
```

- có thể dùng nested namespace
```
namespace file1{
    namespace file2{
    }
}
```
