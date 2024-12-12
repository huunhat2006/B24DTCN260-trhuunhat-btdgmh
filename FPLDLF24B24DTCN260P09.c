// Tran huu Nhat
// B24DTCN260 
#include <stdio.h>
#include <string.h>


struct Sach {
    char tenSach[100];
    char tacGia[100];
    int namXuatBan;
    double giaBan;
};

void nhapThongTinSach(struct Sach *s) {
    printf("Nhap ten sach: ");
    fgets(s->tenSach, sizeof(s->tenSach), stdin);
    s->tenSach[strcspn(s->tenSach, "\n")] = '\0';  

    printf("Nhap ten tac gia: ");
    fgets(s->tacGia, sizeof(s->tacGia), stdin);
    s->tacGia[strcspn(s->tacGia, "\n")] = '\0';  

    printf("Nhap nam xuat ban: ");
    scanf("%d", &s->namXuatBan);

    printf("Nhap gia ban: ");
    scanf("%lf", &s->giaBan);

    while (getchar() != '\n');
}

void inThongTinSach(struct Sach s) {
    printf("Ten sach: %s | Tac gia: %s | Nam: %d | Gia: %.2lf VND\n",
           s.tenSach, s.tacGia, s.namXuatBan, s.giaBan);
}

void inDanhSachSach(struct Sach arr[], int n) {
    printf("\nDanh sach cac cuon sach:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. ", i + 1);
        inThongTinSach(arr[i]);
    }
}

void sapXepTheoGia(struct Sach arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].giaBan > arr[j].giaBan) {
                struct Sach temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int timSachGiaLonHon(struct Sach arr[], int n, double giaMin) {
    for (int i = 0; i < n; i++) {
        if (arr[i].giaBan > giaMin) {
            return 1;  
        }
    }
    return 0; 
}

int main() {
    int n;

    printf("Nhap so luong sach: ");
    scanf("%d", &n);
    while (getchar() != '\n');  

    struct Sach arr[n];

    for (int i = 0; i < n; i++) {
        printf("\nNhap thong tin cuon sach thu %d:\n", i + 1);
        nhapThongTinSach(&arr[i]);
    }


    printf("\nDanh sach truoc khi sap xep:");
    inDanhSachSach(arr, n);

    sapXepTheoGia(arr, n);
    printf("\nDanh sach sau khi sap xep theo gia ban:");
    inDanhSachSach(arr, n);

    if (timSachGiaLonHon(arr, n, 100000)) {
        printf("\nCo it nhat mot cuon sach co gia lon hon 100,000 VND.\n");
    } else {
        printf("\nKhong co cuon sach nao co gia lon hon 100,000 VND.\n");
    }

    return 0;
}

