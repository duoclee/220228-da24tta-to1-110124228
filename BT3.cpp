#include <stdio.h>
#define PI 3.1415

int main() 
{
    // Khai bao
    float dayLon = 50.0, dayBe = 23.0, chieuCao = 30.0; // Chi so hinh thang
    float C = 12.56; // Chu vi cua hinh tron
    float dienTichHinhThang, dienTichHinhTron, dienTichConLai;
    dienTichHinhThang = (dayLon + dayBe) * chieuCao / 2;
    dienTichHinhTron = (C * C) / (4 * PI);
    dienTichConLai = dienTichHinhThang - dienTichHinhTron;
    printf("Dien tich san truong con lai là: %.2f m^2\n", dienTichConLai);
    return 0;
}
