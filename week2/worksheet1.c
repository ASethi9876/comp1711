#include <stdio.h>

int main(){
    // task 1
    printf("Hello, World!\n");

    // task 2
    int int1, int2;
    printf("Enter integer 1: ");
    scanf("%d",&int1);

    printf("Enter integer 2: ");
    scanf("%d",&int2);

    printf("The sum is %d\n", int1+int2);

    // task 3
    printf("%d \n", __INT_MAX__);
    printf("%f \n", __FLT_MAX__);
    printf("%f \n", __DBL_MAX__);
    // printf("%c \n", __CHAR_MAX__);

    // task 4
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    printf("%f \n", radius * radius * 3.14);

    //task 5
    int var1, var2, temp;
    var1 = 2;
    var2 = 4;
    temp = var2;
    var2 = var1;
    var1 = temp;

    //task 6

    // return
    return 0;

}