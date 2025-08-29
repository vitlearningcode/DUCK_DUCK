#include <stdio.h>
#define  MAX 100
#include <string.h>

struct Quanli
{
	char ms[MAX];
	char hoten[MAX];
	float diemtoan;
	float diemvan;
	char kq[MAX];	
};

void Nhap(Quanli &sv);
void NhapDs(Quanli a[], int n);
void Xuat(Quanli sv);
void XuatDs(Quanli a[], int n);
float TBD(Quanli &sv);
void CapNhatKQ(Quanli a[], int n);
float TongTb(Quanli a[], int n);
void Hv(Quanli &x, Quanli &y);
void sapxep(Quanli a[], int n);


int main ()
{
	Quanli sinhvien[MAX];
	int n;
	do {
		printf("Nhap vao so luong thi sinh: ");
		scanf("%d", &n);
	} while ( n <= 0);
	
	NhapDs(sinhvien, n);
	CapNhatKQ(sinhvien, n);
	XuatDs(sinhvien, n);
	float tb = TongTb(sinhvien, n);
	printf("\n tong chung: %.2f", tb);
	printf("\n");
	printf("\n danh sach sau khi sap xep theo ho ten: \n");
	sapxep(sinhvien, n);
	XuatDs(sinhvien, n);
	
	return 0;
	
}

void Nhap(Quanli &sv)
{
	fflush(stdin);
	printf("\n Nhap vao MS: "); gets(sv.ms);
	printf(" Nhap vao Hoten: "); gets(sv.hoten);
	printf(" Nhap vao diemtoan: "); scanf("%f", &sv.diemtoan);
	printf(" Nhap vao diemvan: "); scanf("%f", &sv.diemvan);
}

void NhapDs(Quanli a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nNhap vao thi sinh thu %d: ", i+1);
		Nhap(a[i]);
	}
}

void Xuat(Quanli sv)
{
	printf("\n MSSV:  %-10s", sv.ms);
	printf("\n Ho ten:  %-8", sv.hoten);
	printf("\n Diem toan: %.2f", sv.diemtoan);
	printf("\n Diem van:  %3.2f", sv.diemvan);
	printf("\n Ket qua: %-7", sv.kq);
}

void XuatDs(Quanli a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		Xuat(a[i]);
		printf("\n");
	}
}

float TBD(Quanli &sv)
{
	float tb = (sv.diemtoan + sv.diemvan) / 2.0;
	return tb;
}

float TongTb(Quanli a[], int n)
{	float tong = 0.0;
	for (int i = 0; i < n; i++)
	{
		tong += TBD(a[i]);
	}
	return tong/n;
}

void CapNhatKQ(Quanli a[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		if(TBD(a[i]) >= 9)
			strcpy(a[i].kq, "XS");
		else
			if(TBD(a[i]) >= 7)
				strcpy(a[i].kq, "Kha");
			else
				if(TBD(a[i]) >= 5)
					strcpy(a[i].kq, "TB");
				else
						strcpy(a[i].kq, "Yeu");
	}
}

void sapxep(Quanli a[], int n)
{
	Quanli t;
	for (int i = 0; i < n -1; i++)
	{
		for (int j = i +1; j < n; j++)
		{
			if(strcmp(a[i].hoten, a[j].hoten) > 0)
			{
				 t = a[i];
				 a[i] = a[j];
				 a[j] = t;
			}
		}
	}
}

