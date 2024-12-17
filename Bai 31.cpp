#include "stdio.h"
#include "stdlib.h"
int main ()
{
	float *a;
	int m, i;
	FILE *fp;
	char path[50];
	printf("\nNhap duong dan:");
	fflush(stdin);
	gets(path);
	fp=fopen(path, "rt");
	if(fp=NULL)
	{
		printf("\nLoi mo file");
	}
	else
	{
		fscanf(fp,"%d", &m);
		a=(float*)malloc(sizeof(float)*m);
		for(i=0; i<m; i++)
		{
			fscanf(fp,"%f",a+i);
		}
		printf("\nDanh sach ca so thuc vua doc: ");
		for(i=0; i<m; i++)
		{
			printf("%5.lf",*(a+i));
		}
		fclose(fp);
	}
	return 0;
}

