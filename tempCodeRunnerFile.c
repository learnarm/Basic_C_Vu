void hinhTamGiacVuong(int canhGocVuong1, int canhGocVuong2){
    for(int i=0; i< canhGocVuong1; i++){
        for(int j=0; canhGocVuong2*j < (canhGocVuong2*(i+1)); j++){
            if (i == 0 || i == (canhGocVuong1 - 1) || j == 0 || j == (canhGocVuong2 - 1) || canhGocVuong1*j == (canhGocVuong2*(i ))){
                printf("*  ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }
}