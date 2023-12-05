#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("An int is size: %ld\n", sizeof(int));
    printf("A double is size: %ld\n", sizeof(double));
    printf("A char is size: %ld\n", sizeof(char));

    char* word = "eeee";
    printf("The word %s is size: %ld\n", word, sizeof(word)); // amount of space the pointer is using


    char* address = malloc(200 * sizeof(char));
    int* data = malloc(70 * sizeof(int));

    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    double* samples = malloc(size * sizeof(double));

    int** array_2d; // creates a double pointer (pointer to a pointer)
    int num_of_rows = 100;
    int num_of_cols = 100;

    array_2d = malloc(num_of_rows * sizeof(int*));
    for(int i = 0; i < num_of_rows; i++)
    {
        array_2d[i] = malloc(num_of_cols*sizeof(int));
    }
}