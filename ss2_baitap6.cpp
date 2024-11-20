#include <stdio.h>

int main() {
    const float pi = 3.14;
    float rHinhTron = 20;
    double pHinhTron = 2 * rHinhTron * pi;
    double sHinhTron = rHinhTron * rHinhTron * pi;
    printf("chu vi hinh tron: %d\nDien tich hinh tron: %d", pHinhTron, sHinhTron);
    return 0;
}
