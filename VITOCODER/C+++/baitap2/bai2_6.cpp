#include <stdio.h>

int UCLN(int a, int b) 
{
    if (b == 0) return a;
    return UCLN(b, a % b);
}

int main ()
{
    int a, b, u, i;
    
    printf("nhap so nguyen duong a: "); scanf("%d", &a);
    printf("Nhap so nguyen duong b: "); scanf("%d", &b);

    printf("\n Uoc chung lon nhat: %d", UCLN(a, b));

/*cho dãy chạy lai rai từ 1 đến a hoặc b,
 sao đó tìm dò ra cái i nào mà được a và b chia hết cho nó thì gán vào*/

    for(i = 1; i <= a || i <= b; i++)
	{
		if(a % i == 0 && b % i == 0)
		u = i; 
	} 
    printf("\n Uoc chung lon nhat: %d", u);
    return 0;
}