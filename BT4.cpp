#include <stdio.h>

int main() 
{
    int soLuong;             
    float donGia, chiPhiVanChuyen, doanhThu; 
    printf("Nhap so luong hang: ");
    scanf("%d", &soLuong);
    printf("Nhap don gia: ");
    scanf("%f", &donGia);
    printf("Nhap chi phi van chuyen: ");
    scanf("%f", &chiPhiVanChuyen);
    doanhThu = soLuong * donGia - chiPhiVanChuyen;
    printf("Doanh thu trong ngay la: %.2f\n", doanhThu);
    return 0;
}
