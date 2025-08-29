#include <stdio.h>
#include <math.h>
#define MAX 50

struct Phanso
{
	int TuSo;
	int MauSo;
};
void NhapPS(Phanso &ps);
void NhapMang(Phanso a[], int n);
void XuatPS(Phanso ps);
void XuatMang(Phanso a[], int n);
void ChuanHoaPS(Phanso &ps);
void ChuanHoa_Cac_PS(Phanso a[], int n);
int USCLN(int x, int y);
void RutGonPS(Phanso &ps);
void RutGon_Cac_PS(Phanso a[], int n);
Phanso TongPS(Phanso ps1, Phanso ps2);
Phanso Tong_Cac_PS(Phanso a[], int n);
float GiaTriPS(Phanso ps);
Phanso PS_Co_GT_Nhonhat(Phanso a[], int n);
void Sx_Tang_GiatriPS(Phanso a[], int n);


int main ()
{
	Phanso a[MAX];
	int n;
	
	do{
		printf(" Danh sach cac phan so: "); 
		scanf("%d", &n);
	} while(n <= 0);
	
	NhapMang(a, n);

	printf(" Danh sach phan so vua nhap: \n");
	XuatMang(a, n); 

	ChuanHoa_Cac_PS(a, n);
	printf("\n Cac phan so sau khi chuan hoa: \n");
	XuatMang(a, n);

	RutGon_Cac_PS(a, n);
	printf("\n Cac phan so sau khi rut gon: \n");
	XuatMang(a, n);

	printf("\n Tong cac phan so: \n");
	Phanso t = Tong_Cac_PS(a, n);
	RutGonPS(t);
	XuatPS(t);

	if(n > 0)
	{
		printf("\n Phan so co gia tri nho nhat: \n");
		XuatPS(PS_Co_GT_Nhonhat(a, n)); 
	}
	
	printf("\n Cac phan so sau khi sap xep tang theo gia tri: \n");
	Sx_Tang_GiatriPS(a, n);
	XuatMang(a, n); 
	 
	return 0; 
} 

void NhapPS(Phanso &ps)
{
	int t, m;
	printf("\n Nhap tu so: ");  scanf("%d", &t);
	do{
		printf(" Nhap mau so: ");  scanf("%d", &m);
	}while(m == 0);
	ps.TuSo = t;
	ps.MauSo = m;
}

void NhapMang(Phanso a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf(" Nhap phan so thu %d: ", i + 1);
		NhapPS(a[i]);
	}
}

void XuatPS(Phanso ps)
{
	printf("(%d/%d)", ps.TuSo, ps.MauSo);
}

void XuatMang(Phanso a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		XuatPS(a[i]);
		printf("\t "); 
	}
}

void ChuanHoaPS(Phanso &ps)
{
	int ts = ps.TuSo;
	int ms = ps.MauSo;
	if(ts*ms < 0)
	{
		if(ms < 0)
		{
			ps.TuSo = ts*(-1);
			ps.MauSo = abs(ms); 
		}
	}
	if (ts*ms > 0)
	{
		if(ms < 0)
		{
			ps.TuSo = abs(ts);
			ps.MauSo = abs(ms); 
		} 
	} 
}

void ChuanHoa_Cac_PS(Phanso a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		ChuanHoaPS(a[i]); 
	} 
}

int USCLN(int x, int y)
{
	int a = abs(x);
	int b = abs(y);
	int ucln; 
	for(int i = 1; i <= a|| i <= b; i++)
	{
		if(a%i == 0 && b%i == 0)
		{
			ucln = i; 
		} 
	}
	return ucln; 
}

void RutGonPS(Phanso &ps)
{
	Phanso t; 
	int k = USCLN(ps.TuSo, ps.MauSo);
	t.TuSo = ps.TuSo/k;
	t.MauSo = ps.MauSo/k;
	ps = t; 
}

void RutGon_Cac_PS(Phanso a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		RutGonPS(a[i]);
	} 
}

Phanso TongPS(Phanso ps1, Phanso ps2)
{
	Phanso t;
	t.TuSo = ps1.TuSo*ps2.MauSo+ps1.MauSo*ps2.TuSo;
	t.MauSo = ps1.MauSo*ps2.MauSo;
	return t; 
}

Phanso Tong_Cac_PS(Phanso a[], int n)
{
	Phanso tg;
	tg.TuSo = 0;
	tg.MauSo = 1;
	for(int i = 0; i < n; i++)
	{
		tg = TongPS(tg, a[i]); 
	}
	return tg; 
}

float GiaTriPS(Phanso ps)
{
	float gtr;
	gtr = ps.TuSo/ps.MauSo;
	return gtr; 
}

Phanso PS_Co_GT_Nhonhat(Phanso a[], int n)
{
	Phanso t = a[0];
	float gt = GiaTriPS(a[0]);
	for(int i = 0; i < n; i++)
	{
		if(GiaTriPS(a[i]) < gt)
		{
			gt = GiaTriPS(a[i]);
			t = a[i]; 
		} 
	}
	return t; 
}

void Sx_Tang_GiatriPS(Phanso a[], int n)
{
	Phanso t;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++) 
		{
			if(GiaTriPS(a[i]) > GiaTriPS(a[j])) 
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t; 
			}
		} 
	} 
} 
