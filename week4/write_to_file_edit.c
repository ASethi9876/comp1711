#include <stdio.h>

int main()
{
    char *filename = "data.txt";

    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    int number;
    int num_lines;
    float total = 0;
    printf("Enter amount of numbers to add: ");
    scanf("%d",&num_lines);
    
    printf("Type %d numbers: ", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
        total += number;
    }
    
    printf("%f\n",total/num_lines);
    fclose(file);
    return 0;
}