#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printTotals(int a[4][5] ){
    for (int i = 0; i < 4; i++) {
        int total = 0;
        for (int j = 0; j < 5; j++) {
           total += a[i][j];
        }
        printf("%d\n",total);
    }
}

int main() {
    srand(time(NULL));
    int marks[4][5] = {};
    float total = 0;
    for (int x = 0; x < 4; x++) {
        for (int y = 0; y < 5; y++) {
            int num = rand() % 26;
            marks[x][y] = num;
            total += num;
        }
    }
    
    float mean = (total / 25);
    printTotals(marks);
    printf("Mean: %0.2f\n",mean);
    return 0;
}