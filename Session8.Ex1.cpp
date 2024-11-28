#include <stdio.h>

int main() {
    int mang[] = {1, 2, 3, 4, 5};
    int n = sizeof(mang) / sizeof(mang[0]);
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", mang[i]);
    }
}

