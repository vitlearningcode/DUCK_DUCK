#include <stdio.h>
#include <stdlib.h>
void NhapMang(int a[][100], int &n, int &m)
{
    printf("nhap vao so dong: ");
    scanf("%d", &n);

    printf("nhap vao so cot: ");
    scanf("%d", &m);

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void XuatMang(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <  m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void HoanVi( int &x, int &y)
{
    int t = x;
        x = y;
        y = t;
}

void SapXep2(int a[][100], int n, int m)
{
   int *p;
        p = (int *) malloc(m*n*sizeof(int));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            int t = i*n+j;
            p[t] = a[i][j];
        }
    
    for (int i = 0; i < m*n-1; i++)
    {
        if (p[i] < p[i+1])
            {
               HoanVi(p[i], p[i+1]);
            }
    }

    int cot, dong;
    for (int t = 0; t < n*m; t++)
    {
        //if ( t % 2 == 0)
       // {
         dong = t/n;
         cot = t%n;
        a[dong][cot] = p[t];
       // }
    }
    
    for (int i = 0; i < dong; i++)
    {
        for (int j = 0; j < cot; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
    free(p);
}


int main ()
{
    int a[100][100];
    int na, ma;
    
    printf("nhap mang A: ");
    NhapMang(a, na, ma);
    XuatMang(a, na, ma);

    printf("\n\n\n");
    SapXep2(a,na,ma);
    XuatMang(a, na, ma);
    return 0;
}