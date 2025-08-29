
#include <stdio.h>

#include <math.h>
#include <string.h>
struct Qli
{
    char MS[16];
    char Hoten[32];
    int sp;
    char XepLoai[10];
    float Luong;

};

void NhapDS(Qli a[], int n);
void XepLoai(Qli a[], int n);
void Luong(Qli a[], int n);
void XuatDS(Qli a[], int n);
void LietKe_NVXS(Qli a[], int n);
float TongTB_Luong(Qli a[], int n);
void Tim_Hoten(Qli a[], int n);
int TimNV(Qli a[], int n);

int main ()
{
	Qli a[100];
	int n;
	
	do{
		printf("Nhap so thanh vien trong danh sach: ");
		scanf("%d", &n);
	} while (n <= 0);
	
	NhapDS(a, n);
	XepLoai(a, n);
	Luong(a, n);
	XuatDS(a, n);
	LietKe_NVXS(a, n);
	float k = TongTB_Luong(a, n);
	printf("\n tong so luong cac nhan vien: %.3f", k);
    return 0;
}

void NhapDS(Qli a[], int n)
{
    for (int i = 0; i < n; i++)
    {
    	fflush(stdin);
        printf("\n-> nhap vao Ma So: "); gets(a[i].MS);
        printf("\n-> Nhap vao Ho Ten: "); gets(a[i].Hoten);
        printf("\n-> Nhap vao so San Pham: "); scanf("%d", &a[i].sp);
    }
    printf("\n");
}

void XepLoai(Qli a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].sp >= 100)
        {
            strcpy(a[i].XepLoai, "Xuat Sac");
        } else if (a[i].sp >= 80)
            {
               strcpy(a[i].XepLoai, "Tot");         
            } else if (a[i].sp >= 60)
                {
                    strcpy(a[i].XepLoai, "Dat");
                } else
                    {
                        strcpy(a[i].XepLoai, "Chua Dat");
                    }
    }
    printf("\n");
}

void Luong(Qli a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        a[i].Luong = a[i].sp * 10000;
    }
}

void XuatDS(Qli a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nMa so Nhan vien: %s", a[i].MS);
        printf("\nHo ten Nhan vien: %s", a[i].Hoten);
        printf("\nSo san pham cua Nhan vien: %d", a[i].sp);
        printf("\nLuong Nhan vien: %.3f", a[i].Luong);
        printf("\nXep loai Nhan vien: %s", a[i].XepLoai);
    }
    printf("\n");
}

void LietKe_NVXS(Qli a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].XepLoai, "Xuat Sac") == 0)
        {    printf("\nMa so Nhan vien: %s", a[i].MS);
            printf("\nHo ten Nhan vien: %s", a[i].Hoten);
            printf("\nSo san pham cua Nhan vien: %d", a[i].sp);
            printf("\nLuong Nhan vien: %.3f", a[i].Luong);
            printf("\nXep loai Nhan vien: %s", a[i].XepLoai);
        
    }
    printf("\n");
}

float TongTB_Luong(Qli a[], int n)
{
    float tb = 0.0;
    for (int i = 0; i < n; i++)
    {
        tb += a[i].Luong;
    }
    return tb/n;
}
//void Tim_Hoten(Qli a[], int n);int TimNV(Qli a[], int n;);

