#include <stdio.h>

void Liet_ke (int n, int k);

int main ()
{
    int n;
    printf("Nhap vao n: "); scanf("%d", &n);

    int k;
    printf("Nhap vao k: "); scanf("%d", &k);
    printf("Cac gia tri chia het cho %d la: ", k);
    Liet_ke(n, k);
    return 0;
}

void Liet_ke (int n, int k)
{
    for (int i = 0; i <= n; i++)
    {
        if (i % k == 0)
        {
            printf("%d\t", i);
        }
    }
}

