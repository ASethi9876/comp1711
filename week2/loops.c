#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int a;
    for (a = 1; a <= 10; a++) {
        printf("%d\n",a);
    }
    for (a = 0; a <= 50; a+=2) {
        printf("%d\n",a);
    }
    for (a = 11; a <= 1000; a+=11) {
        printf("%d\n",a);
    }
    for (a = 100; a >= 0; a-=5) {
        printf("%d\n",a);
    }


    int num;
    num = (rand() % 10) + 1;
    int guess;
    printf("Enter a number between 1 and 10: ");
    scanf("%d",&guess);
    while (guess != num){
        if (guess >= num){
            printf("Too high \n");
        }
        else{
            printf("Too low \n");
        }
    printf("Enter a number: ");
    scanf("%d",&guess);
    }
    printf("The number was %d\n",num);

    
    int x,y;
    for (x = 1; x <= 12; x++){
        for (y = 1; y <= 12; y++){
            printf("%d x %d = %d\n",x,y,x*y);
        }
    }

    return 0;
}

