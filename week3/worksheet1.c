#include <stdio.h>

int main(){
    // task 1
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (num == 0){
        printf("Zero\n");
    }
    else if (num > 0){
        printf("Positive\n");
    }
    else if (num < 0){
        printf("Negative\n");
    }

    // task 2
    printf("Enter number: ");
    scanf("%d", &num);
    
    if ((num % 4 == 0) && (num % 5 == 0)){
        printf("Divisible by both 4 and 5 \n");
    }
    else{
        printf("Not divisible by both 4 and 5 \n");
    }

    // task 3 is what we've done before
    
    // task 4 is basically what we've done before as well

    // task 5
    int a = -1;
    while ((a < 1) || (a > 5)){
        printf("Enter number between 1 and 5 (inclusive): ");
        scanf("%d", &a);

        if ((a < 1) || (a > 5)){
            printf("Invalid input. \n");        
        }
    }

    switch (a)
    {
        case 1:     printf ("Option 1 has been selected\n");
        break;

        case 2:     printf ("Option 2 has been selected\n");
        break;

        case 3:     printf ("Option 3 has been selected\n");
        break;

        case 4:     printf ("Option 4 has been selected\n");
        break;

        case 5:     printf ("Option 5 has been selected\n");
        break;
    }

    // task 6
    int num1 = 0;
    while (num1 != -1){
        printf("Enter a number: ");
        scanf("%d", &num1);
        if ((num1 >= 0) && (num1 <= 100)){
            printf("In range \n");
        }
        else if (num1 == -1){
            printf("Termination value \n");
        }
        else{
            printf("Out of range \n");
        }
    }

    // return
    return 0;
}
