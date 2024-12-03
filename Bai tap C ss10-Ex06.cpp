#include <stdio.h>

int main() {
    int arr[] = {3, 5, 7, 5, 9, 5, 12};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);
    int positions[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            positions[count] = i + 1;
            count++;
        }
    }

    // Kiem tra neu có phan tu trung voi so dã nh?p
    if (count > 0) {
        printf("Phan tu %d tim thay tai cac vi tri sau: \n", key);
        for (int i = 0; i < count; i++) {
            printf("V? trí %d\n", positions[i]);
        }
    } else {
        printf("Phan tu %d không ton tai trong mang.\n", key);
    }

    return 0;
}

