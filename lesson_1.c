#include <stdio.h>
#include <stdint.h>

uint8_t var; // 8 bit = 1 byte


int main() {
  
  printf("size: %lu byte", sizeof(var));
  return 0;
}