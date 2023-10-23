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

    char* str;
    int num_lines;

    printf("Enter amount of strings to add: ");
    scanf("%d", &num_lines);
    
    printf("Type %d strings: ", num_lines);
    
    for (int i = 0; i < num_lines; i++)
    {
        scanf("%s", str);
        fprintf(file, "%s\n", str);
    }

    fclose(file);
    return 0;
}