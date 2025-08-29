#include <stdio.h>
using namespace std;

int main()
{
    int a, b, i, j;
    
    printf("nhap vao do dai: "); scanf("%d", &a);
    printf("nhap vao chieu rong: "); scanf("%d", &b);

     for(i = 1; i <= a; i++) {
        for(j = 1; j <= b; j++) {
            if(i == 1 || i == a || j == 1 || j == b ) {
                printf("* ");
            } else {
                printf("  ");
            }
        } printf("\n");
    }

    printf("\n  dien tich hinh chu nhat: %d",a * b);
    printf("\n chu vi hinh chu nhat la: %d", (a + b)* 2);
    return 0;
}