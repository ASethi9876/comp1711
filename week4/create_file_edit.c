#include <stdio.h>
#include "utils.h"

int main () {
    char* filename = "data.txt";
    FILE *file = open_file(filename, "w"); // or "a", "w+", "a+"

    fclose(file);
    return 0;
}