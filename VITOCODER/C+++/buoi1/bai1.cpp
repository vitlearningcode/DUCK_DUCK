#include <stdio.h>
#include <math.h>

void Nhapmang(int a[], int n);
void Xuatmang(int a[], int n);
int LinearSearch(int a[], int n, int x);
int binarySearch(int a[], int x, int n);
int main ()
{
    int n; int a[100];
    printf("nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    Nhapmang(a, n);

    Xuatmang(a, n);
    int x;
     printf("\nNhap x can tim: ");
     scanf("%d", &x);

printf("Tim kiem tuyen tinh: -> ");
    int k = LinearSearch(a, n, x);
    if (k == -1)
        printf("khong co so can tim");
    else 
        printf("co so can tim trong day tai vi tri thu %d", k);

printf("\nTim kiem nhi phan: -> ");
    k = binarySearch(a, n, x);
     if (k == -1)
        printf("khong co so can tim");
    else 
        printf("co so can tim trong day tai vi tri thu %d", k);

    return 0;
}

void Nhapmang(int a[], int n)
{ 	
	for (int i = 0; i < n ; i++)
	{	
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}

void Xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
}
int LinearSearch(int a[], int n, int x)
{
    int i = 0;
    int vt = 0;
    while ((i < n) && (a[i] != x))
        i++;
    if (i == n)   
    return -1;
     return (i);
}

int binarySearch(int a[], int n, int x) 
{ 
    int l = 0, r = n - 1, m = 0;
    do {
        m = (l + r) / 2;
        if (a[m] == x)
        return m;
        else if (x < a[m])
        r = m - 1;
        else l = m + 1; 
    } while (l <= r);
    return -1;
}