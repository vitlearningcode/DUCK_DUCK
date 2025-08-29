#include <stdio.h>
#include <math.h>

struct  Phanso
{
    int Tuso;
    int Mauso;
};
void NhapPs(Phanso &ps);
void XuatPs(Phanso ps);
void ChuanHoaPs(Phanso &ps);
int UCLN(int a, int b);
void RutgonPs(Phanso &ps);
Phanso TonghaiPs(Phanso ps1, Phanso ps2);
int main ()
{
    Phanso a[100];
    int n;
    do {
        printf("nhap vao so luong phan so cho danh sach: ");
        scanf("%d", &n);
    } while (n <= 0);

    Phanso ps1, ps2;

    NhapDS(a, n);
    printf("\n xuat phan so: \n");
    XuatDS(a, n);
    printf("\n hai ps sau khi chuan hoa: \n");
    ChuanHoaDS(a, n);
    XuatDS(a, n);

    printf("\n hai ps sau khi rut gon: \n");
    RutgonDS(a, n);
    XuatDS(a, n);

    printf("\n tong hai ps la: \n");
    Phanso tong = TongDS(a, n);
    RutgonPs(tong);
    XuatPs(tong);
    return 0;
}

void NhapPs(Phanso &ps)
{
    int t, m;
    printf("Nhap vao tu so: ");
    scanf("%d", &t);

    do {
        printf("nhap vao mau so: ");
        scanf("%d", &m);
    } while (m == 0);

    ps.Tuso = t;
    ps.Mauso = m;
}

void NhapDS(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        NhapPs(a[i]);
    }
}

void XuatPs(Phanso ps)
{
    printf("(%d/%d) \t", ps.Tuso, ps.Mauso);
}

void XuatDS(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        XuatPs(a[i]);
    }
}

void ChuanHoaPs(Phanso &ps)
{
    int t = ps.Tuso;
    int m = ps.Mauso;
    if (t * m < 0)
    {
        ps.Tuso = t * (-1);
        ps.Mauso = abs(m);
    }

    if (t * m > 0)
    {
        if ( t < 0)
        {
            ps.Tuso = abs(t);
            ps.Mauso = abs(m);
        }
    }
}

void ChuanHoaDS(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        ChuanHoaPs(a[i]);
    }
}

int UCLN(int x, int y)
{
    int a = abs(x);
    int b = abs(y);
    if (b == 0) return a;
    return UCLN(b, a % b);
}

void RutgonPs(Phanso &ps)
{
    Phanso rg;
    int k = UCLN(ps.Tuso, ps.Mauso);
    rg.Tuso = ps.Tuso /k;
    rg.Mauso = ps.Mauso /k;
    ps =rg ;
}

void RutgonDS(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        RutgonPs(a[i]);
    }
}

Phanso TonghaiPs(Phanso ps1, Phanso ps2)
{
    Phanso tong;
    int t1 = ps1.Tuso;
    int m1 = ps1.Mauso;
    int t2 = ps2.Tuso;
    int m2 = ps2.Mauso;

    tong.Tuso = t1*m2 + t2*m1;
    tong.Mauso = m1*m2;
    return tong;
}

Phanso TongDS (int a[], int n)
{
    Phanso tong;
    tong.Tuso = 0;
    tong.Mauso = 1;
    for (int i = 0; i < n; i++)
    {
        TonghaiPs(a[i]);
    }
    return tong;
}