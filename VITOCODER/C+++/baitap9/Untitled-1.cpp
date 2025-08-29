#include <stdio.h> 
#include <string.h> 
#define MAX 100

struct Nhanvien
{
	char MSNV[MAX];
	char Hovatennv[MAX];
	int Sosp;
	char Xeploai[MAX];
	float Luong; 
};

void NhapNV(Nhanvien &nv);
void NhapMang(Nhanvien a[], int n);
void XepLoaiMang(Nhanvien a[], int n);
void TinhLuongMang(Nhanvien a[], int n);
void XuatNV(Nhanvien nv);
void XuatMang(Nhanvien a[], int n);
void Lk_Xeploai_Xuatsac(Nhanvien a[], int n);
void Tim_Nhanvien(Nhanvien a[], int n, char htnvct[MAX]);
void Tim_Sl_Sanpham(Nhanvien a[], int n, int slspct);
void Sx_Theo_Hoten(Nhanvien a[], int n);
float TBC_Luong(Nhanvien a[], int n);

int main ()
{
	Nhanvien a[MAX]; int n;
	do{
		printf(" Danh sach co bao nhieu nhan vien: ");  scanf("%d", &n);
	}while(n <= 0);
	NhapMang(a, n);
	XepLoaiMang(a, n);
	TinhLuongMang(a, n);
	
	printf("\n Danh sach nhan vien vua nhap: ");
	XuatMang(a, n);
	printf("\n");
	printf("\n Nhung nhan vien xep loai xuat sac: ");
	Lk_Xeploai_Xuatsac(a, n);
	printf("\n");
	printf("\n Trung binh cong luong cua cac nhan vien: %0.2f", TBC_Luong(a, n));
	char htnvct[MAX];
	printf("\n");
	fflush(stdin);
	printf("\n Nhap ho ten can tim: ");
	gets(htnvct);
	Tim_Nhanvien(a, n, htnvct);
	int slspct;
	printf("\n");
	printf("\n Nhap so luong san pham can tim: ");
	scanf("%d", &slspct);
	Tim_Sl_Sanpham(a, n, slspct);
	printf("\n");
	printf("\n Danh sach sap xep tang dan theo ho ten: ");
	Sx_Theo_Hoten(a, n);
	XuatMang(a, n); 
	return 0; 	
} 

void NhapNV(Nhanvien &nv)
{
	fflush(stdin);
	printf("->Nhap ma so nhan vien: ");  gets(nv.MSNV);
	printf("->Nhap ho va ten nhan vien: ");  gets(nv.Hovatennv);
	int sp;
	printf("->Nhap so san pham: ");  scanf("%d", &sp);  nv.Sosp = sp;
}

void NhapMang(Nhanvien a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("\n Nhap thong tin nhan vien thu %d: \n", i + 1);
		NhapNV(a[i]); 
	}
}

void XepLoaiMang(Nhanvien a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i].Sosp >= 100)

			strcpy(a[i].Xeploai, "Xuat sac");
		else
		    if(a[i].Sosp >= 80)
		    	strcpy(a[i].Xeploai, "Tot");
			else
			    if(a[i].Sosp >= 60)

					strcpy(a[i].Xeploai, "Dat");

				else
				    strcpy(a[i].Xeploai, "Chua dat");
	}
}

void TinhLuongMang(Nhanvien a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		a[i].Luong = a[i].Sosp*10000;
	}
}

void XuatNV(Nhanvien nv)
{
	printf("\n Ma so nhan vien: %s", nv.MSNV);
	printf(" - Ho va ten nhan vien: %s", nv.Hovatennv);
	printf(" - So san pham: %d", nv.Sosp);
	printf(" - Xep loai: %s", nv.Xeploai);
	printf(" - Luong: %0.2f", nv.Luong);
}

void XuatMang(Nhanvien a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		XuatNV(a[i]);
	}
}

void Lk_Xeploai_Xuatsac(Nhanvien a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(strcmp(a[i].Xeploai, "Xuat sac") == 0)
		{
			XuatNV(a[i]);
		}
	}
	printf("\n");
}

float TBC_Luong(Nhanvien a[], int n)
{
	float tg = 0.0;
	for(int i = 0; i < n; i++)
	{
		tg = tg + a[i].Luong;
	}
	return tg/n;
}

void Tim_Nhanvien(Nhanvien a[], int n, char htnvct[MAX])
{
	int d = 0;
	for(int i = 0; i < n; i++)
	{
		if(strcmp(htnvct, a[i].Hovatennv) == 0)
		{
			XuatNV(a[i]);
			d++;
		}
	}
	if(d==0)
		printf("\n Khong co nhan vien co ho va ten %s can tim", htnvct);
	else
	    printf("\n Co %d nhan vien co ho va ten %s trong danh sach", d, htnvct);
}

void Tim_Sl_Sanpham(Nhanvien a[], int n, int slspct)
{
	int d = 0;
	for(int i = 0; i < n; i++)
	{
		if(slspct <= a[i].Sosp)
		{
			d++;
		}
	}
	if(d == 0)
		printf("\n Khong co nhan vien co so luong san pham tu %d tro len", slspct);
	else
		printf("\n Co %d nhan vien co so luong san pham tu %d tro len", d, slspct);
}

void Sx_Theo_Hoten(Nhanvien a[], int n)
{
	Nhanvien t;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(strcmp(a[i].Hovatennv, a[j].Hovatennv) > 0)
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

