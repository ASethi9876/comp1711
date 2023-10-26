#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[200];
    char line[100];
    int counter = 0;
    int numbers_over_1000 = 0;

    FILE* input = fopen("input.txt", "r");

    while(fgets(line,100,input)){
        nums[counter] = atoi(line);
        printf("%d\n", nums[counter]);

        if (nums[counter] > 1000){
            numbers_over_1000 ++;
        }

        counter++;
    }

    printf("There were %d numbers over 1000\n", numbers_over_1000);
    fclose(input);
    return 0;

}
