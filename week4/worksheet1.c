#include <stdio.h>
#include <stdlib.h>

int main () {
    char* filename = "squares.dat";
    FILE *file = fopen (filename, "w");
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        fprintf(file, "%d\n", i * i);
    }

    fclose(file);
    return 0;
}