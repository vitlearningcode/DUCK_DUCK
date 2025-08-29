
#include <stdio.h>

int main()
{
    float fx, *p1, *p2;
    p1 = &fx;
    p2 = &fx;

    *p1 = 100;
    *p2 = 50;
    printf("gia tri cua fx: %f", fx);
    printf("\ndia chi cua fx: %x", &fx);
    printf("\ngia tri cua p1: %f", *p1);
    printf("\ngia tri cua p2: %f", *p2);
    return 0;
}