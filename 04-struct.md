# struct

size of struct: https://codelearn.io/learning/cpp-advanced/691542

đọc thì k hiểu lắm, nhưng cách tính thì có các bước sau:
- bắt đầu từ 0
- index của phần tử tiếp theo fai chia hết cho (sizeof(kiểu dữ liệu đó))
- sau đó cộng 1 => size struct

```
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

```


