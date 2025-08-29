#include <stdio.h>
#include <math.h>

struct Phanso
{
    int tuso;
    int mauso;
};
void NhapPs(Phanso &ps);
void XuatPs(Phanso ps);
void Chuan_Hoa_Ps(Phanso &ps);
int Ucln(int a, int b);
void Rut_Gon_Ps(Phanso &ps);
Phanso TongPs(Phanso ps1, Phanso ps2);
Phanso HieuPs(Phanso ps1, Phanso ps2);
Phanso TichPs(Phanso ps1, Phanso ps2);
Phanso ThuongPs(Phanso ps1, Phanso ps2);

int main ()
{
    Phanso ps1, ps2;
    printf("Nhap vao Phan so thu 1: \n"); 
    NhapPs(ps1);
    printf("\nNhap vao Phan so thu 2: \n");
    NhapPs(ps2);

    printf("\nHai phan so vua nhap la: \n");
    XuatPs(ps1);
    XuatPs(ps2);

    printf("\nHai phan so sau khi chuan hoa: \n");
    Chuan_Hoa_Ps(ps1);
    Chuan_Hoa_Ps(ps2);
    XuatPs(ps1);
    XuatPs(ps2);
    
    printf("\nHai phan so sau khi da rut gon: \n");
    Rut_Gon_Ps(ps1);
    Rut_Gon_Ps(ps2);
    XuatPs(ps1);
    XuatPs(ps2);

    Phanso Tong = TongPs(ps1, ps2);
    printf("\nTong hai Phan so: \n");
    Rut_Gon_Ps(Tong);
    XuatPs(Tong);

    Phanso Hieu = HieuPs(ps1, ps2);
    printf("\nHieu hai Phan so: \n");
    Rut_Gon_Ps(Hieu);
    XuatPs(Hieu);

    Phanso Tich = TichPs(ps1, ps2);
    printf("\nTich hai Phan so: \n");
    Rut_Gon_Ps(Tich);
    XuatPs(Tich);

    Phanso Thuong = ThuongPs(ps1, ps2);
    printf("\nThuong hai Phan so: \n");
    Rut_Gon_Ps(Thuong);
    XuatPs(Thuong);
    return 0;
}

void NhapPs(Phanso &ps)
{
    printf("-> Nhap vao tu so: "); scanf("%d", &ps.tuso);
    do{
        printf("-> Nhap vao mau so (ms > 0): ");
        scanf("%d", &ps.mauso);
    }while (ps.mauso == 0);
}

void XuatPs(Phanso ps)
{
    printf("Phan so vua nhap: %d/%d \n", ps.tuso, ps.mauso);
}

void Chuan_Hoa_Ps(Phanso &ps)
{
    int ts = ps.tuso;
    int ms = ps.mauso;
    if (ts * ms > 0)
    {
        if (ts < 0)
        {
            ps.tuso = abs(ts);
            ps.mauso = abs(ms);
        }
    }

    if (ts * ms < 0)
    {
        if (ms < 0)
        {
            ps.tuso =  ts *(-1);
            ps.mauso = abs(ms);
        }
    }
}

int Ucln(int x, int y)
{
    int a = abs(x);
    int b = abs(y);
    if (b == 0) return a;
    return Ucln(b, a % b);
}
void Rut_Gon_Ps(Phanso &ps)
{
    int k = Ucln(ps.tuso, ps.mauso);
    ps.tuso /= k;
    ps.mauso /= k;
}

Phanso TongPs(Phanso ps1, Phanso ps2)
{
    Phanso Tong;
    Tong.tuso = ps1.tuso*ps2.mauso + ps2.tuso*ps1.mauso;
    Tong.mauso = ps1.mauso * ps2.mauso;
    return Tong;    
}
Phanso HieuPs(Phanso ps1, Phanso ps2)
{
    Phanso Hieu;
    Hieu.tuso = ps1.tuso*ps2.mauso - ps2.tuso*ps1.mauso;
    Hieu.mauso = ps1.mauso * ps2.mauso;
    return Hieu;
}

Phanso TichPs(Phanso ps1, Phanso ps2)
{
    Phanso Tich;
    Tich.tuso = ps1.tuso * ps2.tuso;
    Tich.mauso = ps1.mauso * ps2.mauso;
    return Tich;
}

Phanso ThuongPs(Phanso ps1, Phanso ps2)
{
    Phanso Thuong;
    Thuong.tuso = ps1.tuso*ps2.mauso;
    Thuong.mauso = ps1.mauso * ps2.tuso;
    return Thuong;
}