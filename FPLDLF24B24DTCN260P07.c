// Tran huu Nhat
// B24DTCN260 
#include <stdio.h>

// Ham tinh tong cac so duong trong mang
double tinhTongSoDuong(double arr[], int n) {
    double tong = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            tong += arr[i];
        }
    }
    return tong;
}

int main() {
    int n;

    // Nhap so phan tu cua mang
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    double arr[n];

    // Nhap cac phan tu cua mang
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }

    // Goi ham de tinh cac so duong
    double tong = tinhTongSoDuong(arr, n);

    // In ket qua
    printf("Tong cac so duong trong mang la: %.2lf\n", tong);

    return 0;
}

