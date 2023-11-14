#include <stdio.h>
#include <stdint.h>

#define HINH_CHU_NHAT 1
#define HINH_VUONG 2
#define HINH_TAM_GIAC_VUONG 3

void hinhChuNhat(int chieuDai, int chieuRong);

void hinhVuong(int canh);

void hinhTamGiacVuong(int chieuCao, int chieuRong);

int main()
{
    // float a = 0;

    // int test = 0;
    // if (a >= 8.0)
    // {
    //     printf("HOC SINH GIOI\n");
    // }else if (a >= 6.5)
    // {
    //     printf("HOC SINH KHÁ\n");
    // }else if (a >= 5.0)
    // {
    //     printf("HOC SINH TRUNG BINH\n");
    // }else
    // {
    //     printf("HOC SINH YEU\n");
    // }
    
    // if (test)
    // {
    //     printf("True\n");
    // }else
    // {
    //     printf("False\n");
    // }
    
    int stype, chieuDai, chieuRong, canh, canhGocVuong1, canhGocVuong2 = 0;
    
    printf("1. Hinh chu nhat.\n2. Hinh vuong.\n3. Hinh tam giac can.\n");
    printf("Vui long chon loai hinh: \n");
    scanf("%d", &stype);
    switch (stype)
    {
    case HINH_CHU_NHAT:
        printf("Ban chon Hinh chu nhat, vui long nhap: \n");
        printf("Chieu dai (cot): ");
        scanf("%d", &chieuDai);
        printf("Chieu rong (hang): ");
        scanf("%d", &chieuRong);
        hinhChuNhat(chieuDai, chieuRong);
        break;
    
    case HINH_VUONG:
        printf("Ban chon Hinh vuong, vui long nhap: \n");
        printf("Canh: ");
        scanf("%d", &canh);
        hinhVuong(canh);
        break;
    
    case HINH_TAM_GIAC_VUONG:
        printf("Ban chon Hinh tam giac vuong, vui long nhap: \n");
        printf("Canh goc vuong 1: ");
        scanf("%d", &canhGocVuong1);
        printf("Canh goc vuong 2: ");
        scanf("%d", &canhGocVuong2);
        hinhTamGiacVuong(canhGocVuong1, canhGocVuong2);
        break;
    
    default:
        printf("Lưa chon khong ton tai.\n");
        break;
    }
    return 0;

}

void hinhChuNhat(int chieuDai, int chieuRong){
    for(int i=0; i<chieuDai; i++){
        for(int j=0; j<chieuRong; j++){
            if (i == 0 || i == (chieuDai-1) || j == 0 || j == (chieuRong -1)){
                printf("*  ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}

void hinhVuong(int canh){
for(int i=0; i<canh; i++){
        for(int j=0; j<canh; j++){
            if (i == 0 || i == (canh - 1) || j == 0 || j == (canh - 1)){
                printf("*  ");
            }else{
                printf("   ");
            }            
        }
        printf("\n");
    }
}

void hinhTamGiacVuong(int canhGocVuong1, int canhGocVuong2){
    for(int i=1 ; i<= canhGocVuong1; i++){
        for(int j=1; j <= (int)(canhGocVuong2*(i)/canhGocVuong1); j++){
            if (i == 1 || i == (canhGocVuong1) || j == 1 || j == (canhGocVuong2 ) || j == (canhGocVuong2*(i))/canhGocVuong1){
                printf("*  ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}
// void hinhTamGiacVuong(int canhGocVuong1, int canhGocVuong2){
//     for(int i=1; i<= canhGocVuong1; i++){
//         printf("*");
//         for(int j=2; canhGocVuong1*j <= (canhGocVuong2*(i)); j++){
//             // if (i == 0 || i == (canhGocVuong1 - 1) || j == 0 || j == (canhGocVuong2 - 1) || j == (canhGocVuong2*(i )/canhGocVuong1)){
//             //     printf("*  ");
//             // }else{
//             //     printf("   ");
//             // }
//             if(i==canhGocVuong1)printf("*");
//             else{
//             if(j*canhGocVuong1==canhGocVuong2*(i)&&i!=1)printf("*");
//             else printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }