#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]), x, i;
    printf("nhap vao phan tu can tim: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (a[i] == x) {
            printf("vi tri phan tu trong mang la: %d\n", i);
        }
    }
    printf("phan tu khong ton tai trong mang\n");
}

