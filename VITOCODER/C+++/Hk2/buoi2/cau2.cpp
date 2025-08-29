#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <time.h>

void createRamdomArr(int a[], int n, int maximum);
int randint (int max);
void Xuatmang(int a[], int n);
void hoandoi(int &x, int &y);
void SelectionSort (int a[], int n);
void BubbleSort(int a[], int n);
int partition (int a[], int l, int r);
void quicksort (int a[], int l, int r);
void heapify (int a[], int n, int i);
void heapsort (int a[], int n);


int main ()
{
    int n=1000; int a[1000];

    createRamdomArr(a, n, 1000);
    printf("Mang ban dau chua sap xep: "); Xuatmang(a, n);
    
    int opt;     
    printf("\nChon phuong phap Sap xep: ");scanf("%d", &opt);

    clock_t start = clock();
    switch (opt)
    {
        case 1: SelectionSort(a, n);
                break;
        case 2: BubbleSort(a, n);
                break;
        case 3: 
                printf("                                        Sap xep theo QuickSort: \n");
                quicksort(a, 0, n - 1);
                break;
        case 4: 
                printf("                                        Sap xep theo HeapSort: \n");
                heapsort(a, n);
                break;           
    }  
    clock_t end = clock();
    double t = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nMang sau khi da sap xep: "); Xuatmang(a, n);
    printf("Thoi gian thuc hien : %.3f", t);
    return 0;
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
    printf("                                        Sap xep theo SelectionSort: \n");
    int k; 
    for(int i = 0; i < n-1; i++)
    {
        k = i;
        for(int j = i+1; j < n; j++)
            if (a[j] < a[k])
                k = j;
        hoandoi(a[k], a[i]);
    }
}

void BubbleSort(int a[], int n) 
{ 
    printf("                                        Sap xep theo BubbleSort: \n");
    int i,j;
    for(i=0; i<(n-1);i++)
    {
        for(j=n-1; j> i; j--)
             if(a[j] < a[j-1]) 
                hoandoi(a[j], a[j-1]);
    }
}

int partition (int a[], int l, int r)
{
// sap theo lomuto =)))))
    int pivot = a[r];// goi chot la right
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (a[j] <= pivot)
        {
            ++i;
            hoandoi(a[i], a[j]);
        }
    }
    // dua chot ve giua =))
        ++i;
        hoandoi(a[i], a[r]);
        return i; //nha cai vi tri cua chot
}

void quicksort (int a[], int l, int r)
{
   
    if (l >= r) return; //dieu kien ket thuc de quy
    int p = partition(a, l , r);
    quicksort(a, l, p - 1);
    quicksort(a, p + 1, r);
}

void heapify (int a[], int n, int i)
{
    int largest = i; // tao cay
    int l = 2 * i + 1; // goc con ben trai
    int r = 2 * i + 2; // goc con ben phai
    
    // sap xep maxheap
    if (l < n && a[l] > a[largest])
        largest = l;
    if (r < n && a[r] > a[largest])
        largest = r;

        if (largest != i)
        {
            hoandoi(a[i], a[largest]);
            heapify(a, n, largest);
        }
}

void heapsort (int a[], int n)
{
    for (int i = n / 2 -1; i >= 0; i--)
        heapify(a, n, i);

    for (int i = n -1; i >= 0; i--){
        hoandoi(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int randint (int max)
{
    if (max -1 == RAND_MAX) return rand();
    else 
    {
        long end = RAND_MAX / max;
        assert (end > 0L);
        end *= max;
        int r;
        while ((r = rand()) >= end);
        return r % max;
    }
}

void createRamdomArr(int a[], int n, int maximum)
{
    for (int i = 0; i < n; i++)
    a[i] = randint(maximum);
}