#include <stdio.h>

int main(){
    int a[3][3] = {{9,8,7},{1,2,3},{6,4,5}};
    int n = 3;
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
                sum += a[i][j];
            }
        }
    }
    printf("tong cac phan tu tren duong bien cua ma tran la: %d\n", sum);
}

