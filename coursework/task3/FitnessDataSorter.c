#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the struct for the fitness data
typedef struct {
    char date[11];
    char time[6];
    int steps;
} FitnessData;

// Function to tokenize a record
void tokeniseRecord(char *record, char delimiter, char *date, char *time, int *steps) {
    char *ptr = strtok(record, &delimiter);
    if (ptr != NULL) {
        strcpy(date, ptr);
        ptr = strtok(NULL, &delimiter);
        if (ptr != NULL) {
            strcpy(time, ptr);
            ptr = strtok(NULL, &delimiter);
            if (ptr != NULL) {
                *steps = atoi(ptr);
            }
        }
    }
}


int main() {
    char filename[100];
    printf("Enter filename: ");
    scanf("%s",filename);

    
    FILE *file = fopen(filename,"r");
    if (file == NULL) {
        printf("Error: invalid file\n");
        return 1;
    }

    char* nameAppend = ".tsv";
    strncat(filename,nameAppend,4);
    
    FitnessData data[10000];
    int counter = 0;
    int buffer_size = 500;
    char line[buffer_size];
    char date[11];
    char time[6];
    char delim;
    int* steps;

    while (fgets(line, buffer_size, file)){
        tokeniseRecord(line, delim, date, time, steps);
        counter++;
    }

    fclose(file);
    char* nameAppend = ".tsv";
    strncat(filename,nameAppend,4);

    FILE *newfile = fopen(filename, "w"); // or "a", "w+", "a+"
    if (newfile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }
    fclose(newfile);
    return 0;
}