#include <stdio.h>
#include <stdlib.h>
struct Sinhvien
{
    char MS[8];
    char Ten[24];
    int Tuoi;
    float DiemTB;
};

void Xuat(Sinhvien sv);
void XuatDs(Sinhvien a[], int n);
int Sophantu(FILE *f);
void DocND(Sinhvien a[], int n, FILE *f);

int main ()
{
    Sinhvien *a;
    int n;
    FILE *f;
    char str[64];
    printf("Ten tep tin: ");
    fflush(stdin);
    gets(str);
    f = fopen(str, "rb");
    if (f != NULL)
    {
        n = Sophantu(f);
        a = (Sinhvien*)calloc(n, sizeof(Sinhvien));
        DocND(a, n, f);
        printf("Noi dung tap tin: \n");
        XuatDs(a, n);
        fclose(f);
    }
    return 0;
}

void Xuat(Sinhvien sv)
{
    printf("%s \t %s \t %d \t %.2f \n", sv.MS, sv.Ten, sv.Tuoi, sv.DiemTB);
}

void XuatDs(Sinhvien a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        Xuat(a[i]);
    }
}

int Sophantu(FILE *f)
{
    int n;
    fread(&n, sizeof(int), 1, f);
    return n;
}

void DocND(Sinhvien a[], int n, FILE *f)
{
    fread(a, sizeof(Sinhvien), n, f);
}