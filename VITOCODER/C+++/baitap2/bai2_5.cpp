#include <stdio.h>
#include <math.h>

using namespace std;
int main ()
{
    int n, i;
    printf("nhap vao mot so nguyen duong: "); scanf("%d", &n);

    i = sqrt(n);    
    
    if (i * i == n) printf("%d la so chinh phuong!", n);
    else printf("%d khong phai la so chinh phuong!", n);
    
    return 0;

}