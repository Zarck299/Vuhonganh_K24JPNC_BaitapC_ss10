#include <stdio.h>

int main() {
    int arr[] = {3, 5, 7, 5, 9, 5, 12};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int key;
    printf("Nh?p ph?n t? c?n t�m: ");
    scanf("%d", &key);
    int positions[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            positions[count] = i + 1;
            count++;
        }
    }

    // Ki?m tra n?u c� ph?n t? tr�ng v?i s? d� nh?p
    if (count > 0) {
        printf("Ph?n t? %d t�m th?y t?i c�c v? tr� sau: \n", key);
        for (int i = 0; i < count; i++) {
            printf("V? tr� %d\n", positions[i]);
        }
    } else {
        printf("Ph?n t? %d kh�ng t?n t?i trong m?ng.\n", key);
    }

    return 0;
}

