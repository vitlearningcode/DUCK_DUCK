#include <stdio.h>
#include <string.h> 
#define MAX 50
struct QLXe 
{
	char Bangso[MAX];
	char Hangsx[MAX];
	int Namsx;
	float Giatien; 
};

void Nhapxe(QLXe &xe);
void NhapMang(QLXe a[], int n);
void XuatXe(QLXe xe);
void XuatMang(QLXe a[], int n);
void Lk_Xe_Sx_2010(QLXe a[], int n);
int Sl_XeHangSx(QLXe a[], int n, char hsx[MAX]);
float TongGiaTien(QLXe a[], int n);
void Sx_Theo_Bangso(QLXe a[], int n);

int main ()
{
	QLXe mangxe[MAX];
	char hsx[MAX]; 
	int n;
	do{
		printf(" Danh sach co ban nhieu xe: ");
		scanf("%d", &n); 
	} while(n <= 0);
	NhapMang(mangxe, n);
	
	printf("\n Danh sach xe vua nhap: ");
	XuatMang(mangxe, n);
	
	printf("\n Nhung xe duoc san xuat truoc nam 2010: ");
	Lk_Xe_Sx_2010(mangxe, n);
	
	fflush(stdin);
	printf("\n Nhap hang xe can dem so luong: ");  gets(hsx);

    int l = Sl_XeHangSx(mangxe, n, hsx);
	if(l == 0)
		printf("\n Khong co xe cua hang %s trong danh sach", hsx); 
	else 
		printf("\n Co %d xe cua cua hang %s trong danh sach", Sl_XeHangSx(mangxe, n, hsx), hsx); 
	
	
	printf("\n Tong gia tien cac xe trong danh sach: %0.1f\n", TongGiaTien(mangxe, n));
	
	printf("\n Danh sach xe duoc sap xep theo bang so: ");
	Sx_Theo_Bangso(mangxe, n);
	XuatMang(mangxe, n); 
	return 0; 	
} 


void Nhapxe(QLXe &xe)
{
	int nsx;
	float t;
	fflush(stdin); 
	printf("\n Nhap bang so: ");  gets(xe.Bangso);
	printf("\n Nhap hang san xuat: ");  gets(xe.Hangsx);
	printf("\n Nhap nam san xuat: "); scanf("%d", &nsx);
	xe.Namsx = nsx;
	printf("\n Nhap gia tien: ");  scanf("%f", &t);
	xe.Giatien = t; 
}

void NhapMang(QLXe a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("\n Nhap thong tin xe thu %d \n", i + 1);
	    Nhapxe(a[i]); 
    } 
	
}

void XuatXe(QLXe xe)
{
	printf("\n Bang so: %s", xe.Bangso);
	printf("\t - Hang san xuat: %s", xe.Hangsx);
	printf("\t - Nam san xuat: %4d", xe.Namsx);
	printf("\t - Gia tien: %0.2f", xe.Giatien); 
}

void XuatMang(QLXe a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		XuatXe(a[i]);
	}
	printf("\n"); 
}

void Lk_Xe_Sx_2010(QLXe a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i].Namsx < 2010)
		{
			XuatXe(a[i]); 
		} 
	}
	printf("\n"); 
}

int Sl_XeHangSx(QLXe a[], int n, char hsx[MAX])
{
	int d = 0;
	for(int i = 0; i < n; i++)
	{
		if(strcmp(hsx,a[i].Hangsx) == 0)
		{
			d++; 
		} 
    }
    return d; 
}

float TongGiaTien(QLXe a[], int n)
{
	float tgt = 0.0;
	for(int i = 0; i < n; i++)
	{
		tgt = tgt + a[i].Giatien; 
	}
	return tgt; 
}

void Sx_Theo_Bangso(QLXe a[], int n)
{
	QLXe t;
	for(int i = 0; i < n - 1; i ++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(strcmp(a[i].Bangso, a[j].Bangso) > 0)
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t; 
			} 
		} 
	} 
} 
