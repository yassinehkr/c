#include <stdio.h>
#include <stdlib.h>

int main() { 
    char line[255];
    
    FILE *fpointer = fopen("C:\\Users\\yhekk\\Documents\\c\\newFile.txt", "w");
    fprintf(fpointer, "This is our new file");
    fopen("C:\\Users\\yhekk\\Documents\\c\\newFile.txt", "a");
    fprintf(fpointer, "\nThis our new edit on the file.");
   
    fclose(fpointer);

    return 0;
}
