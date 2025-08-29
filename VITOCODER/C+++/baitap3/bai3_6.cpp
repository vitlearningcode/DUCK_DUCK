#include <stdio.h>
#include <math.h>

float bp(float n);

int main()
{
    int n, i;
    printf("nhap vao so nguyen duong n: "); scanf("%d", &n);
    float k = bp(n);
    printf("tong binh phuong: %.2f", k);
    return 0;
}

float bp(float n)
{
    float tbp;
    for(int i = 1; i <= n; i++)
    tbp += 1/(pow(i, 2));
    return tbp;
}
