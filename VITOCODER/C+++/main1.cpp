
#include <stdio.h>

int main ()
{
	int a, b, c;
	printf("Nhap vao do dai 3 canh: ");
	scanf("%i%i%i", &a, &b, &c);
	int cv = (a + b + c);
	printf("Chu vi 3 canh: %i - ", cv);
	if ((a == b) && (a == c))
		printf("Tg deu");
	else if ((a == b) || ( a == c) || (c == b))
		printf("tg can");
		else printf("tg thuong");
		return 0;
}