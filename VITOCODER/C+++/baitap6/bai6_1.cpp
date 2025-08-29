#include <stdio.h>

int main()
{
    int *k, n;
    k = &n;
    printf("nhap vao n: ");
    scanf("%d", k);

    printf("gia tri cua n: %d", n);

	return 0; 
}