#include<string.h>
#include<stdio.h>
#include<stdlib.h>
struct DATE
{
	int ngay,thang,nam;
};
struct SP
{
	char ma[10],ten[10];
	float gia;
	DATE ngaysx;
};

void nhapSP(SP *a);
void xuatSP(SP *a);
void nhapDSSP(SP *a,int n);
void xuatDSSP(SP *a,int n);
int kma(SP *a,int n,char *ma);
void kten(SP *a,int n,char *ten);
void nhapDATE(DATE *b);
void xuatDATE(DATE *b);
void sapxepSP(SP *a,int n);

int main()
{
	//Khai bao bien
	int n;
	char k[10];
	SP *a;
	
	//Xu ly
	printf("\nmoi nhap so luong san pham: ");
	scanf("%d",&n);
	
	a= (SP*)malloc(n*sizeof(SP));
		
	nhapDSSP(a,n);

	xuatDSSP(a,n);
	
	printf("\n\nMoi nhap ma san pham de tui kiem san pham cho ma xem: ");
	fflush(stdin);
	scanf("%s",k);
	int kq = kma(a,n,k);
	if(kq==-1)
	{
		printf("\nMa san pham \'%s\' khong ton tai", k);
	}
	else
	{
		printf("\nThong tin chi tiet san pham co ma \'%s\'", k);
		xuatSP(a+kq);
	}
		
	
	printf("\n\nmMoi nhap ten san pham de tui in ra man hinh cho de xem: ");
	fflush(stdin);
	gets(k);
	
	kten(a,n,k);
	
	
	sapxepSP(a,n);
	
	return 0;
}

void nhapSP(SP *a)
{
	printf("\nMoi nhap ten san pham: ");
	fflush(stdin);
	gets(a->ten);
	
	printf("\nMoi nhap ma so san pham:");
	fflush(stdin);
	scanf("%s",a->ma);
	
	printf("\nMoi nhap gia san pham: ");
	scanf("%f",&a->gia);
	
	printf("\nMoi nhap ngay san xuat: ");
	nhapDATE(&a->ngaysx);
}
void xuatSP(SP *a)
{
	printf("\n%s\t %s\t %.3f \t",a->ten,a->ma,a->gia);
	xuatDATE(&a->ngaysx);
	printf("\n");
}

void sapxepSP(SP *a,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<=n-1;j++)
		if((a+i)->gia<(a+j)->gia)
		{
			SP t=*(a+i);
			*(a+i)=*(a+j);
			*(a+j)=t;
		}
	}
	xuatDSSP(a,n);
}
void xuatDATE(DATE *b)
{
	printf("%d/%d/%d",b->ngay,b->thang,b->nam);
}
void nhapDATE(DATE *b)
{
	printf("\nNhap nam: ");
	scanf("%d",&b->nam);
	
	printf("\nNhap thang: ");
	scanf("%d",&b->thang);
	if(b->thang<0||b->thang>12)
	{
		do{
			printf("\nNhap thang: ");
			scanf("%d",&b->thang);
		}while(b->thang<0||b->thang>12);
	}
	printf("\nNhap ngay: ");
	scanf("%d",&b->ngay);
	if(b->thang==1||b->thang==3||b->thang==7||b->thang==8||b->thang==10||b->thang==12)
	{
		if(b->ngay<0||b->ngay>31)
		{
			do{
				printf("\n Xin moi nhap lai ngay: ");
				scanf("%d",&b->ngay);
			}while(b->ngay<0||b->ngay>31);
		}
	}
	if(b->thang==4||b->thang==6||b->thang==9||b->thang==11)
	{
		if(b->ngay<0||b->ngay>30)
		{
			do{
				printf("\n Xin moi nhap lai ngay: ");
				scanf("%d",&b->ngay);
			}while(b->ngay<0||b->ngay>30);
		}
	}
	if(b->thang==2)
	{
		if(b->ngay<0||b->ngay>28)
		{
			do{
				printf("\n xin moi nhap lai: ");
				scanf("%d",&b->ngay);
			}while(b->ngay<0||b->ngay>28);
		}
	}

}
void kten(SP *a,int n,char *ten)
{	
	int found = 0;
	for(int i=0;i<n; i++)
	{
		if(strstr((a+i)->ten,ten)!=NULL)
		{
			xuatSP(a+i);
			found = 1;
			printf("\n");
		}
	}
	if(found==0)
		printf("\nKhong ton tai!");
}
int kma(SP *a,int n,char *ma)
{
	for(int i=0;i<n;i++)
	{
		if(strcmp((a+i)->ma,ma)==0)
		{
			return i;
		}
	}
	return -1;
}
void xuatDSSP(SP *a,int n)
{
	for(int i=0;i<n;i++)
	{
		xuatSP(a+i);
		printf("\n");
	}
}
void nhapDSSP(SP *a,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nNhap san pham tai vi tri %d: \n", i);
		nhapSP(a+i);
	}
}

