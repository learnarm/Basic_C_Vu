#include <stdio.h>
#include <stdint.h>
int test(){
    return 5;
}

int var = 5;

void hienThi(uint16_t id, char* ten, uint8_t tuoi){

    printf("ID: %d, TEN: %s, TUOI: %d\n", id, ten, tuoi);

}
int main() {
    
    // printf("ID: 1001, TEN: HOANG, TUOI: 19\n");
    // printf("ID: 1001, TEN: TUAN, TUOI: 14\n");
    // printf("ID: 1001, TEN: QUAN, TUOI: 148\n");
    // printf("ID: 1001, TEN: NAM, TUOI: 17\n");
    hienThi(1000, "Hoang", 19);
    return 0;
}


// int32_t var; // 8 bit = 1 byte

// int main() {
//   var = 256;
//   printf("size: %lu byte\n", sizeof(var));

//   printf("var = %d\n", var);
//   return 0;
// }