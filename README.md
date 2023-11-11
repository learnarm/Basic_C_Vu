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

>size: 1 byte

- Định nghĩa "uint8_t" trong thư viện "stdint.h"

>typedef unsigned char		uint8_t;

unsigned: số dương.

unit8_t là kiểu số nguyên dương.

Kích thước 1 byte = 8 bit ~ phạm vi [0-255].

VD: 
```c
#include <stdio.h>
#include <stdint.h>

uint8_t var; // 8 bit = 1 byte ~ 2^8 = 256  0-255


int main() {
  var = 256;
  printf("size: %lu byte\n", sizeof(var));

  printf("var = %d\n", var);
  return 0;
}
```
- Ta thấy kết quả:

>lesson_1.c:8:9: warning: large integer implicitly truncated to unsigned type [-Woverflow]
   var = 256;
         ^~~
size: 1 byte
var = 0