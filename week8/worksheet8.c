#include <stdio.h>

void printArray(int arr[2][3]){
    for (int i=0;i<=1;i++){
        for (int j=0;j<=2;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}

int transpose(int arr[2][3]){
    int newArr[3][2];
    for (int i=0;i<=2;i++){
        for (int j=0;j<=1;j++){
            newArr[i][j] = arr[j][i];
            printf("%d",newArr[i][j]);
            }
        printf("\n");
    }
}

int main(){
    int array1[2][3] = {{1,2,3},{4,5,6}};
    printArray(array1);
    transpose(array1);
    return 0;
}