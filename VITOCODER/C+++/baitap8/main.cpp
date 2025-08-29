#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 100
struct QLXe
{
    char Bangso[MAX];
    char HangSx[MAX];
    int NamSx;
    float GiaTien;
};

void NhapXe(QLXe &xe);
void NhapDs(QLXe a[], int n);
void XuatXe(QLXe xe);
void XuatDs(QLXe a[], int n);
void Lk(QLXe a[], int n);
int TimSlxe(QLXe a[], int n, char Hsx[]);
float Tongtien(QLXe a[], int n);
void SxTheobienso(QLXe a[], int n);
int main ()
{
    QLXe a[MAX];
    int n;
    do {
        printf("Danh sach co bao nhieu xe: ");
        scanf("%d", &n);
    } while(n <= 0);

    NhapDs(a, n);

    printf("\nDanh sach cac xe vua nhap: \n");
    XuatDs(a, n);

    printf("\nCac xe san xuat truoc 2010: ");
    Lk(a, n);
    
    fflush(stdin);
    char Hsx[MAX];
    printf("\nNhap vao hang san xuat can tim so luong xe: ");
    gets(Hsx);
    int sl = TimSlxe(a, n, Hsx);
    if (sl == 0)
        printf("-> khong co xe nao tu hang %s trong danh sach \n", Hsx);
    else 
        printf("-> co %d xe duoc tim thay tu hang %s trong danh sach \n", sl, Hsx);
    
    float t = Tongtien(a, n);
    printf("\nTong tien cac xe trong danh sach: %.2f", t);

    printf("sap xep xe: ");
    SxTheobienso(a, n);
    XuatDs(a, n);
    return 0;
}

void NhapXe(QLXe &xe)
{
    int nsx;
    float t;
    fflush(stdin);
    printf("\n-> Bien so xe: "); gets(xe.Bangso);
    printf("-> Hang san xuat: "); gets(xe.HangSx);
    printf("-> Nam san xuat: "); scanf("%d", &nsx);
    xe.NamSx = nsx;
    printf("-> Gia tien: "); scanf("%f", &t);
    xe.GiaTien = t;   

}

void NhapDs(QLXe a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n Nhap vao xe thu %d", i +1);
        NhapXe(a[i]);
    }
}

void XuatXe(QLXe xe)
{
    printf("\n Bang so: %s", xe.Bangso);
    printf("\t Hang san xuat: %s ", xe.HangSx);
    printf("\t Nam san xuat: %d", xe.NamSx);
    printf("\t Gia tien: %.2f", xe.GiaTien);
    printf("\n");
}

void XuatDs(QLXe a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        XuatXe(a[i]);
    }
    printf("\n");
}

void Lk(QLXe a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i].NamSx < 2010)
        XuatXe(a[i]);
    }
        printf("\n");
}

int TimSlxe(QLXe a[], int n, char Hsx[])
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if(strcmp(Hsx, a[i].HangSx) == 0)
        dem ++;
    }
    return dem;
}

float Tongtien(QLXe a[], int n)
{
    float t = 0.0;
    for (int i = 0; i < n; i++)
        t += a[i].GiaTien;
    return t;
}

void SxTheobienso(QLXe a[], int n)
{
    int i, j;
    for ( i = 0; i < n-1; i++)
        for ( j = i + 1; j < n; j++)
            if(strcmp(a[i].Bangso, a[j].Bangso) > 0);
                {
                    QLXe temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
}