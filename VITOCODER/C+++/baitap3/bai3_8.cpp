#include <stdio.h>

int UCLN(int a, int b);

int main()
{
    int a, b;
    
    printf("nhap a:");
    scanf("%d",&a);
    
    printf("nhap b:");
    scanf("%d",&b);
    
    int t = UCLN(a, b);
    printf("BCNN la: %d", (a*b)/t);
}

int UCLN(int a, int b)
{
  if(b == 0) return a;
    return UCLN(b, a % b); 
}

