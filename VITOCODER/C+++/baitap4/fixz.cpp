#include <stdio.h>

// Hàm nhập mảng 2 chiều
void nhapMang2D(int a[][100], int n, int m) {
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// Hàm in mảng 2 chiều
void inMang2D(int a[][100], int n, int m) {
    printf("Mang 2D:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

// Hàm quy mảng 2 chiều về mảng 1 chiều
void quyMang2DThanhMang1D(int a[][100], int n, int m, int b[]) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            b[k++] = a[i][j];
        }
    }
}

// Hàm sắp xếp mảng 1 chiều
void sapXepMang1D(int b[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (b[i] > b[j]) {
                // Hoan doi gia tri
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}

// Hàm đưa mảng 1 chiều về lại mảng 2 chiều
void quyMang1DThanhMang2D(int b[], int a[][100], int n, int m) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = b[k++];
        }
    }
}

int main() {
    int n, m;

    // Nhập số hàng và số cột
    printf("Nhap so hang: ");
    scanf("%d", &n);
    printf("Nhap so cot: ");
    scanf("%d", &m);

    // Khởi tạo mảng 2 chiều
    int a[100][100];

    // Gọi hàm nhập mảng
    nhapMang2D(a, n, m);

    // In mảng trước khi sắp xếp
    printf("\nMang truoc khi sap xep:\n");
    inMang2D(a, n, m);

    // Quy mảng 2 chiều về mảng 1 chiều
    int b[10000];
    quyMang2DThanhMang1D(a, n, m, b);

    // Sắp xếp mảng 1 chiều
    sapXepMang1D(b, n * m);

    // Đưa mảng 1 chiều về lại mảng 2 chiều
    quyMang1DThanhMang2D(b, a, n, m);

    // In mảng sau khi sắp xếp
    printf("\nMang sau khi sap xep:\n");
    inMang2D(a, n, m);

    return 0;
}
