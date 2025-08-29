#include <stdio.h> 
#include <math.h>
#define Pi 3.14f

struct Ellipse
{
    float x, y;
    float R1, R2, cv, dt;
};

void Nhap(Ellipse &el);
void ChuVi(Ellipse &el);
void DienTich(Ellipse &el);
void Xuat(Ellipse &el);
int Kiemtra(Ellipse el);

int main ()
{
    Ellipse el;
    printf("\n Nhap thong tin cho hinh ELLIPSE: \n");
    Nhap(el);
    ChuVi(el);
    DienTich(el);

    printf("\n Cac thong tin cua hinh Ellipse vua nhap: \n");
    Xuat(el);


    int k = Kiemtra(el);
    if (k)
        printf("\n-> Ellipse co tam o goc toa do\n");
    else 
        printf("\n-> Ellipse co tam khong nam o goc toa do\n");
    return 0;
}

void Nhap(Ellipse &el)
{
    float x, y;
    float z, k;
    printf("\n-> Nhap vao hoanh do: ");
    scanf("%f", &x);
    printf("\n-> Nhap vao tung do: ");
    scanf("%f", &y);
    printf("\n-> Nhap  vao ban kinh R1: ");
    scanf("%f", &z);
    printf("\n-> Nhap vao ban kinh R2: ");
    scanf("%f", &k);
    el.x = x;
    el.y = y;
    el.R1 = z;
    el.R2 = k;
}

void ChuVi(Ellipse &el)
{
    el.cv = 2*Pi*sqrt((el.R1*el.R1+el.R2*el.R2)/2);
}

void DienTich(Ellipse &el)
{
    el.dt = Pi*el.R1*el.R2;
}

void Xuat(Ellipse &el)
{
    printf("\n=> Tam: (%.2f, %.2f), ban kinh 1 = %.2f, ban kinh 2 = %.2f, chu vi = %.2f, dien tich = %.2f \n", el.x, el.y, el.R1, el.R2, el.cv, el.dt);
}

int Kiemtra(Ellipse el)
{
    if (el.x ==  0 && el.y == 0)
        return 1;
    else 
        return 0;
}

