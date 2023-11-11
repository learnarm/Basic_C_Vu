#include <stdio.h>
#include <stdint.h>

int8_t var; // 8 bit = 1 byte


int main() {
  var = 256;
  printf("size: %lu byte\n", sizeof(var));

  printf("var = %d\n", var);
  return 0;
}