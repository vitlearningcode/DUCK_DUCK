#include <stdio.h>
#include <math.h>

int bp(int n);

int main()
{
    int n, i, k;
    printf("nhap vao so nguyen duong n: "); scanf("%d", &n);
    k = bp(n);
    printf("tong binh phuong: %d", k);
    return 0;
}

int bp(int n)
{
    int tbp;
    for(int i = 1; i <= n; i++)
    tbp += (pow(i, 2));
    return tbp;
}

