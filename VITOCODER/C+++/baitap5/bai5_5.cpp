#include <stdio.h>
#define  MAX 100

void NhapMaTran( int a[MAX][MAX], int &n, int &m)
{
	printf("-> Nhap so dong n: ");
	scanf("%d", &n); 
	
	printf("-> Nhap so cot m: ");
	scanf("%d", &m);	 

	printf("\n");
	for (int i = 0; i < n; i++)
    	for (int j = 0; j < m; j++) {
			printf("Nhap phan tu thu [%d][%d]: ", i, j);
				scanf("%d", &a[i][j]); 
	}				
}

void XuatMaTran(int a[MAX][MAX], int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf(" %d\t", a[i][j]); 
		}
		printf("\n");
	}	     
}

void LietKe(int a[MAX][MAX], int na, int ma, int b[MAX][MAX], int nb, int mb)
{
	//tao 2 mang ao
	int t1[MAX], t2[MAX];
	int n1 = 0, n2 = 0;
	
	for (int i = 0; i < na; i++)
	{
	    for (int j = 0; j < ma; j++)
		{
			t1[n1] = a[i][j];
			n1++; 
		} 
	}

	for (int i = 0; i < nb; i++)
	{
	    for (int j = 0; j < mb; j++)
		{
			t2[n2] = b[i][j];
			n2++; 
		}
	}
	
/*
1	2	3		1	2	7	8
4	5	6

*/
	int kiemtra = 1; 
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
		    if (t1[i] == t2[j])
			{ 
				kiemtra = 0;
				break; 
			}
			else 
			    kiemtra = 1;
		}
		if (kiemtra)
		    printf (" %d\t", t1[i]); 
	}

	for (int i = 0; i < n2; i++)
	{
		for (int j = 0; j < n1; j++)
		{
		    if (t2[i] == t1[j])
			{
				kiemtra = 0;
				break; 
			}
			else 
			    kiemtra = 1;
		}
		if (kiemtra)
		    printf (" %d\t", t2[i]); 
	}    
    printf("\n");
}

void CongMaTran(int a[MAX][MAX], int na, int ma, int b[MAX][MAX], int nb, int mb)
{
	int c[MAX][MAX];
	if (na == nb && ma == mb)
	{
		for (int i = 0; i < na; i++)
		{
			for (int j = 0; j < ma; j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		XuatMaTran(c, na, ma);
	}
	else 
	    printf("=> Khong the thuc hien cong 2 ma tran\n"); 
}

void NhanMaTran(int a[MAX][MAX], int na, int ma, int b[MAX][MAX], int nb, int mb)
{
	int c[MAX][MAX];
	if (ma == nb)
	{
		for (int i = 0; i < na; i++)
		{ 
		    for (int j = 0; j < mb ; j++)
			{
				c[i][j] = 0;
				for (int k = 0; k < ma; k++)
				{
				    c[i][j] += a[i][k]*b[k][j]; 
				}
			}
		}	
		XuatMaTran(c, na, mb); 
		printf("\n");
	}
	
	else 
	    printf("=> Khong the thuc hien Nhan 2 ma tran\n"); 
}

int main ()
{
	int a[MAX][MAX];
	int na, ma;
	int b[MAX][MAX];
	int nb, mb;

//nhap lan luot cac gia tri cho hai mang
	printf("\1.Nhap gia tri cho hai mang: ");
	printf("\n Nhap ma Tran a: \n");
	NhapMaTran(a ,na , ma);
	printf("\n Nhap ma Tran b: \n");
	NhapMaTran(b, nb , mb);

//Xuat cac phan tu cua tung ma tran	
	printf("\n2.Xuat ma tran: ");
	printf("\n Xuat ma tran a: \n");
	XuatMaTran(a ,na , ma);
	printf("\n Xuat ma tran b: \n");
	XuatMaTran(b, nb , mb);

//Liet ke nhung phan tu chi xuat hien 1 lan trong ma tran	
	printf("\n 3.Liet ke nhung phan tu chi xuat hien o A hoac B: ");
	LietKe(a, na, ma, b, nb, mb);
	
//kiem tra hai ma tran co the thuc hien phep cong duoc khong
	printf("\n 4.Cong Hai Ma Tran: \n");
	CongMaTran(a, na, ma, b, nb, mb);

//kiem tra hai ma tran co nhan duoc khong
	printf("\n 5.NHan Hai ma tran: \n");
	NhanMaTran(a, na, ma, b, nb , mb);
	return 0; 
} 