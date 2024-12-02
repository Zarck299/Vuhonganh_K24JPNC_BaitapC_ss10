#include<stdio.h>
    int arr[] = {1,2,3,4,5};

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("Mang ban dau: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Mang sau khi sap xep theo thu tu tang dan: \n");
    printArray(arr, n);

    return 0;
}

