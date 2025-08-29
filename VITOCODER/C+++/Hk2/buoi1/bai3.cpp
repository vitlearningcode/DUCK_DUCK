#include <stdio.h>
#include <math.h>

void Nhapmang(int a[], int n);
void Xuatmang(int a[], int n);
void SelectionSort (int a[], int n);
void hoandoi(int &x, int &y);
void InsertionSort (int a[], int n);
void InterchangeSort( int a[], int n);
void BubbleSort(int a[], int n);

int main ()
{
    //int n; int a[100];
    int n = 9; int a[100] = {9, 3, 5, 1, 6, 8, 2, 4, 7};
 
   // printf("nhap vao so phan tu cua mang: ");scanf("%d", &n);Nhapmang(a, n);

    printf("Mang ban dau chua sap xep: "); Xuatmang(a, n);
    int opt; 
    printf("\nChon phuong phap Sap xep: ");scanf("%d", &opt);
    switch (opt)
    {
        case 1: SelectionSort(a, n);
                break;
        case 2: InsertionSort(a, n);
                break;
        case 3: InterchangeSort(a, n);
                break;
        case 4: BubbleSort(a, n);
                break;       
    }  
    
    printf("\nMang sau khi da sap xep: "); Xuatmang(a, n);
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
    printf("\n");
}

void hoandoi(int &x, int &y)
{
    int z = x;
        x = y;
        y = z;
}

void SelectionSort (int a[], int n)
{ 
    printf("\n                                      Sap xep theo SelectionSort: \n");
    int k; 
    for(int i = 0; i < n-1; i++)
    {
        k = i;
        for(int j = i+1; j < n; j++)
            if (a[j] < a[k])
                k = j;
        hoandoi(a[k], a[i]);
        
        printf("-> Buoc %d: ", i+1);
        for (int t = 0; t < n; t++)
            printf("%d ", a[t]);
        printf("\n");
    }
}

void InsertionSort (int a[], int n)
{ 
    printf("\n                                      Sap xep theo InsertionSort: \n");
    int pos, i;
    int x;
    for (int i = 1; i < n; i++) 
    {
        x = a[i]; pos = i - 1;
        while ((pos >= 0) && (a[pos] > x))
        {
            a[pos+1] = a[pos];
            pos--;
        }
        a[pos+1] = x;

        printf("-> Buoc %d: ", i+1);
        for (int t = 0; t < n; t++)
            printf("%d ", a[t]);
        printf("\n");
    }
}

void InterchangeSort( int a[], int n)
{
    printf("\n                                      Sap xep theo InterchangeSort: \n");
    int i,j;
    for(i = 0; i < n-1; i++){
        for(j = i+1; j < n; j++){
            if(a[i] > a[j]) //nếu sai vị trí thì đổi chỗ
                hoandoi(a[i], a[j]);
             printf("-> Buoc %d: ", i+1);
        for (int t = 0; t < n; t++)
            printf("%d ", a[t]);
        printf("\n");
    }
 //               
    printf("\n-> Buoc %d: ", i+1);
        for (int t = 0; t < n; t++)
            printf("%d ", a[t]);
        printf("\n");
    }
}

void BubbleSort(int a[], int n) 
{ 
    printf("\n                                      Sap xep theo BubbleSort: \n");
    int i,j;
    for(i=0; i<(n-1);i++){
    for(j=n-1; j> i; j--){
    if(a[j] < a[j-1]) 
        hoandoi(a[j], a[j-1]);
        printf("-> Buoc %d: ", i+1);
        for (int t = 0; t < n; t++)
            printf("%d ", a[t]);
        printf("\n");
    }
    printf("> Buoc cuoi %d: ", i+1);
        for (int t = 0; t < n; t++)
            printf("%d ", a[t]);
        printf("\n\n");
    }

}