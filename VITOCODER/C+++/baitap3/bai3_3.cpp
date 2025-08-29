#include <stdio.h>
#define pi 3.14

float cv(float r);

int main ()
{
    float r, n; 
    printf("nhap vao ban kinh r: ");
    scanf("%f", &r);
    
    n = cv(r);
    printf("chu vi hinh tron la: %.2f", n);
    return 0;
}

float cv(float r)
{
    float n = 2 * pi * r;
    return n;
    
}
