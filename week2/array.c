#include <stdio.h>

int main() {
    int a;
    int my_array[4] = {10,20,30,0};
    my_array[3] = my_array[0] + my_array[2];
    for (a = 0; a < 4; a++){
        printf("%d\n",my_array[a]);
    }
    return 0;
}