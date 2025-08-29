#include <stdio.h>
void Lietke(int n);
int main ()
{	int n;
	printf("nhap vao n: "); scanf("%d", &n);
	Lietke(n);
	return 0;
}

void Lietke(int n)
{
	int sum =0;
	int k = 1;
	while (sum + k < n)
	{
		sum += k;
		k++;
	}
	printf ("gia tri k:  %d", k -1);
}
