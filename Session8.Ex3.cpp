#include <stdio.h>

int main(){
    int n;
    printf("nhap vao mot so nguyen: ");
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            a[i][j] = i * n + j + 1;
    printf("Ma tran vuong %dx%d:\n", n, n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
}

