#include<stdio.h>
#define MAX 100
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
int TimX(int a[], int n, int x);
void TimAnhEmCuaX(int a[], int n, int x);
void Xoa(int a[], int &n , int k);
void LK_PhanTu(int a[], int n);
void LK_CapGiaTri(int a[], int n);
void LK_CapGiaTri2(int a[], int n);
void TachMang(int a[], int n, int b[], int &m, int c[], int &z);
void HoanVi(int &x, int &y);
void SapXep(int a[], int n);

int main()
{
    int a[MAX], n, x, k;

    printf("1.nhap n: "); scanf("%d", &n);NhapMang(a, n);
    printf("2.mang vua nhap:\n");
    XuatMang(a, n);

	printf("\n");
    printf("\n3.Nhap X: "); scanf("%d", &x);
    int tx = TimX(a, n, x);
    if (tx == -1)
        printf("-> khong co x trong mang");
    else
        printf("-> co trong mang tai vi tri a[%d]", tx);
        
    printf("\n");
    printf("\n4.nhung phan tu bang gia tri %d:", x);
    TimAnhEmCuaX(a, n, x);

	printf("\n");
    printf("5.nhap k: "); scanf("%d", &k);
    Xoa(a, n, k);
    printf("-> mang sau khi da xoa: \n");
    XuatMang(a, n);

	printf("\n");
    LK_PhanTu(a, n);

	printf("\n");
    LK_CapGiaTri(a, n);

	printf("\n");
    LK_CapGiaTri2(a, n);

	printf("\n");
    int b[MAX], c[MAX], m = 0, z = 0;
    TachMang(a, n, b, m, c, z);
    printf("-> mang chua so chan: ");
    XuatMang(b, m);
    
    printf("\n");
    printf("-> mang chua so le: ");
    XuatMang(c, z);

	printf("\n");
    SapXep(a, n);
    printf("\n10.mang sap xep lai: \n");
    XuatMang(a, n);
    
    return 0;
}


void NhapMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("nhap vao phan tu thu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void XuatMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
    printf("\t %d", a[i]);
}

int TimX(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {    
            return i;
            break;
        }    
    }
     return -1;
}

void TimAnhEmCuaX(int a[], int n, int x)
{
    int d = 0;
    for(int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            d++;
            printf("\n  tai cac vi tri: a[%d],", i);
        }
    } 
	printf("\n  co %d phan tu bang gia tri %d\n", d, x);
	printf("\n");
}

void Xoa(int a[], int &n , int k)
{
	if(k < 0 || k > n)
		return;
		
	int i;
	for(i = k; i < n - 1; i++)	
		a[i] = a[i+1];
	n--;
	
}

void LK_PhanTu(int a[], int n)
{
	printf("\n6.Phan tu co dau hieu chia het cho 2: ");
    for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0 || a[i] % 4 == 0 || a[i] % 6 == 0 || a[i] % 8 == 0)
        printf("%d, ", a[i]);
}

void LK_CapGiaTri(int a[], int n) //x <= y
{
	printf("\n7. x<=y");
    int i, j;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (a[i] <= a[j])
                printf("\n (%d, %d)", a[i], a[j]);
}

void LK_CapGiaTri2(int a[], int n) // x > y
{
	printf("\n8.Phan tu lon hon phan tu lien sau: ");
    int i, j;
    for (i = 0; i < n - 1; i++)
            if (a[i] > a[i + 1])
                printf("\n (%d, %d)", a[i], a[i + 1]);
}

void TachMang(int a[], int n, int b[], int &m, int c[], int &z)
{
	printf("\n9.Tach mang: \n");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[m] = a[i];
            m++;
        }
        else
        {
            c[z] = a[i];
            z++;
        }
    }
}

void HoanVi(int &x, int &y)
{
    int z = x;
        x = y;
        y = z;
}

void SapXep(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (a[i] > a[j])
                HoanVi(a[i], a[j]);
}

