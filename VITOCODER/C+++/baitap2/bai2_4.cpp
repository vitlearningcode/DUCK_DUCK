#include <stdio.h>
#include <math.h>

int main ()
{
	int n, i;
	bool isprime = true;
	printf("\n Nhap vao mot so nguyen duong: "); scanf("%d", &n);

	if (n < 2)
	{
		isprime = false;
	} 
	
	for (i = 2; i <= sqrt(n); i++)
	{
		if( n % i == 0) 
		{
			isprime = false;
			break;
		} 
	} 
	
	if(isprime == true)
	    printf("%d la so nguyen to", n);
    else  
	    printf("%d khong la so nguyen to", n);
	
	return 0;
} 
