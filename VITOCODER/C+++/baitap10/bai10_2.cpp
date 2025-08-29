
#include <stdio.h> 
#define MAX 50
int main ()
{
	int a[MAX];
	int n = 0;
	printf("\n"); 
	//doc du lieu tu tap tin sau khi da sap xep
	FILE *fi = fopen("dataSn.txt", "rt");
	int i = 0;
	if(fi != NULL)
	{
		while(!feof(fi))
		{
			fscanf(fi, "%d", &a[i]);
			printf("\n Doc phan tu a[%d] = %d \n", i, a[i]);
			i++; 
		} 
	}
	n = i;
	fclose(fi);
	printf("\n"); 
	
	//mo 1 tep tin khac ghi cac phan tu chia het cho 2 vao file.
	FILE *fo = fopen("ketqua.txt", "wt");
	if(fo != NULL) 
	{
		for(int i = 0; i < n; i++) 
		{
			if(a[i]%2 == 0) 
			{
				printf("\n Ghi phan tu a[%d] = %d vao file \n", i, a[i]);
				fprintf(fo, "%d ", a[i]); 
			}
		} 
		fprintf(fo, "\n"); 
	}
	printf("\n"); 
	
//	tinh tong ne;
	int tong = 0;
	for(i = 0; i < n; i++)
	{
		tong += a[i];
	} 
	
	if(fo != NULL)
	{
		printf("\n Ghi tong = %d vao file", tong);
		fprintf(fo, "%d", tong);
		fprintf(fo, "\n"); 
	} 
	printf("\n"); 
	
	//sapxep
	for(int i = 0; i < n - 1; i++) 
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] > a[j]) 
			{
				int u = a[i]; 
				a[i] = a[j]; 
				a[j] = u; 
			}
		}
	}
	
	if(fo != NULL)
	{
		for(int i = 0; i < n; i++)
		{
			printf("\n Ghi phan tu thu a[%d] = %d", i , a[i]);
			fprintf(fo, "%d ", a[i]); 
		} 
		fprintf(fo, "\n"); 
	}
	fclose(fo);
	return 0; 

} 

