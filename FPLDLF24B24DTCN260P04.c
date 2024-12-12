// Tran huu Nhat
// B24DTCN260 
#include <stdio.h>
#include <math.h>

int main() {
    // Khai bao bien
    double u, theta, g = 9.8, h;

    // Nhap gia tri tu nguoi dung
    printf("Nhap van toc ban dau (u) (m/s): ");
    scanf("%lf", &u);

    printf("Nhap goc ban dau (theta) (do): ");
    scanf("%lf", &theta);

    // Chuyen goc tu do sang radian
    double theta_rad = theta * M_PI / 180.0;

    // Tinh bieu thuc
    h = (u * u * pow(sin(theta_rad), 2)) / (2 * g);

    // In ket qua
    printf("Gia tri cua h la: %.2lf m\n", h);

    return 0;
}

