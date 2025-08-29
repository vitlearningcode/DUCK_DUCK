#include <stdio.h>
#include <cmath>

using namespace std;

int main ()
{
    int a, b; float c;
    printf("nhap vao so nguyen a: "); scanf("%d", &a);
    printf("nhap vao so nguyen b: "); scanf("%d", &b);

    c = pow(a, 2) + pow(b, 2);
    printf("tong binh phuong hai so: %d, %d la %3.1f", a, b, c);
    return 0;
} 