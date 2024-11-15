#include <stdio.h>
int main()
{
	int n;
	do
	{
		printf("\n Nhao vao so nguyen duong n:"); scanf("%d", &n);
	}
	while (n<=1||n>=10);
	printf("\n Bang cuu chuong cua n la:");
	for (int i=1; i<=10; i++)
	{
		printf("\n%d x %d = %d ", n, i, n*i);
	
	}
	printf("\n Bang cuu chuong tu 2 den 9 la:");
	for(int i=2; i<=9; i++);
	{
		for (int j=1; j<=10; j++)
		{
			printf("\n%d x%d = %d",i, j,i*j);
		}
		printf("\n");
		return 0;
}
