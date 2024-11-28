#include <stdio.h>

int main() {
    int a[3][3] = {{32,5,2},{1,9,8},{7,4,6}};
    int max = a[0][0];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    printf("phan tu lon nhat trong mang la: %d\n", max);
}

