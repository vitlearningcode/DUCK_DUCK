#include<stdio.h>
int main()
{
	int i, n, tong, k, a, b, c, d;
	for (i = 1; i <= 9999; i++)
	{
		a = i / 1000;
		b = (i % 1000) / 100;
		c = (i% 100) / 10; 
		d = (i % 10);

		tong = a+b+c+d;

		if((tong % 10) == 9)
		printf("%d%d%d%d\t", a, b, c, d);
	}
	return 0;
	
	
}

