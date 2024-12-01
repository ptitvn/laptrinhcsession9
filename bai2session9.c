#include <stdio.h>

int main() {
    int arr[100]; 
    int n, index, newValue;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri can sua (tu 0 den %d): ", n - 1);
    scanf("%d", &index);
    printf("Nhap gia tri moi: ");
    scanf("%d", &newValue);

    if (index < 0 || index >= n) {
        printf("Vi tri sua khong hop le.\n");
    } else {
        
        arr[index] = newValue;

        printf("Mang sau khi sua:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}