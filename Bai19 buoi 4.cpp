#include <stdio.h>
#define SIZE 100

void nhapMang(int A[], int n);
void xuatMang(int A[], int n);
int tongMang(int A[], int n);
int tongDuong(int A[], int n);
int tongLe(int A[], int n);
int soPhanTuAm(int A[], int n);
int soPhanTuLe(int A[], int n);
int soNguyenTo(int A[], int n);
int soNguyenToDauTien(int A[], int n);
void soDuongLe(int A[], int n);
int kiemtranguyento(int n);
int tonTaiSoAm(int A[], int n);
int main() {
    int A[SIZE];
    int n, kq;

    do {
        printf("\nNhap vao so phan tu: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    nhapMang(A, n);
    printf("\nCac phan tu trong mang la: ");
    xuatMang(A, n);

    kq = tongMang(A, n);
    printf("\nTong mang: %d", kq);

    printf("\nTong cac so duong trong mang: %d", tongDuong(A, n));
    printf("\nTong cac phan tu tai vi tri le: %d", tongLe(A, n));
    printf("\nSo phan tu am trong mang: %d", soPhanTuAm(A, n));
    printf("\nSo phan tu le: %d", soPhanTuLe(A, n));
    printf("\nSo nguyen to trong mang: %d", soNguyenTo(A, n));
    printf("\nSo nguyen to dau tien: %d", soNguyenToDauTien(A, n));
    printf("\nCac so duong le: ");
    soDuongLe(A, n);
    

    return 0;
}

int tongMang(int A[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += A[i];
    }
    return tong;
}

void xuatMang(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%8d", A[i]);
    }
}

void nhapMang(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap gia tri tai vi tri %d: ", i);
        scanf("%d", &A[i]);
    }
}

int tongDuong(int A[], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0) {
            tong += A[i];
        }
    }
    return tong;
}

int tongLe(int A[], int n) {
    int tong = 0;
    for (int i = 1; i < n; i += 2) {
        tong += A[i];
    }
    return tong;
}

int soPhanTuAm(int A[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            dem++;
        }
    }
    return dem;
}

int soPhanTuLe(int A[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) {
            dem++;
        }
    }
    return dem;
}

int kiemtranguyento(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int soNguyenTo(int A[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (kiemtranguyento(A[i]) == 1) {
            dem++;
        }
    }
    return dem;
}

int soNguyenToDauTien(int A[], int n) {
    for (int i = 0; i < n; i++) {
        if (kiemtranguyento(A[i]) == 1) {
            return A[i];
        }
    }
    return -1; 
}

void soDuongLe(int A[], int n) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0 && A[i] % 2 != 0) {
            printf("%d ", A[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Khongo ton tai so duong le.");
    }
    printf("\n");
}
