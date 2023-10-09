#include <stdio.h>
int main(){
    float length, width;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    printf("The area of a rectangle %f\n",length * width);
    
    return 0;
}