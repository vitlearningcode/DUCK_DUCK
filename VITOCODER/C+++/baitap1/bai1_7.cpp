#include <stdio.h>
#include <cmath>

using namespace std;

int main()
{
    int a, b; float c;
    printf("nhap vao so nguyen a: "); scanf("%d", &a);
    printf("nhap vao so nguyen b: "); scanf("%d", &b);

    c = pow((a + b), 2);
    printf("tong binh phuong cua (a^2 + b^2): %3.2f ", c);
    return 0;
}