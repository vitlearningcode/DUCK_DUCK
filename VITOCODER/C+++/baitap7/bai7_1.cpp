#include <stdio.h>
#include <math.h>
struct PhanSo
{
    int TuSo;
    int MauSo;
};
void NhapPhanSo(PhanSo &ps)
{
    int t, m;
    printf("Nhap tu so: ");
    scanf("%d", &t);

   do
    {
        printf("nhap mau so: ");
        scanf("%d", &m);
    }  while (m == 0);
    ps.TuSo = t;
    ps.MauSo = m;
}

void XuatPhanSo(PhanSo ps)
{
    printf("(%d/%d) \n", ps.TuSo, ps.MauSo);
}

void ChuanHoaPs(PhanSo &ps)
{
    
    int ts = ps.TuSo;
    int ms = ps.MauSo;
    if (ts*ms < 0)
    {
        if(ms < 0)
        {
            ps.TuSo = ts*(-1);
            ps.MauSo = abs(ms);
        }
    }

    if (ts*ms > 0)
    {
        if (ts < 0)
        {
            ps.TuSo = abs(ts);
            ps.MauSo = abs(ms);
        }
    }
}

int Ucln(int x, int y)
{
    int a = abs(x);
    int b = abs(y);
    if (b ==  0) return a;
    return Ucln(b, a % b);
}

void RutGonPhanSo(PhanSo &ps)
{
    PhanSo rg;
	int k = Ucln(ps.TuSo, ps.MauSo);
	rg.TuSo = ps.TuSo/k;
	rg.MauSo = ps.MauSo/k;
	ps = rg; 
}

PhanSo TongPS(PhanSo ps1, PhanSo ps2)
{
    PhanSo t;
    int pt1 = ps1.TuSo;
    int pm1 = ps1.MauSo;
    int pt2 = ps2.TuSo;
    int pm2 = ps2.MauSo;

    t.TuSo = pt1*pm2+pm1*pt1;
    t.MauSo = pm1*pm2;
    return t;
}

PhanSo HieuPS(PhanSo ps1, PhanSo ps2)
{
    PhanSo t;
    int pt1 = ps1.TuSo;
    int pm1 = ps1.MauSo;
    int pt2 = ps2.TuSo;
    int pm2 = ps2.MauSo;

    t.TuSo = pt1*pm2-pm1*pt1;
    t.MauSo = pm1*pm2;
    return t;
}

PhanSo TichPs(PhanSo ps1, PhanSo ps2)
{
    PhanSo t;
    t.TuSo = ps1.TuSo*ps2.TuSo;
    t.MauSo = ps1.MauSo*ps2.MauSo;
    return t;
}

PhanSo ThuongPs(PhanSo ps1, PhanSo ps2)
{
    PhanSo t;
    t.TuSo = ps1.TuSo*ps2.MauSo;
    t.MauSo = ps1.MauSo*ps2.TuSo;
    return t;
}

int main()
{
    PhanSo ps1, ps2;
    int pt1 = ps1.TuSo;
    int pm1 = ps1.MauSo;
    int pt2 = ps2.TuSo;
    int pm2 = ps2.MauSo;

    printf("nhap phan so thu nhat: \n");
    NhapPhanSo(ps1);
    printf("\n nhap phan so thu 2: \n");
    NhapPhanSo(ps2);
    printf("\n hai phan so vua nhap: \n");
    XuatPhanSo(ps1);
    XuatPhanSo(ps2);

    printf("\n hai phan so sau khi da chuan hoa: \n");
    ChuanHoaPs(ps1);
    ChuanHoaPs(ps2);
    XuatPhanSo(ps1);
    XuatPhanSo(ps2);

    printf("\n hai phan so sau khi dax rut gon: \n");
    RutGonPhanSo(ps1);
    RutGonPhanSo(ps2);
    XuatPhanSo(ps1);
    XuatPhanSo(ps2);

    printf("\n tong hai phan so: \n");
    PhanSo t = TongPS(ps1, ps2);
    RutGonPhanSo(t);
    XuatPhanSo(t);

    printf("\n hieu hai phan so: \n");
    PhanSo hieu = HieuPS(ps1, ps2);
    RutGonPhanSo(hieu);
    XuatPhanSo(hieu);

    printf("\n tich hai phan so: \n");
    PhanSo Tich = TichPs(ps1, ps2);
    RutGonPhanSo(Tich);
    XuatPhanSo(Tich);

    printf("\n Thuong hai phan so: \n");
    PhanSo Thuong = ThuongPs(ps1, ps2);
    RutGonPhanSo(Thuong);
    XuatPhanSo(Thuong);
    return 0;
}