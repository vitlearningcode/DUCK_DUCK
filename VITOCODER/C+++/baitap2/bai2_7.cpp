#include <stdio.h>
using namespace std;

int main ()
{
    int sum, a, i;
    
    printf("nhap vao mot so nguyen a: "); scanf("%d", &a);

    sum = a;
    while (sum < 100)
    {
        printf("nhap them mot so: "); 
        scanf("%d", &a);
        sum += a;
    } 
    
    printf("tong: %d", sum);
    return 0;
}