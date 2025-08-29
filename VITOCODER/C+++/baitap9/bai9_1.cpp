#include <stdio.h>
#include <math.h>
#define MAX 100

struct QlNvien
{
    char MSNV[MAX];
    char Hoten[MAX];
    int spp;
    char Xeploai[MAX];
    float Luong;
};

void Nhap(QlNvien &nv);
void Nhapds(QlNvien a[], int n);

void XepLoai(QlNvien a[], int n);
void Luong(QlNvien a[], int n);
void LietkeNVXS(QlNvien a[], int n);
float LuongTB(QlNvien a[], int n);
void Xuat(QlNvien nv);
void XuatDs(QlNvien a[], int n);

int main ()
{

}

void Nhap(QlNvien &nv)
{   int sp;
    fflush(stdin);
    printf("- Nhap Ma So Nhan Vien: "); gets(nv.MSNV);
    printf("- Nhap Ho va ten: "); gets(nv.Hoten);
    printf("- Nhap So san pham: "); scanf("%d ", &sp);
    nv.spp = sp;
}

void Nhapds(QlNvien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n Nhap vao Nhan vien thu %d: \n", i+1);
        Nhap(a[i]);
    }
}

void Nhapds(QlNvien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i].spp >= 100)
            strcpy(a[i].Xeploai, "Xuat Sac");
        else
            if(a[i].spp >= 80);
                strcpy(a[i].Xeploai, "Tot");
            else
                if(a[i].spp >= 60)
                    strcpy(a[i].XepLoai, "Dat");
                else
                    strcpy(a[i].XepLoai, "Chua Dat");       
    }
}

void Luong(QlNvien a[], int n)
{ 
    for (int i = 0; i < n; i++)
    {
        a[i].Luong = a[i].spp * 10000;
    }
}

void Xuat(QlNvien nv)
{
    printf("\n- Ma So Nhan Vien: %s", nv.MSNV);
    printf(" - Ho va ten: %s", nv.Hoten);
    printf(" - So san pham: %sd", nv.spp);
    printf(" - Luong: %.3f", nv.Luong);
    printf(" - Xep loai: %s", nv.Xeploai);
}

void XuatDs(QlNvien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
        printf("\n");
    }
}

void LietkeNVXS(QlNvien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i].Xeploai, "Xuat Sac") == 0)
            Xuat(a[i]);
    }
    printf("\n");
}

float LuongTB(QlNvien a[], int n)
{
    float tb=0.0;
    for (int i = 0; i < n; i++)
    {
        tb += a[i].Luong;
    }
    return tb/n;
}
