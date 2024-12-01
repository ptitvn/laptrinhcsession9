#include <stdio.h>
#define MAX_SIZE 100

void nhapMang(int arr[], int *n) {
    printf("Nhap so luong phan tu: ");
    scanf("%d", n);
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++) {
        scanf("%d", &arr[i]);
    }
}

void xuatMang(int arr[], int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void themPhanTu(int arr[], int *n) {
    int index, value;
    printf("Nhap vi tri muon them: ");
    scanf("%d", &index);
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
}

void xoaPhanTu(int arr[], int *n) {
    int index;
    printf("Nhap vi tri muon xoa: ");
    scanf("%d", &index);
}

int main() {
    int arr[MAX_SIZE];
    int n = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Nhap mang\n");
        printf("2. Xuat mang\n");
        printf("3. Them phan tu\n");
        printf("4. Xoa phan tu\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(arr, &n);
                break;
            case 2:
                xuatMang(arr, n);
                break;
            case 3:
                themPhanTu(arr, &n);
                break;
            case 4:
                xoaPhanTu(arr, &n);
                break;
            case 5:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while (choice != 5);

    return 0;
}