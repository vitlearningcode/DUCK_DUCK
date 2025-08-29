
#include <stdio.h>

int main()
{
    int n, *k;
        k = &n;
    printf("nhap vao n: ");
    scanf("%d ", k);

    printf("\ndia chi cua bien: %x", &n);
    printf("\ndia chi con tro: %x", &k);
    printf("\ngia tri vung nho: %d", *k);

    return 0;
}