#include <stdio.h>
#include <math.h>
#define Pi 3.14
struct Ellipse
{
	float x, y, R1, R2, ChuVi, DienTich;
};

void Nhap(Ellipse &e);
void CV_DT(Ellipse &e);
void Xuat(Ellipse e);
int KiemTra_GocTD(Ellipse &e);

int main ()
{	Ellipse el;
	Nhap(el);
	CV_DT(el);
	Xuat(el);
	int k = KiemTra_GocTD(el);
	if (k)
		printf("\nTam Ellipse nam o goc TD");
	else 
		printf("\nTam khong nam o goc TD");
	return 0;
}

void Nhap(Ellipse &e)
{
	printf("Nhap vao hoanh do: "); scanf("%f", &e.x);
	printf("Nhap vao tung do: "); scanf("%f", &e.y);
	printf("Nhap vao ban kinh 1: "); scanf("%f",  &e.R1);
	printf("Nhap vao ban kinh 2: "); scanf("%f",  &e.R2);
	printf("\n");
}
void CV_DT(Ellipse &e)
{
	float t = pow(e.R1, 2) + pow(e.R2, 2);
	e.ChuVi = 2 * Pi * sqrt(t/2);
	e.DienTich = Pi * e.R1 *e.R2;
}
void Xuat(Ellipse e)
{
	printf("Hinh Ellipse vua nhap co thong tin la: \n");
	printf("Tam: (%.1f, %.1f)\t Ban kinh 1: %.2f \t Ban Kinh 2: %.2f \t Chu vi: %.2f \t Dien Tich: %.2f\n", e.x, e.y, e.R1, e.R2, e.ChuVi, e.DienTich);
}

int KiemTra_GocTD(Ellipse &e)
{
	if (e.x == 0 && e.y == 0)
		return 1;
	else 
		return 0;
}
