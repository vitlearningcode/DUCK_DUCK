#include <stdio.h>
using namespace std;

int main ()
{
    float a, b, c, tb;

    printf("nhap vao so a: "); scanf("%f", &a);
    printf("nhap vao so b: "); scanf("%f", &b);
    printf("nhap vao so c: "); scanf("%f", &c);

    tb = (a + b + c) / 3;

    printf("gia tri trung binh cua ba so %2.3f, %2.3f, %2.3f la %2.3f ", a, b, c, tb);
    return 0;
}