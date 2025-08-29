#include <stdio.h>

int ucln (int a, int b);

int main()
{
    int a, b;
    printf("nhap vao so nguyen duong a: "); scanf("%d", &a);
    printf("nhap vao so nguyen duong b: "); scanf("%d", &b);
    
    int n = ucln(a, b);
    
    printf("uoc chung lon nhat la: %d", n);
    
    return 0;
}

int ucln(int a, int b)
{
    if(b == 0) return a;
    return ucln(b, a % b);
}

