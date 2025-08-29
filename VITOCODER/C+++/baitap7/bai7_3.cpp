#include <stdio.h>
#include <math.h>

struct Diem
{
    float x, y;
};
void Nhap(Diem &d);
void Xuat(Diem d);
float KhoangCach(Diem A, Diem B);
int Diem_tren_TH(Diem d);
int Diem_Goc_TD(Diem d);

int main ()
{   
    Diem A, B;
    printf("\n nhap vao diem A: \n");
    Nhap(A);

    printf("\n nhap vao diem B: \n");
    Nhap(B);

    printf("\n thong tin cua diem A vua nhap:");
    Xuat(A);

    printf("\n thong tin cua diem B vua nhap:");
    Xuat(B);

	float v = KhoangCach(A, B);
    printf("\n Khoang cach giua hai diem A va B: %.2f\n", v);
    
    
    int a = Diem_tren_TH(A);
    int b = Diem_tren_TH(B);
    if (a && b)
        printf("\n A va B deu nam tren Truc Hoanh\n");
    else 
        if (a)
            printf("\n A nam tren Truc Hoanh\n");
        else
            if (b)
                printf("\n B nam tren Truc Hoanh\n");
            else
                printf("\n khong co diem nao nam tren truc hoanh\n");

   int c = Diem_Goc_TD(A);
   int d = Diem_Goc_TD(B);
 
    if (c && d)
        printf("\n Diem A va B cung nam o goc toa do\n");
    else 
        if (c)
            printf("\n Diem A nam o goc toa do\n");
        else
            if (d)
                printf("\n Diem B nam o goc toa do\n");
                else
                    printf("\n khong co diem nao nam o goc toa do.");

    return 0;
}
void Nhap(Diem &d)
{
    float x, y;
    printf("\n-> nhap toa do x: "); scanf("%f", &x);
    printf("\n-> nhap toa do y: "); scanf("%f", &y);
    d.x = x;
    d.y = y;
}
void Xuat(Diem d)
{
    printf("\n (%.2f, %.2f)\n", d.x, d.y);
}
float KhoangCach(Diem A, Diem B)
{
    float AB;
    float h, t;
    h = A.x - B.x;
    t = A.y - B.y;
    AB = sqrt((h*h)+(t*t));
    return AB;
}

int Diem_tren_TH(Diem d)
{
    if (d.y == 0)
        return 1;
    else 
        return 0;
}

int Diem_Goc_TD(Diem d)
{
    if (d.x == 0 && d.y == 0)
        return 1;
    else 
        return 0;
}


