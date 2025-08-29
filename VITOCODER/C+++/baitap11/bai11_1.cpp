#include <stdio.h>
#define MAX 100
void Sole(int n);


int main ()
{
	int n;
	printf("nhap vao n: "); scanf("%d", &n);
	Sole(n);
	return 0;
}

void Sole(int n)
{
	for (int i = 0; i < n; i++)
	{
		if ( i % 2 != 0)
			printf("%d\t", i);
	}
}


