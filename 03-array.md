# array

Có thể thấy giá trị của arr chính là địa chỉ của phần tử đầu tiên trong mảng (arr trỏ tới địa chỉ của arr[0]), nên có thể coi arr giống như 1 con trỏ.

Lưu ý: `arr không phải là một con trỏ mà arr được dùng giống như một con trỏ.`



https://codelearn.io/learning/cpp-advanced/671941 => đọc bài này để hiểu các loại cấp phát bộ nhớ trong c++ (3 loại: tĩnh=> global, động, tự động)

- ko nên dùng kiểu code cấp phát bộ nhớ k biết trước như dưới đây (vì nó chỉ hỗ trợ 1 số trình biên dịch có VLA)

```
int n;
cin >> n;
int arr[n];
```

- để tránh nhầm lẫn khi sử dụng * lúc khai báo và lúc lấy giá trị, nên để `int* p` khi khai báo và `*p` khi lấy giá trị (* đặt cạnh kiểu dữ liệu khi khai báo, * đặt cạnh biến khi lấy giá trị)

- `int* &arr` => tham chiếu đến địa chỉ của biến arr (biến arr là 1 con trỏ)
- chú ý khi truyền array vào hàm => nó truyền giá trị của biến array đó (giá trị của array = địa chỉ của phần tử đầu tiên) => vì vậy khi update array ở trong hàm thì array ở ngoài main cũng đc update theo. tuy nhiên để cấp phát bộ nhớ mới trong hàm (tương đương với thay đổi array) => ta cần truyền vào func tham chiếu / con trỏ của biến.


- xem lại vấn đề memory leaks khi cấp phát đi phát lại bộ nhớ
https://codelearn.io/learning/cpp-advanced/682708
https://codelearn.io/learning/cpp-advanced/658534
https://www.howkteam.vn/course/khoa-hoc-lap-trinh-c-can-ban/cap-phat-dong-trong-c-dynamic-memory-allocation-2734


