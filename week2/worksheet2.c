#include <stdio.h>

int main(){
    // task 1
    int array1[5] = {1,2,3,4,5};
    int a, array1Total = 0;
    for (a = 0; a < 5; a++){
        array1Total = array1Total + array1[a];
    }
    printf("Sum of array: %d\n", array1Total);

    // task 2
    int array2[5] = {1,2,3,4,5};
    int array2Reverse[5] = {0,0,0,0,0};
    int b = 4;
    for (a = 0; a < 5; a++){
           array2Reverse[b] = array2[a];
           b -= 1;
    }
    for (a = 0; a < 5; a++){
           printf("%d\n", array2Reverse[a]);
    }

    // task 3
    int array3[5] = {4,3,2,5,1};
    int maxElement = 0;
    for (a = 0; a < 5; a++){
        if (array3[a] > maxElement){
            maxElement = array3[a];
        }
    }
    printf("Maximum element: %d\n", maxElement);

    // task 4
    int array4[5] = {1,2,3,4,5};
    int array4Rotation[5] = {0,0,0,0,0};
    for (a = 0; a < 4; a++){
        array4Rotation[a+1] = array4[a];
        }
    array4Rotation[0] = array4[4];
    for (a = 0; a < 5; a++){
           printf("%d\n", array4Rotation[a]);
    }

    // task 5
    int array5[6] = {23,42,1,42,2,1};

    for (a = 0; a < 6; a++){    
        for (b = a + 1; b < 6; b++){    
            if(array5[a] == array5[b]){   
                printf("Duplicate: %d\n", array5[b]);
            }
        }
    }

    // task 6
    int array6[3] = {1,2,3};
    int array7[3] = {4,5,6};
    int array8[6] = {};
    b = 0;
    for (a = 0; a < 6; a+=2){
        array8[a] = array6[b];
        array8[a+1] = array7[b];
        b += 1;
    }

    for (a = 0; a < 6; a++){
           printf("%d\n", array8[a]);
    }

    // return
    return 0;
}