# Mục đích
khi đọc code larod, mình thấy ko hiểu tại sao 1 file ở folder: `examples/simple-app/main.c` có thể `#include "larod.h"` => 1 file ở folder `lib/`

=> vì vậy mình đã tìm hiểu qua 1 chút, và sau khi search, mình đang hiểu đây chính là do việc tổ chức project c/c++. Mình thấy để tổ chức project c/c++ có 1 số cách:
- dùng visual studio (chưa tìm hiểu, do thấy larod đang dùng meson)
- dùng cmake (meson mục đích tương tự cmake, và larod dùng meson)


## Note
Các thông tin mình note trong file này tại thời điểm này chỉ giúp mình hình dung đc về cách tổ chức project, library. Để thực hành mình fai search và tìm hiểu thêm.

# Tổ chức project
- cách các file link vs nhau: https://daynhauhoc.com/t/lam-quen-voi-cach-viet-chuong-trinh-c-tren-nhieu-file/74161

- static library => library sẽ theo cùng chương trình (https://daynhauhoc.com/t/tao-va-su-dung-thu-vien-lien-ket-tinh-trong-c/74432)

- dynamic library/ shared object (shared library) => library sẽ ko theo cùng ctrinh, mà trong file dll/so (có vẻ tương tự c# trước đây): https://daynhauhoc.com/t/tao-va-su-dung-thu-vien-lien-ket-dong-trong-c-tren-windows/74583

- https://cppdeveloper.com/c-nang-cao/phan-biet-static-libraries-va-shared-libaries/

- https://cppdeveloper.com/c-nang-cao/the-c-compilation-process/

# Hdan CMake
- bài viết hdan cmake từ đơn giản đến các trường hợp thực tế hơn => https://viblo.asia/p/dao-dau-voi-cmake-thong-qua-vi-du-07LKXNbelV4 + [source](https://github.com/derekmolloy/exploringBB/tree/master/extras/cmake/student)
- 1 vd khác: https://kipalog.com/posts/CMake---Cong-cu-sinh-Makefile--Project-file-cho-source-code-C-C-

# Hdan meson basic
https://germandiagogomez.medium.com/getting-started-with-meson-build-system-and-c-83270f444bee

# Note
- sử dụng library C trong C++ => fai thêm extern "C" vào header file (https://cppdeveloper.com/c-nang-cao/su-dung-c-library-trong-c/)

- mình thấy file header thường dùng khai báo hàm, biến,... (chỉ khai báo, ko define hàm)  => sau đó define hàm ở file .c/.cpp => khi compile sẽ đc linking (linker) vs nhau?