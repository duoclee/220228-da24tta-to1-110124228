#include <stdio.h>
int main()
{
	int n,S,P;
	do
	// Nhap vao so nguyen n
	{
	printf ("Nhap vao so nguyen n: "); scanf("%d", &n);
	}
	while (n<=0);
	int i=1;
	while (i<=n)
	{
		S += i;
		P *=i;
		i++;

	}
	printf ("S(%d)= %d\n",n,S);
	printf ("P(%d)= %d\n",n,P);
	return 0; 
}

