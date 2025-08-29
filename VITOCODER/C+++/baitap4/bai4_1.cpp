#include <stdio.h>
#include <math.h> 
#define MAX 100
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);

int TongLe(int a[], int n);
 
float TrungBinhCong(int a[], int n);

int Min(int a[], int n);
int TimViTriMax(int a[], int n);
int ToanSoChan(int a[], int n);

void LietKe_SoDuong(int a[], int n);
void LietKe_LonHonTBC(int a[], int n);
void LietKe_ChanLe(int a[], int n);
void LietKe_SoNguyenTo(int a[], int n);
void LietKe_SoChinhPhuong(int a[], int n); 

int main ()
{
    int a[MAX] , n;
    printf("1.Nhap so phan tu mang: "); scanf("%d", &n); 
    NhapMang(a, n);

	printf("2.Cac phan tu cua mang\n");
	XuatMang(a, n);
	 
	printf("\n\n");
	int s = TongLe(a,n);
	printf("3.Tong cac so le trong mang la: %d\n", s);
	
	printf("\n");
	float tbc = TrungBinhCong(a,n);	
	printf("4.Trung binh cong cac so trong mang la: %.2f\n", tbc);
	
	printf("\n");
	int gtm = Min(a,n);
	printf("5.Gia tri nho nhat trong mang la: %d\n", gtm);
	
	printf("\n");
	int vtm = TimViTriMax(a,n);
	printf("6.Vi tri phan tu lon nhat trong mang la: %d\n", vtm);
	
	printf("\n");
	int c = ToanSoChan(a, n);
	if (c == 1) 
	    printf("7.Mang toan so chan\n");
	else 
	    printf("7.Mang khong phai hoan toan la so chan\n");
	 
	LietKe_SoDuong(a, n);
	LietKe_LonHonTBC(a, n);
	printf("\n10: ");
	LietKe_ChanLe(a, n);
	LietKe_SoNguyenTo(a, n);
	LietKe_SoChinhPhuong(a, n); 	
	return 0; 	
}

void NhapMang(int a[], int n)
{ 	
	for (int i = 0; i < n ; i++)
	{	
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}

void XuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	    printf("\t %d", a[i]);
}

int TongLe(int a[], int n)
{
	int s = 0;
	for(int i = 0; i < n; i++)	
		if (a[i] % 2 != 0)
		    s+=a[i]; 	
	return s;
	 
}

float TrungBinhCong(int a[], int n)
{
	float tbc = 0.0;
    for (int i=0; i<n ; i++)
		tbc = (float)tbc + a[i];
	return tbc/n;
	 
}

int Min(int a[], int n)
{
	int k;
	k = a [0]; 
	for (int i = 1; i < n; i++)
	    if (a[i] < k)
		    k = a [i];
	return k;
	 
}

int TimViTriMax(int a[], int n) 
{
	int max, vt;
	max = a[0];
	vt = 0;
	for (int i = 1; i < n ; i++)
	    if(a[i] > max)
	    {
	    	max = a[i];
			vt = i; 
		}
	return vt+1;
		  
}

int ToanSoChan(int a[], int n)
{
	int d = 0;
	for (int i = 0; i < n; i++)
	    if (a[i] % 2 == 0)
	     d++;
	if (d == n) 
	   return 1;
	else 
	   return 0;
	    
}
void LietKe_SoDuong(int a[], int n)
{
	printf("\n8.Liet ke cac so duong co trong mang: ");
	int sd = 0;
	for (int i = 0; i < n; i++)
	    if(a[i] > 0)
	    {
	    	printf("\t %d", a[i]);
	    	sd = 1;
		}

	if (sd == 0)
	   printf("\n8.Khong co so duong trong mang!!! ");
	printf("\n");
	   		
}
void LietKe_LonHonTBC(int a[], int n)
{
	float tbc = TrungBinhCong(a,n);
	printf("\n9.Liet ke cac so lon hon TBC (%.2f): ", tbc);
	for (int i = 0; i < n; i++)
	        if(a[i] > tbc)	    
	    	    printf("\t %d", a[i]);		
	printf("\n");		    
}
void LietKe_ChanLe(int a[], int n)
{
	printf("\n  Nhung so chan: "); 
	for (int i = 0; i < n; i++)
	    {
	    	if (a[i] % 2 == 0)
		        printf("\t %d", a[i]);
			   
		}
	printf("\n  Nhung so le: ");
	for (int i = 0; i < n; i++)
	    {
	    	if (a[i] % 2 !=0) 
		    printf("\t %d", a[i]);
			   
	    } 
	printf("\n");
}

int KiemTra_SoNguyenTo(int n)
{
	int nt = 1;
	if (n < 2) return 0; 
	for (int i = 2; i <= sqrt(n); i++)
	    if (n % i == 0)
		{
		   nt = 0;
		   break;	
		}
	return nt;
	 
}
void LietKe_SoNguyenTo(int a[], int n)
{
	printf("\n11.Nhung so nguyen to: ");
	
	for (int i = 0; i < n; i++) 
	
	     if (KiemTra_SoNguyenTo(a[i])) 
	     
	        printf("\t %d", a[i]);
	printf("\n");	    
} 
int KiemTra_SoChinhPhuong(int n)
{
	int t;
	t = sqrt(n);
	if (t*t == n)
	    return 1;
	else 
	    return 0; 
		 	
}
void LietKe_SoChinhPhuong(int a[], int n)
{
	printf("\n12. Nhung so chinh phuong ");
	
	for (int i = 0; i < n; i++)
	    if (KiemTra_SoChinhPhuong(a[i]))
		    printf("\t %d", a[i]); 
} 

