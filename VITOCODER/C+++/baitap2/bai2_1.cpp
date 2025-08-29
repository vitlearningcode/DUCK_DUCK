#include <stdio.h>
using namespace std;

int main ()
{
    float a, b; //cho a,b số thực
//nhập vào a,b:
    printf("nhap vao so a: "); scanf("%f", &a);
    printf("nhap vao so b: "); scanf("%f", &b);
//kiểm tra nghiệm:
    if (a == 0) //Với a = b = 0 -> vô số nghiệm
    {
        if (b == 0)
        {
            printf("phuong trinh vo so nghiem");
        } else // a = 0; b != 0 -> vô nghiệm
            {
                printf("phuong trinh vo nghiem");
            }
    } else 
        {
            printf("phuong trinh co ngiem: -b/a la %2.1f ",(-b)/a);
        }
    return 0;
}