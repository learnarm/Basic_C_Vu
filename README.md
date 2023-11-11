# **Basic_C_Vu**
## **Lesson 1: Biến**
- Các biến nguyên thủy: float, double....
- Trong ngành Nhúng ta sử dụng thư viện "stdint" để định nghĩa lại.
- Thư viện "stdio.h" giao tiếp với màn hình console.
- Để xác định kích thước của biến ta dùng hàm sizeof(). Lưu ý đối kích thước ta truyền với kiểu %lu.
```c
#include <stdio.h>
#include <stdint.h>
uint8_t var; 
int main() {
    printf("size: %lu byte", sizeof(var));
    return 0;
}
```
- Ta thấy kết quả: 

    size: 1 byte

- **Giải thích:** 

Định nghĩa "uint8_t":

    typedef unsigned char	uint8_t;

unsigned: số dương.

unit8_t là kiểu số nguyên dương.

Kích thước 1 byte = 8 bit ~ phạm vi [0-255].
