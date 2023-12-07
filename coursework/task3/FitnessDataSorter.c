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
void tokeniseRecord(char *record, char *delimiter, char *date, char *time, int *steps) {
    char *ptr = strtok(record, &*delimiter);
    if (ptr != NULL) {
        strcpy(date, ptr);
        ptr = strtok(NULL, &*delimiter);
        if (ptr != NULL) {
            strcpy(time, ptr);
            ptr = strtok(NULL, &*delimiter);
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
    FitnessData data[10000];
    FitnessData sortedData[10000];
    int counter = 0;
    int buffer_size = 500;
    char line[buffer_size];
    char date[11];
    char time[6];
    char* delim = ",";
    int steps;
    while (fgets(line, buffer_size, file)){
        tokeniseRecord(line, delim, date, time, &steps);
        strcpy(data[counter].date, date);
        strcpy(data[counter].time, time);
        data[counter].steps = steps;
        if (data[counter].date == "" || data[counter].time == "" || data[counter].steps == 0){
            printf("Error: invalid file\n");
            return 1;
        }
        counter++;
    }

    char* nameAppend = ".tsv";
    char* new = strncat(filename,nameAppend,4);
    FILE *newfile = fopen(new, "w");
    if (newfile == NULL)
    {
        printf("Error: invalid file\n");
        return 1;
    }
    
    // Insertion sort adapted from: https://www.geeksforgeeks.org/c-program-for-insertion-sort/
    sortedData[0] = data[0];
    int y;
    for (int x=1; x<counter; x++){
        y=x;
        while (y>=0 && data[x].steps > sortedData[y].steps){
            sortedData[y+1] = sortedData[y];
            y-=1;
        }
        sortedData[y+1] = data[x];
    }
    

    for (int i=0;i<counter;i++){
        fprintf(newfile, "%s\t%s\t%d\n", sortedData[i].date,sortedData[i].time,sortedData[i].steps);
    }

    fclose(file);
    fclose(newfile);
    return 0;
}