#include <stdio.h>

int main(){
    int numArray[10] = {};
    float total = 0;
    for (int i=0; i<10; i++){
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        numArray[i] = num;
        total += num;
    }   
    float mean = (total / 10);
    for (int i=0; i<10; i++){
        printf("%d\n",numArray[i]);
    }
    printf("%f\n",mean);
}
