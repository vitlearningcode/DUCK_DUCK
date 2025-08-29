#include <stdio.h>
#include <cmath>
#define PI 3.14
using namespace std;


int main()
{
   
   float R, P, S;
    printf("nhap vao ban kinh: "); scanf("%f", &R);

    P = 2 * PI * R;
    S = PI * pow(R, 2);

    printf(" chu vi hinh tron: %5.1f", P);
    printf("\n dien tich hinh tron: %5.1f", S);
    
    return 0;
    
}