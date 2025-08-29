#include <stdio.h>
#include <math.h>
struct Phanso
{
	int Tuso;
	int Mauso;
};
void NhapPS(Phanso &ps)
{
	int t, m;
	printf("\n Nhap tu so: ");
	scanf("%d", &t);
	do{
		printf("\n Nhap mau so: ");
		scanf("%d", &m); 
	}while (m == 0);
	ps.Tuso = t;
	ps.Mauso = m; 
}
void XuatPS(Phanso ps)
{
	printf("(%d/%d) \n", ps.Tuso, ps.Mauso);
}
void ChuanHoaPS(Phanso &ps)
{
	int ts = ps.Tuso;
	int ms = ps.Mauso;
	if (ts*ms < 0)
	{
		if (ms < 0)
		{
			ps.Tuso = ts*(-1);
			ps.Mauso = abs(ms); 
		} 
	}
	if (ts*ms > 0)
	{
		if (ts < 0)
		{
			ps.Tuso = abs(ts);
			ps.Mauso = abs(ms); 
		} 
	}
}
int Ucln(int x, int y)
{
	int a = abs(x);
	int b = abs(y);
	int ucln;
	for (int i = 1; i <= a || i <= b; i++)
	{
		if (a%i == 0 && b%i == 0)
		{
			ucln = i; 
		} 
	}
	return ucln; 
}
void RutgonPS(Phanso &ps)
{
	Phanso t;
	int k = Ucln(ps.Tuso, ps.Mauso);
	t.Tuso = ps.Tuso/k;
	t.Mauso = ps.Mauso/k;
	ps = t; 
}
Phanso TongPS(Phanso ps1, Phanso ps2)
{
	Phanso t;
	t.Tuso = ps1.Tuso*ps2.Mauso+ps1.Mauso*ps2.Tuso;
	t.Mauso = ps1.Mauso*ps2.Mauso;
	return t; 
}
Phanso HieuPS(Phanso ps1, Phanso ps2)
{
	Phanso h;
	h.Tuso = ps1.Tuso*ps2.Mauso-ps1.Mauso*ps2.Tuso;
	h.Mauso = ps1.Mauso*ps2.Mauso;
	return h;
}
Phanso TichPS(Phanso ps1, Phanso ps2)
{
	Phanso t;
	t.Tuso = ps1.Tuso*ps2.Tuso;
	t.Mauso = ps1.Mauso*ps2.Mauso;
	return t;
}
Phanso ThuongPS(Phanso ps1, Phanso ps2)
{
	Phanso t;
	t.Tuso = ps1.Tuso*ps2.Mauso;
	t.Mauso = ps1.Mauso*ps2.Tuso;
	return t; 
}
int main ()
{
	Phanso ps1, ps2;
	printf("\n--------------------------");
	printf("\n Nhap phan so thu 1: \n");
	NhapPS(ps1);
	printf("\n Nhap phan so thu 2: \n");
	NhapPS(ps2);
	
	printf("\n--------------------------");
	printf("\n Hai phan so vua nhap: \n");
	XuatPS(ps1);
	XuatPS(ps2);
	
	printf("\n--------------------------");
	printf("\n Hai phan so sau khi chuan hoa: \n");
	ChuanHoaPS(ps1);
	ChuanHoaPS(ps2);
	XuatPS(ps1);
	XuatPS(ps2);
	 
	printf("\n--------------------------");
	printf("\n Hai phan so sau khi rut gon: \n");
	RutgonPS(ps1);
	RutgonPS(ps2);
	XuatPS(ps1);
	XuatPS(ps2);
	
	printf("\n--------------------------");
	printf("\n Tong hai phan so: \n");
	Phanso psTong = TongPS(ps1, ps2);
	RutgonPS(psTong);
	XuatPS(psTong);
	
	printf("\n--------------------------");
	printf("\n Hieu hai phan so: \n");
	Phanso psHieu = HieuPS(ps1, ps2);
	RutgonPS(psHieu);
	XuatPS(psHieu);
	
	printf("\n--------------------------");
	printf("\n Tich hai phan so: \n");
	Phanso psTich = TichPS(ps1, ps2);
	RutgonPS(psTich);
	XuatPS(psTich);
	
	printf("\n--------------------------");
	printf("\n Thuong hai phan so: \n");
	Phanso psThuong = ThuongPS(ps1, ps2);
	ChuanHoaPS(psThuong); 
	RutgonPS(psThuong);
	XuatPS(psThuong);  
	return 0; 
}
