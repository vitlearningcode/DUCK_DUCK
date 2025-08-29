	#include <stdio.h>
int main () 
{
	int a, n, sodao = 0;
    printf("\n Nhap so nguyen duong n: "); scanf("%d", &n);
    while( n > 0)
    {
    	a = n % 10;
	    sodao = sodao * 10 + a;
	    n = n / 10; 
	} 
    printf("\n So dao cua n: %d", sodao);
    return 0; 
	 
} 
