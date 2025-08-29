#include <stdio.h>
using namespace std;

int main ()
{
    int a, b; float Tb;

    printf("nhap vao so nguyen a: "); scanf("%d", &a);
    printf("nhap vao so nguyen b: "); scanf("%d", &b);

    Tb = (a+b)/2;

    printf("gia tri trung binh cua hai so %d, %d la %2.3f", a, b, Tb );
    return 0;
}