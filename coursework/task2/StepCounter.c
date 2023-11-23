#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array
    FITNESS_DATA data[10000];
    char* smallestStepsDate;
    char* smallestStepsTime;
    char* largestStepsDate;
    char* largestStepsTime;
    char* longestPeriodStartDate;
    char* longestPeriodStartTime;
    char* longestPeriodEndDate;
    char* longestPeriodEndTime;
    float mean = 0;
    char line[buffer_size];
    char filename[buffer_size];

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
int main(){
    while (1){
        char uInput = 'A';     
        printf("A: Enter filename to be imported \n");
        printf("B: Display total number of records in file \n");
        printf("C: Display date and time of the timeslot with the fewest steps \n");
        printf("D: Display date and time of the timeslot with the fewest steps \n");
        printf("E: Display mean step count\n");
        printf("F: Display longest continuous period where the step count is above 500 steps \n");
        printf("Q: Exit \n");
        printf("Enter option: ");    
        scanf(" %c",&uInput);


        switch (uInput) {
        case 'A':
        case 'a':
            printf("Input filename: ");
            scanf(" %s",filename);

            FILE *file = fopen(filename, "r");
            if (file == NULL) {
                printf("Error: could not open file \n");
                return 1;
            }

            char date[11];
            char time[6];
            char steps[10];
            char pos[5];
            int smallestSteps = 10000;
            int largestSteps = 0;
            float total = 0;
            int counter = 0;
            int count500 = 0;
            int count500Max = 0;
            char* longestPeriodTempStartDate;
            char* longestPeriodTempStartTime;
            while (fgets(line, buffer_size, file)){
                tokeniseRecord(line, ",", date, time, steps);
                strcpy(data[counter].date, date);
                strcpy(data[counter].time, time);
                strcpy(data[counter].steps, steps);

                int stepInt = atoi(steps);
                total += stepInt;

                if (stepInt > 500){
                    if (count500 == 0){
                        longestPeriodTempStartDate = data[counter].date;
                        longestPeriodTempStartTime = data[counter].time; 
                    }
                    count500 += 1;

                    if (count500 > count500Max){
                        count500Max = count500;
                        longestPeriodStartDate = longestPeriodTempStartDate;
                        longestPeriodStartTime = longestPeriodTempStartTime;  
                        longestPeriodEndDate = data[counter].date;
                        longestPeriodEndTime = data[counter].time;    
                    }

                }

                else{
                    count500 = 0;
                }

                if (stepInt < smallestSteps){
                    smallestStepsDate = data[counter].date;
                    smallestStepsTime = data[counter].time;
                    smallestSteps = stepInt;
                }

                if (stepInt > largestSteps){
                    largestStepsDate = data[counter].date;
                    largestStepsTime = data[counter].time;
                    largestSteps = stepInt;
                }
                counter++;

            }
            mean = total / counter;
            fclose(file);

            break;
        
        case 'B':
        case 'b':
            printf("Total records: %d\n",counter);
            break;

        case 'C':
        case 'c':
            printf("Fewest steps: %s %s\n",smallestStepsDate,smallestStepsTime);
            break;

        case 'D':
        case 'd':
            printf("Largest steps: %s %s\n",largestStepsDate,largestStepsTime);
            break;

        case 'E':
        case 'e':
            printf("Mean step count: %0.0f\n",mean);
            break;

        case 'F':
        case 'f':
            printf("Longest period start: %s %s\n",longestPeriodStartDate, longestPeriodStartTime);
            printf("Longest period end: %s %s\n",longestPeriodEndDate, longestPeriodEndTime);
            break;

        case 'Q':
        case 'q':
            return 0;
            break;

        default:
            printf("Invalid choice. \n");
            break; 
        }
    }
}