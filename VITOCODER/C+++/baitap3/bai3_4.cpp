#include <stdio.h>

float tg(float a, float b, float c);
float cv(float a, float b, float c);

int main()
{
    float n, a, b, c, k;
    printf("nhap vao so nguyen a: "); scanf("%f", &a);
    printf("nhap vao so nguyen b: "); scanf("%f", &b);
    printf("nhap vao so nguyen c: "); scanf("%f", &c);
    
    n = tg(a, b, c);
    
    if (n == 1)
    {   
		k = cv(a, b, c); 
        printf("%.2f, %.2f, %.2f tao thanh hinh tam giac \n", a, b, c);
        printf("chu vi hinh tam giac la: %.2f", k);
    }
    else
        printf("%.2f, %.2f, %.2f khong tao thanh hinh tam giac", a, b, c);

    return 0;
} 

float tg(float a, float b, float c)
{
    if((a + b) > c && (a + c) > b && (b + c) > a)
        return 1;
    else 
        return 0;
}

float cv(float a, float b, float c)
{
    float n = (a + b + c);
	return n;
}

