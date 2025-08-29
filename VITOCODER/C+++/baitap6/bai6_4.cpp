
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *k;
        k = (int *)malloc(sizeof(int));

    printf("dia chi con tro: %x", &k);
    printf("\ngia tri vung nho con tro: %d", *k);
    free(k);
    return 0;
}