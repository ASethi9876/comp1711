#include <stdio.h>

int main()
{
    // set up 15 slots of memory for a string
    char name[15];

    // prompting the user
    printf("Hello, please enter your name: ");

    // take the user input and stores in name
    scanf("%s", name);

    // prints name
    printf("Your name is %s\n", name);

    return 0;
}