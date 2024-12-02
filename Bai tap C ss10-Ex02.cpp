#include<stdio.h>
int main() {
    int arr[] = {1,14,27,35,44,58};
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("Mang ban dau: \n");
    for ( int i =0; i < n; i++){
        printf("%d\t", arr[i]);
    }
    for (int i = 1; i < arr[i]; i++);
    int keyNumber = arr[i];
    int j = i-1;
    while ( j >= 0 && key < arr[j]){
        arr[j+1] = arr[j];
        j--;
    }
    printf("\n");
    printf("Mang sau khi sap xep theo thu tu tang dan: \n");
    for ( int i = 0; i < n; i++);
    printf("%d\t", arr[i]);

    return 0;
}

