#include <stdio.h>
int main(){
    // task 1
    int int1, int2;
    printf("Enter num 1 and 2: ");
    scanf("%d %d",&int1, &int2);
    printf("%d\n",int1+int2);

    // task 2
    char animal[100];
    printf("Enter favourite animal: ");
    scanf("%s",animal);
    printf("%s\n",animal);

    // task 3
    int num1, answer;
    scanf("%d", &num1);
    answer = 2*num1;
    printf("2 times %d is %d",num1,answer);
    return 0;

    // return
    return 0;
}

