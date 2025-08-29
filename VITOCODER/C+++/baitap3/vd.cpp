/*
   while ( a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a; 
  */
  #include <stdio.h>
  float e(int n);
  int gt(int n);
  int main ()
{
	int n;
	printf("nhap vao so n: "); scanf("%d", &n);
	
	float k = e(n);
	printf(" tong e = %.6f", k);
	
	return 0;
}

int gt(int n)
{
	int x = 1;
	for(int i = 1; i <= n; i++)
	x *= i;
	return x;
}

float e(int n)
{
    float t =0;
    for(int i = 0; i <= n; i++)
    t += (float) 1/(gt(i));   
    return t;
}
