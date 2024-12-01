#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, currentLength, index;

    printf("Nhap so luong phan tu ban dau (toi da %d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    currentLength = n; 

    printf("Nhap vi tri can xoa (tu 0 den %d): ", currentLength - 1);
    scanf("%d", &index);

    if (index < 0 || index >= currentLength) {
        printf("Vi tri xoa khong hop le.\n");
    } else {
        for (int i = index; i < currentLength - 1; i++) {
            arr[i] = arr[i + 1];
        }
        currentLength--; 
        printf("Mang sau khi xoa:\n");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}