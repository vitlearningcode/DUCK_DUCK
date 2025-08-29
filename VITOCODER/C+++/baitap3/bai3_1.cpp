#include <stdio.h>

int shh(int n);

int main()
{
    int n;
    printf("nhap vao so n: "); scanf("%d", &n);
    
    int x = shh(n);
    
    if (x == 1)
    	 printf("day la so hoan hao");
    else
        printf("day la so khong hoan hao");
        
    return 0;
}

int shh(int n)
{
    int i, t = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        t += i;
    }
    if (n == t)
    	return 1;
    else 
    	return 0;      
}
