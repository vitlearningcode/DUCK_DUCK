#include <stdio.h>
#define MAX 100

int main ()
{
    //Khai bao va nhap mang so nguyen;
    int a[MAX], n;
    do {
        printf("Nhap vao so phan tu cua danh sach: ");
        scanf("%d", &n);
    } while (n <= 0);

    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao Phan tu Thu %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\n");

    //Tao mot tep tin;
    FILE *sn = fopen("dataSn.txt", "wt");

    //Truyen so nguyen vao File;
    if(sn != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            printf("\n Ghi phan tu thu a[%d] = %d vao trong file \n", i, a[i]);
            fprintf(sn, "%d ", a[i]);
        }
        fprintf(sn, "\n");
    }

    //Tinh tong;
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }

    //ghi tong vao trong file;
    if (sn != NULL)
    {
        printf("\n Ghi tong %d vao trong file;\n", tong);
        fprintf(sn, "%d ", tong);
        fprintf(sn, "\n");
    }

    //Tim MAX;
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }

    //Ghi Max tim duoc vao trong file;
    if (sn != NULL)
    {
        printf("\n Ghi gia tri lon nhat: %d vao file;\n", max);
        fprintf(sn, "%d ", max);
        fprintf(sn, "\n");
    }
    fclose(sn);

    // Xuat tep tin;
    /*FILE *xuat = fopen("dataSn.txt", "rw");
    printf("\n Doc du lieu tep tin: ");
    if (xuat != NULL)
    {
        int t;
        while (!feof(xuat))
        {
            fscanf(xuat, "%d ", &t);
            printf("%d\t", t);
        }
    }
    printf("\n");
    fclose(xuat);*/
    
    FILE *xuat = fopen("dataSn.txt", "rt");
	printf("\n Doc du lieu tu tap tin: ");
	if(xuat != NULL)
	{
		int t;
		while(!feof(xuat))
		{
			fscanf(xuat, "%d ", &t);
			printf("%d\t", t); 
		} 
	}
	printf("\n");
	fclose(xuat);

    //sapxep;
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j])
            {
                int c = a[i];
                a[i]  = a[j];
                a[j]  = c;  
            }
    //Ghi danh sach da sap xep vao file;
    sn = fopen("dataSn.txt", "at");
    if (sn != NULL)
    {
        for (int i = 0; i < n; i++)
        {
            printf("\n Ghi cac phan tu da sap xep vao file;\n");
            fprintf(sn, "%d ", a[i]);
        }   
        fprintf(sn, "\n");
    }
    fclose(sn);
    return 0;
}

