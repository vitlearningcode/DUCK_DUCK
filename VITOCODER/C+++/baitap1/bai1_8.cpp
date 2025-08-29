#include <stdio.h>
using namespace std;

int main()
{
    float a, b; int n;
    printf("nhap n: "); scanf("%d", &n);

    a = n /6;
    b = n %6;

    printf(" phan nguyen: %2.1f", a);
    printf("\n phan du: %2.1f", b);
    return 0;
}