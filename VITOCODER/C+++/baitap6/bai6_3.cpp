
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *k;
         k = (int *) malloc(10*sizeof(int));
    printf("Nhap vao mot so nguyen : ");
    scanf("%d", k);

    printf("gia tri vung nho: %d", *k);
    free(k);
    return 0;

}
