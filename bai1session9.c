#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, currentLength, value, addIndex;

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

    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (tu 0 den %d): ", MAX_SIZE - 1);
    scanf("%d", &addIndex);

    if (addIndex < 0 || addIndex > MAX_SIZE - 1) {
        printf("Vi tri them khong hop le.\n");
    } else {
        if (addIndex >= currentLength) {
            arr[addIndex] = value;
            currentLength = addIndex + 1;
        } else {
            for (int i = currentLength - 1; i >= addIndex; i--) {
                arr[i + 1] = arr[i];
            }
            arr[addIndex] = value;
            currentLength++;
        }

      
        printf("Mang sau khi them:\n");
        for (int i = 0; i < currentLength; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}