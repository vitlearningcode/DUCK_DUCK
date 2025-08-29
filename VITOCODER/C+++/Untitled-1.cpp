#include <stdio.h>

void Nhapmang(int a[][100], int n, int m);
void XuatMang(int a[][100], int n, int m);
void haivemot(int a[][100], int b[], int n, int m);
void sapxep(int b[], int s);
void motlenhai(int b[], int a[][100], int n, int m);



int main ()
{
    int n = 3, m = 3;
    int a[100][100];
    Nhapmang(a, n, m);

    printf("mang chua sapxep: \n");
    XuatMang(a, n, m);

    int b[100];
    haivemot(a, b, n, m);
    sapxep(b, n*m);
    motlenhai(b, a, n, m);
    printf("new: \n");
    XuatMang(a, n, m);
    return 0;
}

void Nhapmang(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Nhap vao phan tu thu %d: ", i+1);
            scanf("%d", &a[i][j]);
        }
    }
}
void XuatMang(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void haivemot(int a[][100], int b[], int n, int m)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[k++] = a[i][j];
        }
    }
}

void sapxep(int b[], int s)
{
    for (int i = 0; i < s-1; i++)
    {
        for (int j = i+1; j < s; j++)
        {
            if (b[i] > b[j])
            {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
}
void motlenhai(int b[], int a[][100], int n, int m)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = b[k++];
        }
    }
}