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
    printf("%lf \n", __DBL_MAX__);
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
    int int3;
    printf("Enter integer 3: ");
    scanf("%d",&int3);
    if (int3 % 2 == 0)
    {
        printf("Even \n");
    }
    else
    {
        printf("Odd \n");
    }

    // task 7
    float far, cel;
    printf("Enter temperature: ");
    scanf("%f",&far);
    cel = ((far - 32.0) / 1.8);
    printf("Temperature in celsius: %f\n", cel);

    // task 8
    int int4, total=1;
    printf("Enter an integer: ");
    scanf("%d",&int4);

    while (int4 > 0)
    {
        total = (total * int4);
        int4 --;
    }

    printf("%d \n", total);

    // week 9
    double distance, days;
    printf("Enter number of days: ");
    scanf("%lf",&days);
    distance = days * 25900000000;
    printf("Distance travelled by light: %lf\n", distance);
    
    // week 10
    float principal, rate, time;
    printf("Enter principal: ");
    scanf("%f",&principal);
    printf("Enter rate: ");
    scanf("%f",&rate);
    printf("Enter time: ");
    scanf("%f",&time);
    printf("%.2f\n", principal * (1 + (rate * time)));

    // return
    return 0;

}