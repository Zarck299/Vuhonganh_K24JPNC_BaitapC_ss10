#include <stdio.h>

void selectionSort(int arr[], int m) {
    for (int i = 0; i < m - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printMatrix(int arr[][100], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    printf("Nhap so dong mang (n): ");
    scanf("%d", &n);
    printf("Nhap so cot mang (m): ");
    scanf("%d", &m);
    int arr[100][100];
    printf("Nhap cac phan tu cho mang 2 chieu:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        selectionSort(arr[i], m);
    }
    printf("Mang sau khi sap xep theo tung dong:\n");
    printMatrix(arr, n, m);

    return 0;
}

