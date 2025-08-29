#include <stdio.h>
using namespace std;

int main ()
{
    char c; int d; float f;

    printf("Nhap vao mot ky tu: "); scanf("%c", &c);
    printf("Nhap vao mot so nguyen: "); scanf("%d", &d);
    printf("Nhap vao mot so thuc: "); scanf("%f", &f);

    printf("\nHien thi ky tu vua nhap: %3c",c);
    printf("\nHien thi so nguuyen vua nhap: %6d",d);
    printf("\nHien thi so thuc vua nhao: %8.3f",f);
    return 0;
}