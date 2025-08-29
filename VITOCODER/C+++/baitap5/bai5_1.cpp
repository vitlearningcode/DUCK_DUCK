#include <stdio.h>
#define MAX 100
//nhap mang
void NhapMang (int a[MAX][MAX], int n, int m)
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
}
//xuat mang
void XuatMang (int a[MAX][MAX], int n,int m)
{
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
//liet ke cac dong co so dong bang so cot
void lksodongbangsocot(int a[MAX][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t %d", a[i][i]);
    }
    printf("\n");
}
//kiem tra tung phan tu trong mang tang dan hay chua
int KiemTraTang(int a[MAX][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < a[i][j - 1])
            return 0;
        }
    }return 1;

} 
//tinh tong cac phan tu tren tung dong
void TongCacPhanTu (int a[MAX][MAX], int n, int m)
{   
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
        printf("dong %d: %d\n", i + 1, sum);
    }
    printf("\n");
}
//tim va tra ve so luong so duong tu dong d 
int timvatravesoduong(int a[MAX][MAX], int d, int m)
{
    int sl = 0; 
    for (int j = 0; j < m; j++)
    {
        if (a[d][j] > 0)
        {
            d++;
        }
    } return d;
}
//tim min
int TimMin(int a[MAX][MAX], int n, int m)
{
    int min = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < min)
            min = a[i][j];
        }
    }return min;
}
//hoan vi 
void HoanVi(int a[MAX][MAX], int n, int cot1, int cot2)
{
    for (int i = 0; i < n; i++)
    {
        int t = a[i][cot1];
        a[i][cot1] = a[i][cot2];
        a[i][cot2] = t;
    }
}
//sapxep
void SapXep(int a[MAX][MAX], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m - 1; j++)
       {
            for (int k = 0; k < m - j - 1; k++)
            {
                if (a[i][k] > a[i][k + 1])
                {
                    int t = a[i][k];
                    a[i][k] = a[i][k + 1];
                    a[i][k + 1] = t;
                }
            }
       } 
    }
}

int main ()
{
    int m, n;
    int a[MAX][MAX];

    printf("nhap so hang: ");
    scanf("%d", &n);

    printf("nhap so cot: ");
    scanf("%d", &m);

//1.
    printf("Nhap gia tri cho mang %dx%d:\n", n, m);
    NhapMang(a, n, m);

//2.
    printf ("Gia tri cua mang %dx%d: \n", n, m); 
    XuatMang(a, n, m);

//3.
    printf("chi so dong bang chi so cot: \n");
    lksodongbangsocot(a, n, m);

//4.
    int k = KiemTraTang(a, n, m);
    if (k == 1)
        printf("mang tang dan theo tung hang\n");
    else    
    printf("mang khong tang dan theo tung hang\n");

//5.
    printf("tinh tong phan tu tren cung 1 dong: \n");
    TongCacPhanTu(a, n, m);

//6.
    int d;
    printf("nhap dong d can dem so duong: ");
    scanf("%d", &d);
    int sd = timvatravesoduong(a, d, m);
    printf("so luong so duong tren dong %d: %d\n", d, sd);

//7.
    int min = TimMin(a, n, m);
    printf("gia tri min: %d\n", min);

//8.
    int cot1, cot2;
    printf("nhap cot can hoan vi 1: ");
    scanf("%d", &cot1);

    printf("nhap cot can hoan vi 2: ");
    scanf("%d", &cot2);

//9.
    HoanVi(a, n, cot1, cot2);
    XuatMang(a, n, m);
//10.
    SapXep(a, n, m);
    printf("mang sau khi sap xep: \n");
    XuatMang(a, n, m);

    return 0;
}