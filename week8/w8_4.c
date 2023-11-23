#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int marks[2][3][4] = {};
    for (int x = 0; x < 2; x++){
        for (int y = 0; y < 3; y++){
            for (int z = 0; z < 4; z++){
                int num = (rand() % (31)) + 70;
                marks[x][y][z] = num;
                printf("%d ",marks[x][y][z]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}