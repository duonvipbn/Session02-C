#include <stdio.h>

int main() {
    int chieuDaiHinhChuNhat = 10;
    int chieuRongHinhChuNhat = 20;
    int pHinhChuNhat = (chieuDaiHinhChuNhat + chieuRongHinhChuNhat) * 2;
    int sHinhChuNhat = chieuDaiHinhChuNhat * chieuRongHinhChuNhat;
    printf("chu vi hinh chu nhat: %d\nDien tich hinh chu nhat: %d", pHinhChuNhat, sHinhChuNhat);
    return 0;
}
