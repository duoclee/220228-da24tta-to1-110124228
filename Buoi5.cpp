#include <stdio.h>
#define SIZE 100
void nhapMang(float A[], int n);
void xuatMang(float A[], int n);
float tinhTong( float A[], int n);
int main() {
    float A[SIZE];
    int n;
    do {
        printf("Nhap so phan tu n (0 < n <= %d): ", SIZE);
        scanf("%d", &n);
    } while (n <= 0 || n > SIZE);
    nhapMang(A, n);
    printf("Mang da nhap: ");
    xuatMang(A, n);
    printf("Tinh tong: %.2f", tinhTong(A, n));

}
void nhapMang(float A[], int n) 
{
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%f", &A[i]);
    }
}
void xuatMang(float A[], int n) {
    printf("\nMang da nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%f ", A[i]);
    }
    printf("\n");
}
float tinhTong(float A[], int n)
{
	float sum=0;
	for (int i =0; i<n; i++)
	{
		sum += A[i];
	}
	return sum;
}

    

