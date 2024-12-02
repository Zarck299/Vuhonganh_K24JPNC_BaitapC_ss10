#include<stdio.h>
    int main () {
    	int arr[] = {1,2,3,4,5};
    	int a,found;
    	int n = sizeof(arr)/sizeof(arr[0]);
    	printf("Hay nhap phan tu ban muon: \n",a);
    	scanf("%d", &a);
    	for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
			printf("Phan tu %d duoc tim thay tai vi tri %d.\n", a,i+1);
			found = 1;
		}
}
		if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", a);
    }
    return 0;
	}
