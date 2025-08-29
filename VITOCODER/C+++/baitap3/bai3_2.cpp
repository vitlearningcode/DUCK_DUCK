#include <stdio.h>

int gt(int n);
int tohop(int n, int k);


int main () 
{
	int n, k;
	printf("\n Nhap vao mot so nguyen n: "); scanf("%d", &n);
	printf("\n Nhap vao mot so nguyen k: "); scanf("%d", &k);
	
	int x = tohop(n, k);
	printf("\n Gia tri to hop: %d", x);
	return 0;	 
}

int gt(int n)
{
	if(n == 0) return 1;
	int x = 1;
	for(int i = 1; i <= n; i++)
	x = x * i;
	return x; 
}

int tohop(int n, int k)
{
	int x = gt(n)/(gt(k)*gt(n - k));
	return x; 
} 
