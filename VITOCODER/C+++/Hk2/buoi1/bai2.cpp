#include <stdio.h>
#include <math.h>

void Nhapmang(int a[], int n);
void Xuatmang(int a[], int n);
int maxSearch(int a[], int n);
int dem_tra_SNT(int a[], int n);
int vitriSNT(int a[], int n);
int KTSNT(int n);
void mangconTang(int a[], int n, int b[], int &nb);

int main ()
{
    int n, a[100];
    printf("nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    Nhapmang(a, n);
    Xuatmang(a, n);

    int max = maxSearch(a, n);
    printf("\ntim Max: %d\n", max);

    int sl = dem_tra_SNT(a, n);
    printf("So luong snt: %d\n", sl);

    int vt = vitriSNT(a, n);
    printf("Vi tri snt dau tien: %d\n", vt);

    printf("mang con tang dai nhat:\n ");
    int b[100], nb;
    mangconTang(a, n, b, nb);
    Xuatmang(b, nb);
    return 0; 
}

void Nhapmang(int a[], int n)
{ 	
	for (int i = 0; i < n ; i++)
	{	
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}

void Xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
}

int maxSearch(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;

}

int KTSNT(int n)
{
    int nt = 1;
    if (n < 2)
        nt = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            nt = 0;
            break;
        }
    }
    return nt;
}

int dem_tra_SNT(int a[], int n)
{
    int dem =0;
    for (int i = 0; i < n; i++)
    {
        if (KTSNT(a[i]) == 1)
        {
            dem++;
        }    
    }
    return dem
    ;
}

int vitriSNT(int a[], int n)
{
    int vt =0;
    for (int i = 0; i < n; i++)
    {
        if (KTSNT(a[i]) == 1)
        {
            vt = i;
            break;
        }    
    }
    return vt;
}

void mangconTang(int a[], int n, int b[], int &nb)
{
    int ma = -1, v = -1, dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < a[i+1])
            dem++;
        else
        {
            if (ma < dem)
            {
                ma = dem;
                v = i - dem;
            }
            dem = 0;
        }
    }
    if (ma < dem)
    {
        ma = dem;
        v = n - dem - 1;
    }

    nb = 0;
    for (int i = v; i <= v + ma; i++)
        b[nb++] = a[i];
}