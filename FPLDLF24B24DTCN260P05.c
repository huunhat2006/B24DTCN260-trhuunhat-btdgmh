// Tran huu Nhat
// B24DTCN260 
#include <stdio.h>

int main() {
    // Khai bao bien
    double a, b, h, S;

    // Nhap du lieu tu nguoi dung
    printf("Nhap do dai day lon (a): ");
    scanf("%lf", &a);

    printf("Nhap do dai day nho (b): ");
    scanf("%lf", &b);

    printf("Nhap chieu cao (h): ");
    scanf("%lf", &h);

    // Tinh dien tich
    S = (a + b) * h / 2;

    // In ket qua
    printf("Dien tich hinh thang la: %.2lf\n", S);

    return 0;
}

