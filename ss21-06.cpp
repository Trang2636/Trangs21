#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourceFileName[] = "bt01.txt";
    char targetFileName[] = "bt06.txt";
    char s;
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Loi.\n");
        return 1 ; 
    }   
    targetFile = fopen(targetFileName, "w");
    if (targetFile == NULL) {
        printf("Loi");
        fclose(sourceFile);
      return 1 ; 
    }
    while ((s = fgetc(sourceFile)) != EOF) {
        fputc(s, targetFile);
    }

    printf("Done.\n");
    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}

