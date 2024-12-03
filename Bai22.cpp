#include <stdio.h>
#include <stdlib.h>
void nhapMang(int*p, int n);
void xuatMang(int*p, int n);
int tongMang(int*p, int n);
int giaTriLonNhat(int*p, int n);
int demGiaTriLonNhat(int*p, int n);
int demGiaTriX(int*p, int n, int x);
int kiemTraSoDuong(int*p, int n);
void sapXepMang(int*p, int n);
void locSoAm(int*p, int n);
int main() 
{
    int n;
    printf("Nhap so luong gia tri n (n < 50): ");
    scanf("%d", &n);
    if (n <= 0 || n >= 50) 
	{
        printf("Nhap n sai, vui long nhap n > 0 va n < 50.\n");
        return 1;
    }
    int*p = (int*)malloc(n * sizeof(int));
    if (p == NULL) 
	{
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }
    nhapMang(p, n);
    printf("Danh sach da nhap: ");
    xuatMang(p, n);
    printf("Tong cac gia tri trong mang: %d\n", tongMang(p, n));
    printf("Gia tri lon nhat trong mang: %d\n", giaTriLonNhat(p, n));
    printf("So lan xuat hien gia tri lon nhat: %d\n", demGiaTriLonNhat(p, n));
    int x;
    printf("Nhap gia tri x de dem so lan xuat hien: "); scanf("%d", &x);
    printf("So lan xuat hien cua %d: %d\n", x, demGiaTriX(p, n, x));
    if (kiemTraSoDuong(p, n)) 
	{
        printf("Trong mang co ton tai so duong.\n");
    } 
	else 
	{
        printf("Trong mang khong co so duong.\n");
    }

    sapXepMang(p, n);
    printf("Mang sau khi sap xep: ");
    xuatMang(p, n);
    locSoAm(p, n);
    free(p);
    return 0;
}
void nhapMang(int*p, int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("Nhap gia tri p[%d]: ", i);
        scanf("%d", &p[i]);
    }
}
void xuatMang(int*p, int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("%d ", p[i]);
    }
    printf("\n");
}
int tongMang(int*p, int n) 
{
    int tong = 0;
    for (int i = 0; i < n; i++) 
	{
        tong += p[i];
    }
    return tong;
}
int giaTriLonNhat(int*p, int n) 
{
    int lonNhat = p[0];
    for (int i = 1; i < n; i++) 
	{
        if (p[i] > lonNhat) 
		{
            lonNhat = p[i];
        }
    }
    return lonNhat;
}
int demGiaTriLonNhat(int*p, int n) 
{
    int lonNhat = giaTriLonNhat(p, n);
    int dem = 0;
    for (int i = 0; i < n; i++) 
	{
        if (p[i] == lonNhat) {
            dem++;
        }
    }
    return dem;
}
int demGiaTriX(int*p, int n, int x) 
{
    int dem = 0;
    for (int i = 0; i < n; i++) 
	{
        if (p[i] == x) 
		{
            dem++;
        }
    }
    return dem;
}
int kiemTraSoDuong(int*p, int n) 
{
    for (int i = 0; i < n; i++) 
	{
        if (p[i] > 0) {
            return 1; 
        }
    }
    return 0; 
}
void sapXepMang(int*p, int n) 
{
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = i + 1; j < n; j++) 
		{
            if (p[i] > p[j]) 
			{
                int sX = p[i];
                p[i] = p[j];
                p[j] = sX;
            }
        }
    }
}
void locSoAm(int*p, int n) 
{
    printf("Danh sach cac so am: ");
    for (int i = 0; i < n; i++) 
	{
        if (p[i] < 0) 
		{
            printf("%d ", p[i]);
        }
    }
    printf("\n");
}
