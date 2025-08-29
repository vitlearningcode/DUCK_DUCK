#include <stdio.h>
#include <stdlib.h>
struct Sinhvien
{
    char MS[8];
    char Ten[24];
    int Tuoi;
    float DiemTB;
};

void Nhap(Sinhvien &sv);
void NhapDs(Sinhvien a[], int n);
void GhiND(Sinhvien a[], int n, FILE *f);

int main()
{
    Sinhvien *a;
    int n;
    FILE *f;
    char str[64];
    printf("So phan tu: "); scanf("%d", &n);
    a = (Sinhvien*)calloc(n, sizeof(Sinhvien));
    NhapDs(a, n);
    printf("Ten tep tin: ");
    fflush(stdin);
    gets(str);
    f = fopen(str, "wb");
    if (f != NULL)
    {
        GhiND(a, n, f);
        printf("Ghi xong noi dung tep tin\n");
        fclose(f);
    }
    return 0;
}

void Nhap(Sinhvien &sv)
{
    fflush(stdin);
    printf("MS: "); gets(sv.MS);
    printf("Ten: "); gets(sv.Ten);
    printf("Tuoi: "); scanf("%d", &sv.Tuoi);
    printf("Diem: "); scanf("%d", sv.DiemTB);
}

void NhapDs(Sinhvien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Nhap(a[i]);
    }
}

void GhiND(Sinhvien a[], int n, FILE *f)
{
    fwrite(&n, sizeof(n), 1, f);
    fwrite(a, sizeof(Sinhvien), n, f);
}