// Tran huu Nhat
// B24DTCN260 
#include <stdio.h>

// Ham tinh dien tich hinh thang
double tinhDienTichHinhThang(double a, double b, double h) {
    return (a + b) * h / 2.0;
}

int main() {
    double dayLon, dayNho, chieuCao, dienTich;

    // Nhap du lieu tu nguoi dung
    printf("Nhap do dai day lon (a): ");
    scanf("%lf", &dayLon);

    printf("Nhap do dai day nho (b): ");
    scanf("%lf", &dayNho);

    printf("Nhap chieu cao (h): ");
    scanf("%lf", &chieuCao);

    // Goi ham tinh dien tich
    dienTich = tinhDienTichHinhThang(dayLon, dayNho, chieuCao);

    // In ket qua
    printf("Dien tich hinh thang la: %.2lf\n", dienTich);

    return 0;
}

