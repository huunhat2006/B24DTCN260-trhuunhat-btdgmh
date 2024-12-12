// Tran huu Nhat
// B24DTCN260 
#include <stdio.h>
#include <string.h>

// dinh nghia ban ghi thong tin cuoon sach
struct Sach {
    char tenSach[100];
    char tacGia[100];
    int namXuatBan;
    double giaBan;
};

// Ham nhap thong tin cuon sach
void nhapThongTinSach(struct Sach *s) {
    printf("Nhap ten sach: ");
    fgets(s->tenSach, sizeof(s->tenSach), stdin);
    s->tenSach[strcspn(s->tenSach, "\n")] = '\0';  // Lo?i b? ký t? xu?ng dòng
    
    printf("Nhap ten tac gia: ");
    fgets(s->tacGia, sizeof(s->tacGia), stdin);
    s->tacGia[strcspn(s->tacGia, "\n")] = '\0';  // Lo?i b? ký t? xu?ng dòng

    printf("Nhap nam xuat ban: ");
    scanf("%d", &s->namXuatBan);

    printf("Nhap gia ban: ");
    scanf("%lf", &s->giaBan);

    // Xoa bo dem ban phim
    while (getchar() != '\n');
}

// Ham in thong tin sach
void inThongTinSach(struct Sach s) {
    printf("\nThong tin cuon sach:\n");
    printf("Ten sach: %s\n", s.tenSach);
    printf("Tac gia: %s\n", s.tacGia);
    printf("Nam xuat ban: %d\n", s.namXuatBan);
    printf("Gia ban: %.2lf VND\n", s.giaBan);
}

int main() {
    struct Sach sach;

    // Nhap va in thong tin sach
    nhapThongTinSach(&sach);
    inThongTinSach(sach);

    return 0;
}

