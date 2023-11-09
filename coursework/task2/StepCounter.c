#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array
    FITNESS_DATA data[10000];
    int counter = 0;
    int smallestStepsRecord = 0;
    int largestStepsRecord = 0;

// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }




// Complete the main function
int main() {
    char uInput = '0';
    while (uInput != 'Q'){
        printf("A: Enter filename to be imported \n");
        printf("B: Display total number of records in file \n");
        printf("C: Display date and time of the timeslot with the fewest steps \n");
        printf("D: Display date and time of the timeslot with the fewest steps \n");
        printf("E: Display mean step count\n");
        printf("F: Display longest continuous period where the step count is above 500 steps \n");
        printf("Q: Exit \n");

        printf("Enter option: ");
        scanf("%c",&uInput);

        if (uInput == 'A'){
            char filename[100];
            printf("Input filename: ");
            scanf("%s",filename);

            FILE *file = fopen(filename, "r");
            if (file == NULL) {
                printf("Error: could not open file \n");
                return 1;
            }

           int buffer_size = 500;
           char line[buffer_size];
           char date[11];
           char time[6];
           char steps[10];
           char pos[5];
           int smallestSteps = 10000;
           int largestSteps = 0;
    
            while (fgets(line, buffer_size, file)){
                tokeniseRecord(line, ",", date, time, steps);
                strcpy(data[counter].date, date);
                strcpy(data[counter].time, time);
                strcpy(data[counter].steps, steps);
                counter++;

                int stepInt = atoi(steps);
                if (stepInt < smallestSteps){
                    smallestStepsRecord = counter;
                    smallestSteps = stepInt;
                }
                if (stepInt > largestSteps){
                    largestStepsRecord = counter;
                    largestSteps = stepInt;
                }
            }

            fclose(file);
        }
        
        else if (uInput == 'B'){
            printf("Total records: %d\n",counter);
        } 

        else if (uInput == 'C'){
            printf("%d\n",smallestStepsRecord);
        }

        else if (uInput == 'D'){
            printf("%d\n",largestStepsRecord);
        }

        else if (uInput == 'E'){

        }

        else if (uInput == 'F'){

        }
    }
    return 0;

}